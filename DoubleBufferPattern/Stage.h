#pragma once
#include"Actor.h"
#include<iostream>
using namespace std;
// 스테이지
class CStage
{
	// 배우 명수
	static const int NUM_ACTORS = 3;
	// 배우 주소 담을 배열
	CActor* m_actors[NUM_ACTORS];
public:

	CStage(){}

	~CStage(){}
	// 배우 추가
	void add(CActor* actor, int index)
	{
		m_actors[index] = actor;
	}
	// 배우 업데이트
	void update()
	{
		// 배우 명수 만큼
		for (int i = 0; i < NUM_ACTORS; i++)
		{
			// 자신이 맞았으면 바라보고있는 배우 싸다구 날림
			m_actors[i]->update();
		}
		// 모두 다 싸다구 날릴지 말지 업데이트 후에
		// 배우 명수 만큼
		for (int i = 0; i < NUM_ACTORS; i++)
		{
			// 다음 상태로 교체
			m_actors[i]->swap();
		}
	}
};

