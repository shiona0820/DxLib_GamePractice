#include"DxLib.h"
#define NAME_LEN (64)

typedef struct
{
	char name[NAME_LEN];
	int height;
	float weight;

}Students;

void Func(Students s);

int WINAPI WinMain(_In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_
	LPSTR lpCmdLine, _In_ int nShowCmd)
{
	Students students[3] = {
		{"佐藤太郎",175,60.5f},
		{"田中次郎",160,75.4f},
		{"佐々木雅之",180,83.0f},
	};
	Students* p;

	ChangeWindowMode(TRUE);

	if (DxLib_Init() == -1)
	{
		return -1;
	}

	Func(students[2]);

	
	WaitKey();

	DxLib_End();

	return 0;
}

void Func(Students s)
{

	DrawFormatString(20, 20, GetColor(255, 255, 255), "%s", s.name);
	DrawFormatString(20, 40, GetColor(255, 255, 255), "%d", s.height);
	DrawFormatString(20, 60, GetColor(255, 255, 255), "%f", s.weight);

}