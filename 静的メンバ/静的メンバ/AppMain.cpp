#include"DxLib.h"
#include"KeyBoardControl.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		return - 1;
	}

	//���C�����[�v
	while (ProcessMessage() != -1)
	{

		KeyBoardControl::Update();

		printf("")

		if (KeyBoardControl::GetKeyUp(KEY_INPUT_ESCAPE))
		{
			break;
		}
	}

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}