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
	//定義
	Player player;

		//初期化処理
		player.x = 0.0f;
	    player.y = 0.0f;

		//ループ処理
	while (ProcessMessage() != -1)
	{
		player.Move();

		player.Update();

		ClearDrawScreen();

		player.Draw();

		ScreenFlip();
	}

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}
