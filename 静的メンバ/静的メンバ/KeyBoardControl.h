#pragma once

#define KEYCODE_MAX  (256)

class KeyBoardControl
{
private:
	static char now_key[KEYCODE_MAX];   //現在のボタン情報
	static char old_key[KEYCODE_MAX];   //前回のボタン情報
	static char L_trigger;   //Lトリガー情報
	static char R_trigger;   //Rトリガー情報
	static char L_stick;   //Lスティック情報
	static char R_stick;   //Rスティック情報

	static char A_button;   //Aボタン

public:
	static void Update();  //更新処理

	static bool GetKey(int key_code);      //ボタン取得処理（押した瞬間）
	static bool GetKeyDown(int key_code);  //ボタン取得処理（押し続ける）
	static bool GetKeyUp(int key_code);    //ボタン取得処理（離した瞬間）

	

private:
	static bool CheckKeyCodeRange(int key_code);   //範囲？
};