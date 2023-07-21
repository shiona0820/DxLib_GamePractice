#pragma once

/*
マクロ定義
**/

/**
型定義
**/

/**
*プロトタイプ宣言
**/
void Input_Initialize(void);
void Input_Update(void);
int Input_Escape(void);

int GetOldkey(int key);
int GetNowkey(int key);
int GetkeyFlg(int key);
int GetMousePositionX(void);
int GetMousePositionY(void);

