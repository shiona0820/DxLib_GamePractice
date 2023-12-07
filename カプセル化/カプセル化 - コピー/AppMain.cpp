#include"DxLib.h"
#include"Ball.h"
#include"Bar.h"
#include"math.h"


//ヒット判定
bool HitCheck(Bar* bar, Ball* ball)
{
	if (ball != NULL)
	{    //三平方の定理
		//Bar,Ballが接触した時（真）接触していない時（偽）
		if (powf((bar->Get_X() - ball->Get_X()), 2.0f) + powf((bar->Get_Y() - ball->Get_Y()), 2.0f) < powf((bar->Get_radius() + ball->Get_radius()), 2.0f))
		{
			return true;  //（真）
		}
	}
   return false;     //（偽）
};



int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//ウィンドウモードで起動
	ChangeWindowMode(TRUE);

	//Dxライブラリの初期化処理
	if (DxLib_Init() == -1)
	{
		return - 1;
	}



	Ball* p_ball = new Ball;
	Bar* p_bar = new Bar;

	//メインループ
	while (ProcessMessage() != -1)
	{
		if (p_ball != NULL)
		{
			p_ball->Update();
		}

		p_bar->Update();
		
		int mouse_x;
		GetMousePoint(&mouse_x, NULL);
		p_bar->SetLocation((float)mouse_x, 420.0f);

		//描画の初期化
		ClearDrawScreen();

		if (p_ball != NULL)
		{
			p_ball->Draw();
		}

		p_bar->Draw();

		//ヒット判定が真なら消す
		if (HitCheck(p_bar, p_ball) == true)
		{
			delete p_ball;
			p_ball = NULL;
		}

		ScreenFlip();
	}

	
	// ボールがあったら、削除
	if (p_ball == NULL)
	{
		delete p_ball;
		delete p_bar;
	}


	//Dxライブラリ使用の終了処理
	DxLib_End();

	return 0;
}