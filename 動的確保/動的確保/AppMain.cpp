#include"DxLib.h"
#include"Ball.h"

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

	while (ProcessMessage() != -1)
	{
		p_ball->Update();

		ClearDrawScreen();

		p_ball->Draw();

		ScreenFlip();
	}

	delete p_ball;

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}