#pragma once

#define KEYCODE_MAX  (256)

class KeyBoardControl
{
private:
	static char now_key[KEYCODE_MAX];
	static char old_key[KEYCODE_MAX];

public:
	static void Update();  //�X�V����

	static bool GetKey(int key_code);
	static bool GetKeyDown(int key_code);
	static bool GetKeyUp(int key_code);

private:
	static bool CheckKeyCodeRange(int key_code);
};