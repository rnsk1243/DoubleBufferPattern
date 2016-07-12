#pragma once
#include "Actor.h"
#include<iostream>
using namespace std;

class CComedian :
	public CActor
{
	// 바라보고 있는 액터의 얼굴
	CActor* m_facing;
public:

	CComedian(char* name, bool isSlap):CActor(name, isSlap) {}
	~CComedian(){}
	// 바라보고 있는 액터 저장
	void setFace(CActor* actor) { m_facing = actor; }
	virtual void update()
	{
		// 내가 누구에게 든지 싸다구 맞으면
		if (wasSlapped())
		{
			// 보고있는 액터 싸다구 날림
			m_facing->slap();
			cout << this->getName() << "가" << m_facing->getName() << "의 싸다구를 날렸습니다." << endl;
		}
	}
};

