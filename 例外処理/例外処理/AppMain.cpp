#include"DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		//異常終了を通知
		return - 1;
	}

	//例外が発生しゆる処理を試す
	try  //エラーを試す
	{
		//画像の読み込み
		int graphic_handle = LoadGraph("images/test.png");

		//エラーチェック
		if (graphic_handle == -1)
		{
			//例外を投げる、送信する
			throw("画像ファイルが読み込めません\n");
		}

		//メインループ
		while (ProcessMessage() != -1)
		{

			//画面の初期化
			ClearDrawScreen();

			//画像の描画
			DrawGraph(320, 240, graphic_handle, TRUE);

			//裏画面の内容を表画面に描画
			ScreenFlip();
		}
	}

	//［throeに合わせたcatchを書く必要がある］
	catch (const char* err_log)  //エラーを取得？
	{
		//デバックログの出力
		OutputDebugString(err_log);
	}

	//Dxライブラリ使用の終了処理
	DxLib_End();

	//異常終了を通知
	return 0;
}