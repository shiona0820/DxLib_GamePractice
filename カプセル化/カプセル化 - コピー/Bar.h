#pragma once

//�ϐ��錾
class Bar
{
private:  //����J�i�v���C�x�[�g�j
		float x;
		float y;

		float radius;

		

public:  //���J���
	Bar();
	~Bar();

	void Update();
	void Draw();

	void SetLocation(float mx, float my);

	float Get_X();
	float Get_Y();
	float Get_radius();

	
	
};
