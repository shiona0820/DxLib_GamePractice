#include"DxLib.h"

int WINAPI WinMain(_In_ HINSTANCE ih, _In_opt_ HINSTANCE ioh, _In_ LPSTR il, _In_ int ii)
{
	//�E�B���h�E���[�h�ŋN��
	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		//�ُ�I����ʒm
		return - 1;
	}

	//��O����������鏈��������
	try  //�G���[������
	{
		//�摜�̓ǂݍ���
		int graphic_handle = LoadGraph("images/test.png");

		//�G���[�`�F�b�N
		if (graphic_handle == -1)
		{
			//��O�𓊂���A���M����
			throw("�摜�t�@�C�����ǂݍ��߂܂���\n");
		}

		//���C�����[�v
		while (ProcessMessage() != -1)
		{

			//��ʂ̏�����
			ClearDrawScreen();

			//�摜�̕`��
			DrawGraph(320, 240, graphic_handle, TRUE);

			//����ʂ̓��e��\��ʂɕ`��
			ScreenFlip();
		}
	}

	//�mthroe�ɍ��킹��catch�������K�v������n
	catch (const char* err_log)  //�G���[���擾�H
	{
		//�f�o�b�N���O�̏o��
		OutputDebugString(err_log);
	}

	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	//�ُ�I����ʒm
	return 0;
}