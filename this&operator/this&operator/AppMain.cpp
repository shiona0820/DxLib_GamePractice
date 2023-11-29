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

	Ball* ball = new Ball;

	while (ProcessMessage() != -1)
	{
		ball->Update();

		ClearDrawScreen();

		ball->Draw();

		ScreenFlip();
	}

	delete ball;

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}