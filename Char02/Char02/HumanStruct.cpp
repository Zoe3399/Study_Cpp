// class = 구조체 + 멤버함수

#include <iostream>

struct Human
{
public:
	char name[20];
	float height;
	float weight;
	int age;
	char blood;

	void view()
	{
		printf("나의 이름은 %s이고, 키는 %f이고 몸무게는 %f이고, 나이는 %d이고, 혈액형은 %c 입니다.",name,height, weight, age, blood);
	}
};

int main()
{
	Human my = { "홍길동", 182, 78, 40, 'B' };
	my.view();
	return 0;
}