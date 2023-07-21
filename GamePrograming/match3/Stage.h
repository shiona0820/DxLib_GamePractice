#pragma once

/**
マクロ定義
**/

/**
型定義
**/

/**
プロトタイプ宣言
**/

int StageInitialize(void);
void CreateBlock(void);
void SelectBlock(void);
void StageDraw(void);
void FadeOutBLock(void);
void MoveBlock(void);
void CheckBlock(void);
void ChackClear(void);

int Get_StageState(void);
int Get_StageClearFlag(void);
int Get_StageScore(void);

void Set_StageMission(int mission);
