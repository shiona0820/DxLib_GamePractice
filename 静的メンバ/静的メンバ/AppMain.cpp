#include"DxLib.h"
#include"KeyBoardControl.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return - 1;
	}

	//メインループ
	while (ProcessMessage() != -1)
	{

		KeyBoardControl::Update();

		printf("")

		if (KeyBoardControl::GetKeyUp(KEY_INPUT_ESCAPE))
		{
			break;
		}
	}

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}