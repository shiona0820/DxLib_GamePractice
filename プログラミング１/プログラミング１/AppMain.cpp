#include"DxLib.h"

//グローバル変数定義
int global = 30;

//プロトタイプ宣言
void Func1(int a[]);
void Func2(int* a);

//メイン関数
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//ローカル変数定義
	int num[] = {1,2,3};

	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return -1;
	}
	//関数の呼び出し
	Func1(num);

	//関数の呼び出し
	Func2(num);

	//入力待機
	WaitKey();

	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}

void Func1(int a[])
{
	int i;

	for (i = 0; i < 3; i++)
	{
		DrawFormatString(20, (20 + (20 * i)), GetColor(255, 255, 255, "%d", a[i]);
	}
}

void Func2(int* a)
{
	int i;

	for (i = 0; i < 3; i++)
	{
		DrawFormatString(20,(20+ (20 * i)), GetColor(255, 255, 255), "%d", * (a + i));
	}
}