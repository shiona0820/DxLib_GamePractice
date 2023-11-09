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
	//��`
	Player player;

		//����������
		player.x = 0.0f;
	    player.y = 0.0f;

		//���[�v����
	while (ProcessMessage() != -1)
	{
		player.Move();

		player.Update();

		ClearDrawScreen();

		player.Draw();

		ScreenFlip();
	}

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}
