#include"Stage.h"
#include"Comedian.h"

void main()
{
	CStage stage;
	// harry�� �δٱ� ���� ���·� �ʱ�ȭ
	CComedian* harry = new CComedian("harry", true);
	CComedian* baldy = new CComedian("baldy", false);
	CComedian* chump = new CComedian("chump", false);

	harry->setFace(baldy);
	baldy->setFace(chump);
	chump->setFace(harry);

	stage.add(harry, 0);
	stage.add(baldy, 1);
	stage.add(chump, 2);

	//CComedian hee = CComedian("dd", false);
	//hee = *harry;

	// ������ ���� ������ �ٲپ ������ �� ���ư���.
	/*stage.add(harry, 2);
	stage.add(baldy, 1);
	stage.add(chump, 0);*/
	// ���۸� 2�� ����� �����̴�.
	// ���� ���� ����, ���� ���� ���� 2���� �������� 
	// �������� Ŭ������ update�޼ҵ忡�� ��� ������ ������Ʈ ���� �Ŀ�
	// �������¸� ��ü ���־��⶧��
	/*
	bool m_currentSlapped;
	bool m_nextSlapped;
	�̷��� �ΰ��� ���۸� ������� ������ (�ϳ��� �Ǿ�������)
	for���� ���鼭 ������Ʈ���޼ҵ带 ȣ���ϴµ� 0���� ���� ȣ��Ǹ鼭
	������Ʈ �޼ҵ尡 ȣ��ȴ�. �׷��� �¾Ҵٴ� bool������ �ٽ� �ʱ�ȭ �ǰ�(false��) ���ÿ�
	���� �о���̱⵵ �ϴϱ� ���߿� ȣ��Ǵ°��� ó�� bool���� �̹� �ٲ�� ��������..
	*/

	//harry->slap();

	stage.update();
	stage.update();
	stage.update();
	stage.update();
	stage.update();
	stage.update();
}