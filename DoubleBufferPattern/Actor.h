#pragma once
//배우
class CActor
{
	// 현재 맞은 상태?
	bool m_currentSlapped;
	// 다음에도 맞은 상태?
	bool m_nextSlapped;
	char* m_name;
public:
	CActor(char* name, bool isSlap) :m_name(name),m_currentSlapped(isSlap),m_nextSlapped(false) {}
	virtual ~CActor() {}
	virtual void update() = 0;
	// 
	void swap() 
	{
		// 다음 상태로 교체
		m_currentSlapped = m_nextSlapped;
		// 다음 상태 초기화
		m_nextSlapped = false;
	}
	// 싸다구 날리기
	void slap() { m_nextSlapped = true; }
	// 싸다구 맞았나?
	bool wasSlapped() { return m_currentSlapped; }
	char* getName() { return m_name; }
};

