/**
*�v���O���~���O���K
���}�b�`3�Q�[���̐���
**/

#include"DxLib.h"
#include"FreamControl.h"
#include"InputControl.h"
#include"SceneManager.h"

/**
*�}�N����`
**/

#define SCREEN_HEIGHT (480)  //�X�N���[���T�C�Y�i�����j
#define SCREEN_WIDTH  (640)  //�X�N���[���T�C�Y�i���j
#define SCREEN_COLORBIT  (32)  //�X�N���[������\�r�b�g
#define FONT_SIZE  (20)  //�����T�C�Y

/**
*�^��`
**/

/**
*�O���[�o���ϐ��錾
**/


/****
* �v���g�^�C�v�錾
***/

/***
*�v���O�����̊J�n
***/

int WINAPI WinMain(_In_HINSTANCE hInstance, _In_opt_HINSTANCE hPrevInstance,
	_In_LPSTR lpCmdLine, _In_int nShowCmd)
{
	//�E�B���h�^�C�g���ݒ�
	SetMainWindowText("Match 3 Puzzle");
	//�E�B���h���[�h�ŋN��
	ChangeWindowMode(TRUE);
	//��ʃT�C�Y�̍ő�T�C�Y�A�J���[�r�b�g����ݒ�
	SetGraphMode(SCREEN_WIDTH, SCREEN_HEIGHT, SCREEN_COLORBIT);

	//Dx���C�u��������������
	//�G���[������������A�I������
	if (DxLib_Init() == D_ERROR)
	{
		return D_ERROR;
	}

	//�e�@�\�̏���������
	FreamControl_InitiaLize();  //�t���[�����[�g����@�\
	Input_Initialize();  //���͐���@�\

	//�V�[���}�l�[�W���[����������
	//�G���[������������A�I������
	if (SceneManager_Initialize(E_TITLE) == D_ERROR)
	{
		return D_ERROR;
	}

	//�`����ʂ𗠂ɂ���
	SetDrawScreen(DX_SCREEN_MACK);

	//�����T�C�Y��ݒ�
	SetFontSize(FONT_SIZE);

	//�Q�[�����[�v
	while (ProcessMesseage() != D_ERROR && Input_Escape() == FALSE)
	{
		//���͐���@�\�X�V����
		Input_Update();

		//�V�[���}�l�[�W���[�X�V����
		SceneManager_Update();

		//��ʃN���A
		ClearDrawScreen();

		//�V�[���}�l�[�W���[�`�揈��
		SceneManager_Draw();

		//�t���[�����[�g���䏈��
		FreamControl_Update();

		//��ʂ̓��e��\��ʂɔ��f
		ScreenFlip();

	}
	//Dx���C�u�����g�p�̏I������
	DxLib_End();

	return 0;
}