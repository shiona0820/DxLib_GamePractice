#pragma once


//�ϐ��錾
class Ball
{
private:  //����J�i�v���C�x�[�g�j

		float x;
		float y;

		float radius;

		

public:  //���J���

	Ball();
	Ball(float mx, float my);
	~Ball();

	void Update();  //�X�V����
	void Draw();   //�`�揈��

	//����
	void Move();

	float Get_X();
	float Get_Y();
	float Get_radius();  //���a���

	
};
