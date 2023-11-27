#include"DxLib.h"
#include"Ball.h"
#include"Bar.h"

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

	while (ProcessMessage() != -1)
	{
		p_ball->Update();
		p_bar->Update();

		int mouse_x;
		GetMousePoint(&mouse_x, NULL);
		p_bar->SetLocation((float)mouse_x, 420.0f);

		ClearDrawScreen();

		p_ball->Draw();
		p_bar->Draw();

		ScreenFlip();
	}

	delete p_ball;
	delete p_bar;

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}