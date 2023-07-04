#include <iostream>

class StaticTest {
	static int a;	//static �������
	int b;
public:
	StaticTest();
	static void setData(int);	//static ����Լ��� static ��������� ����Ѵ�.
	void getData();
};

int StaticTest::a = 10;	//static ��� ���� �ʱ�ȭ

StaticTest::StaticTest()
{
	this->b = 20;
}

void StaticTest::getData()
{
	printf("a : %d , b : %d\n", a,b);
}

void StaticTest::setData(int aa)
{
	//this->a = aa;		//this �����͸� ����� �� ����.(��, ��ü�� �ƴϴ)
	a = aa;
}

int main() {
	StaticTest s1;
	s1.getData();
	StaticTest s2;
	s2.getData();

	s1.setData(30);
	s1.getData();
	s2.getData();

	StaticTest::setData(40);	//Ŭ�����Ҽ����� Ŭ������ ȣ���� �����ϴ�.
	s1.getData();
	s2.getData();

	return 0;
}