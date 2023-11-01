#include"DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		return -1;
	}




	//�ϐ���` //int�͐���

	int player_x = 320;
	int player_y = 240;

	int x = 1, y = 1;

	//�`����ʂ𗠉�ʂ���n�߂�
	SetDrawScreen(DX_SCREEN_BACK);

	//�Q�[�����[�v
	while (ProcessMessage() != -1)

	{
		//�`��̏�����
		ClearDrawScreen();

		//�~�̂����W�Ƃx���W�𓮂��� //���x
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

		//�~�̕`��
		DrawCircle(player_x, player_y, 30, GetColor(255, 255, 255), TRUE);



		//����ʂ̕`��
		ScreenFlip();
	}





	//���͑ҋ@
	WaitKey();

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}