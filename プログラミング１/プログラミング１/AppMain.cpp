#include"DxLib.h"

//�O���[�o���ϐ���`
int global = 30;

//�v���g�^�C�v�錾
void Func1(int a[]);
void Func2(int* a);

//���C���֐�
int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	//���[�J���ϐ���`
	int num[] = {1,2,3};

	ChangeWindowMode(TRUE);

	//Dx���C�u�����̏���������
	if (DxLib_Init() == -1)
	{
		return -1;
	}
	//�֐��̌Ăяo��
	Func1(num);

	//�֐��̌Ăяo��
	Func2(num);

	//���͑ҋ@
	WaitKey();

	//Dx���C�u�����g�p�̏I������
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