#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
protected:	// 상속을 했을 때 사용한다. 상속을 받은 것이 아니면 접근 X
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("이름 = %s, 나이 = %d\n", name, age);
	}
};

class Student :public Human
{
protected:
	int stunum;

public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}

	void report() {
		printf("이름: %s, 학번: %d 보고서 제출합니다.\n\n", name, stunum);
	}
};

int main() {
	Student han("김한결", 15, 123456);
	Student Park("박수민", 23, 1813130);
	han.intro();
	han.study();
	han.report();
	Park.intro();
	Park.study();
	Park.report();
}