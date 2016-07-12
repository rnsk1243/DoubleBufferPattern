#include"Stage.h"
#include"Comedian.h"

void main()
{
	CStage stage;
	// harry는 싸다구 맞은 상태로 초기화
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

	// 다음과 같이 순서를 바꾸어도 여전히 잘 돌아간다.
	/*stage.add(harry, 2);
	stage.add(baldy, 1);
	stage.add(chump, 0);*/
	// 버퍼를 2개 사용한 덕분이다.
	// 현재 상태 버퍼, 다음 상태 버퍼 2개를 만듬으로 
	// 스테이지 클래스의 update메소드에서 모든 배우들을 업데이트 해준 후에
	// 다음상태를 교체 해주었기때문
	/*
	bool m_currentSlapped;
	bool m_nextSlapped;
	이렇게 두개의 버퍼를 사용하지 않으면 (하나로 되어있으면)
	for문이 돌면서 업데이트를메소드를 호출하는데 0번이 먼저 호출되면서
	업데이트 메소드가 호출된다. 그러면 맞았다는 bool변수가 다시 초기화 되고(false로) 동시에
	값을 읽어들이기도 하니까 나중에 호출되는것은 처음 bool값이 이미 바뀌어 버린상태..
	*/

	//harry->slap();

	stage.update();
	stage.update();
	stage.update();
	stage.update();
	stage.update();
	stage.update();
}