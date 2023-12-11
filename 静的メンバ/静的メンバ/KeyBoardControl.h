#pragma once

#define KEYCODE_MAX  (256)

class KeyBoardControl
{
private:
	static char now_key[KEYCODE_MAX];   //���݂̃{�^�����
	static char old_key[KEYCODE_MAX];   //�O��̃{�^�����
	static char L_trigger;   //L�g���K�[���
	static char R_trigger;   //R�g���K�[���
	static char L_stick;   //L�X�e�B�b�N���
	static char R_stick;   //R�X�e�B�b�N���

	static char A_button;   //A�{�^��

public:
	static void Update();  //�X�V����

	static bool GetKey(int key_code);      //�{�^���擾�����i�������u�ԁj
	static bool GetKeyDown(int key_code);  //�{�^���擾�����i����������j
	static bool GetKeyUp(int key_code);    //�{�^���擾�����i�������u�ԁj

	

private:
	static bool CheckKeyCodeRange(int key_code);   //�͈́H
};