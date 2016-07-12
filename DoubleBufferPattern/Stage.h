#pragma once
#include"Actor.h"
#include<iostream>
using namespace std;
// ��������
class CStage
{
	// ��� ���
	static const int NUM_ACTORS = 3;
	// ��� �ּ� ���� �迭
	CActor* m_actors[NUM_ACTORS];
public:

	CStage(){}

	~CStage(){}
	// ��� �߰�
	void add(CActor* actor, int index)
	{
		m_actors[index] = actor;
	}
	// ��� ������Ʈ
	void update()
	{
		// ��� ��� ��ŭ
		for (int i = 0; i < NUM_ACTORS; i++)
		{
			// �ڽ��� �¾����� �ٶ󺸰��ִ� ��� �δٱ� ����
			m_actors[i]->update();
		}
		// ��� �� �δٱ� ������ ���� ������Ʈ �Ŀ�
		// ��� ��� ��ŭ
		for (int i = 0; i < NUM_ACTORS; i++)
		{
			// ���� ���·� ��ü
			m_actors[i]->swap();
		}
	}
};

