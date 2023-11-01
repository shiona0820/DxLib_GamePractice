#include"DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return -1;
	}




	//変数定義 //intは整数

	int player_x = 320;
	int player_y = 240;

	int x = 1, y = 1;

	//描画先画面を裏画面から始める
	SetDrawScreen(DX_SCREEN_BACK);

	//ゲームループ
	while (ProcessMessage() != -1)

	{
		//描画の初期化
		ClearDrawScreen();

		//円のｘ座標とＹ座標を動かす //速度
		player_x += x;
		player_y += y;

		if (player_x <= 30)
		{
			x = 1;
		}

		if (player_y <= 30)
		{
			y = 1;
		}

		if (player_x >= 610)
		{
			x = -1;
		}

		if (player_y >= 450)
		{
			y = -1;
		}

		//円の描写
		DrawCircle(player_x, player_y, 30, GetColor(255, 255, 255), TRUE);



		//裏画面の描写
		ScreenFlip();
	}





	//入力待機
	WaitKey();

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}