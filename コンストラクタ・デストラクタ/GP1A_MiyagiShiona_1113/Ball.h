#pragma once

//�ϐ���`
class Enemy
{
public:
	float x;  //�����W���
	float y;  //�����W���

	float rasius;  //���a���
	int color;  //�F���

	//�i�s�����x�N�g������
	float move_x;
	float move_y;

	Enemy();
	Enemy(float mx, float my);
	~Enemy();

	//�֐�
	void Update();
	void Draw();
	void Move();  //����
	void Bound();  //���˕Ԃ�
};
