#include"DxLib.h"
#include"Ball.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return - 1;
	}

	Enemy b1;
	Enemy b2(320.0f, 240.0f);


	while (ProcessMessage() != -1)
	{
		//動き
		b1.Move();
		//跳ね返り
		b2.Bound();

		b1.Update();
		b2.Update();

		ClearDrawScreen();

		b1.Draw();
		b2.Draw();

		ScreenFlip();
	}

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}