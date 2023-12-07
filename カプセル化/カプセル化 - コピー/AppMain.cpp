#include"DxLib.h"
#include"Ball.h"
#include"Bar.h"
#include"math.h"


//�q�b�g����
bool HitCheck(Bar* bar, Ball* ball)
{
	if (ball != NULL)
	{    //�O�����̒藝
		//Bar,Ball���ڐG�������i�^�j�ڐG���Ă��Ȃ����i�U�j
		if (powf((bar->Get_X() - ball->Get_X()), 2.0f) + powf((bar->Get_Y() - ball->Get_Y()), 2.0f) < powf((bar->Get_radius() + ball->Get_radius()), 2.0f))
		{
			return true;  //�i�^�j
		}
	}
   return false;     //�i�U�j
};



int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		return - 1;
	}



	Ball* p_ball = new Ball;
	Bar* p_bar = new Bar;

	//���C�����[�v
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

		//�`��̏�����
		ClearDrawScreen();

		if (p_ball != NULL)
		{
			p_ball->Draw();
		}

		p_bar->Draw();

		//�q�b�g���肪�^�Ȃ����
		if (HitCheck(p_bar, p_ball) == true)
		{
			delete p_ball;
			p_ball = NULL;
		}

		ScreenFlip();
	}

	
	// �{�[������������A�폜
	if (p_ball == NULL)
	{
		delete p_ball;
		delete p_bar;
	}


	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}