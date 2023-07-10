#include"GameClearScene.h"
#include"DxLib.h"
#include"Stage.h"
#include"SceneManager.h"

/**
*�}�N����`
**/

#define TIMELIMIT   (3600*3)  //���Ԑ���
#define NUMBER_IMAGE_MAX  (10)  //�����`�搔

/**
*�^��`
**/

/**
*�ϐ��錾
**/

int GameScore;
int GameLevel;
int GameMission;
int GameTime;
int GameCount;  //����������Ȃ��悤�ɂ��邽�߂̃J�E���g
int ReStartFlag;

int NumberImage[NUMBER_IMAGE_MAX];  //�����p�`��

/**
*�v���g�^�C�v�錾
**/

/**
*GAME���C����ʁF���傫������
* �����F�Ȃ�
* �߂�l�F�G���[���
**/

int GameMainScene_Initialize(void)
{
	int ret = 0;
	int i;

	//�摜�ǂݍ���
	LoadDivGraph("images/number.png", NUMBER_IMAGE_MAX,
		NUMBER_IMAGE_MAX, 1, 60, 120, NumberImage);

	//�X�e�[�W������
	ret = StageInitialize();

	//�G���[�`�F�b�N
	for (i = 0; i < NUMBER_IMAGE_MAX; i++)
	{
		if (NumberImage[i] == D_ERROR)
		{
			ret = D_ERROR;

			break;
		}
	}

	//GAME�v���C���񂩂ǂ����H
	if (GameCount == 0)
	{
		GameScore = 0;  //�X�R�A�̏�����
		GameLevel = 1;  //GAME���x���̏�����
		Set_StageMission(3);  //�~�b�V�����̏�����
		GameCount++;  //����̐ݒ�
	}
	else
	{
		GameLevel++;  //GAME���x���̍X�V
		Set_StageMission(3);  //�~�b�V�����𑝂₷

	}
	GameTime = TIMELIMIT;  //�������Ԃ̏�����

	return ret;
}


/**
*GAME���C����ʁF�X�V����
*�����F�Ȃ�
*�߂�l�F�Ȃ�
**/
void GameMainScene_Updata(void)
{
	switch (Get_StageStata())
	{
	case0:
		SelectBlock();  //�u���b�N��I������
		break;
	case2:
		MoveBlock();  //�u���b�N�̈ړ�
		break;
	case3:
		CheckBlock();  //�u���b�N�̊m�F
		break;
	case4:
		CheckClear();  //�N���A�`�F�b�N
			break;
	default:
		break;
	}

	//�������Ԃ̍X�V
	GameTime--;

	//�������Ԃ������Ȃ�����Q�[���I�[�o�[�Ɂ@����
	if (GameTime < 0)
	{
		Change_Scene(E_GAME_OVER);
	}

	//�~�b�V������B��������A�Q�[���N���A�Ɂ@����
	if (Get_StageClearFlag())
	{
		Change_Scene(E_GAME_CLEAR);
	}

}

/**
*GAME���C����ʁF�`�揈��
*�����F�Ȃ�
*�߂�l�F�Ȃ�
**/

void GameMainScene_Draw(void)
{
	int posX = 600;
	int tmp_level = GameLevel;
	int tmp_score = Get_StageScore();

	//�X�e�[�W��`��
	StageDraw();

	//�t�F�[�h�A�E�g��Ԃ��H
	if (Get_StageState() == 1) 
	{
		FadeOutBlock();  //�t�F�[�h�A�E�g����
	}
	//���x����`��
	do {
		DrawRotaGraph(PosX, 80, 0.5f, 0, NumberImage[tmp_level % 10], TRUE);

		tmp_level /= 10;

		PosX -= 30;
	} while (tmp_level > 0);

	//�X�R�A�̕`��
	PosX = 620;
	do {
		DrawRotaGraph(PosX, 160, 0.3f, 0, NumberImage[tmp_score % 10], TRUE);

		tmp_score /= 10;

		PosX -= 20;
	} while (tmp_score > 0);

	//�������Ԃ̕`��
	DrawBox(491, 469, 509, 469 - GameTime / 60 * 2, 0x0033ff, TRUE);
}