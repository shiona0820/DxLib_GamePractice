#include"KeyBoardControl.h"
#include"DxLib.h"

char KeyBoardControl::now_key[KEYCODE_MAX] = {};
char KeyBoardControl::old_key[KEYCODE_MAX] = {};

void KeyBoardControl::Update()
{
	//前回フレームの入力値を格納
	for (int i = 0; i < KEYCODE_MAX; i++)
	{
		old_key[i] = now_key[i];
	}
	GetHitKeyStateAll(now_key);
}

bool KeyBoardControl::GetKey(int key_code)
{
	if (CheckKeyCodeRange(key_code))
	{
		if (now_key[key_code] == TRUE)
		{
			return true;
		}
	}
	return false;
}

//キーが離された瞬間を取得
bool KeyBoardControl::GetKeyDown(int key_code)
{
	if (CheckKeyCodeRange(key_code))
	{
		if (now_key[key_code] == TRUE && old_key[key_code] == FALSE)
		{
			return true;
		}
	}
	return false;
}

bool KeyBoardControl::GetKeyUp(int key_code)
{
	if (CheckKeyCodeRange(key_code))
	{
		if (now_key[key_code] == FALSE && old_key[key_code] == TRUE)
		{
			return true;
		}
	}
	return false;
}

bool KeyBoardControl::CheckKeyCodeRange(int key_code)
{
	//配列の範囲外チェック
	if (0 <= key_code && key_code < KEYCODE_MAX)
	{
		return true;
	}
	return false;
}