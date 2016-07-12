#pragma once
#include "Actor.h"
#include<iostream>
using namespace std;

class CComedian :
	public CActor
{
	// �ٶ󺸰� �ִ� ������ ��
	CActor* m_facing;
public:

	CComedian(char* name, bool isSlap):CActor(name, isSlap) {}
	~CComedian(){}
	// �ٶ󺸰� �ִ� ���� ����
	void setFace(CActor* actor) { m_facing = actor; }
	virtual void update()
	{
		// ���� �������� ���� �δٱ� ������
		if (wasSlapped())
		{
			// �����ִ� ���� �δٱ� ����
			m_facing->slap();
			cout << this->getName() << "��" << m_facing->getName() << "�� �δٱ��� ���Ƚ��ϴ�." << endl;
		}
	}
};

