#include "DxLib.h"

static int m_Key[256];  // ���͏�Ԋi�[

// �L�[�̓��͏�ԍX�V
void Keyboard_Update()
{

	static char tmpKey[256]; // ���͏�Ԃ��i�[

	GetHitKeyStateAll(tmpKey);  // �S�Ă̓��͏�Ԃ𓾂�

	for (int i = 0; i < 256; i++)
	{

		if (tmpKey[i] != 0)		// i�Ԃ̃L�[��������Ă�����
		{
			m_Key[i]++;
		}

		else					// ������Ă��Ȃ����
		{
			m_Key[i] = 0;
		}
	}
}

// KeyCode�̓��͏�Ԃ��擾����
int Keyboard_Get(int KeyCode)
{
	return m_Key[KeyCode];  // ���͏�Ԃ�Ԃ�
}