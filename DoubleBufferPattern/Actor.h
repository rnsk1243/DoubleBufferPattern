#pragma once
//���
class CActor
{
	// ���� ���� ����?
	bool m_currentSlapped;
	// �������� ���� ����?
	bool m_nextSlapped;
	char* m_name;
public:
	CActor(char* name, bool isSlap) :m_name(name),m_currentSlapped(isSlap),m_nextSlapped(false) {}
	virtual ~CActor() {}
	virtual void update() = 0;
	// 
	void swap() 
	{
		// ���� ���·� ��ü
		m_currentSlapped = m_nextSlapped;
		// ���� ���� �ʱ�ȭ
		m_nextSlapped = false;
	}
	// �δٱ� ������
	void slap() { m_nextSlapped = true; }
	// �δٱ� �¾ҳ�?
	bool wasSlapped() { return m_currentSlapped; }
	char* getName() { return m_name; }
};

