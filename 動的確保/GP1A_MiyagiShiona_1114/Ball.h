#pragma once

//�ϐ��錾
class Ball
{
public:
	float x;  //�����W���
	float y;  //�����W���

	float radius;  //���a���
	int color;  //�F���

	int now_space;
	int old_space;

	Ball();
	Ball(float mx, float my);
	~Ball();
	
	//�i�s�����x�N�g������
	int move_x;
	int move_y;

	void Update();  //�X�V����
	void Draw();  //�`�揈��

	void Move();

};
