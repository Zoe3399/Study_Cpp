/*

1) 파생 class 성성자가 호출
2) 부모 class 생성자 호출 / 실행
3) 파생 class 생성자 실행

*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	Human(const char* aname, int aage) {
		strcpy(name, aname);
		age = aage;
	}

	void intro() {
		printf("이름: %s, 나이 : %d\n", name, age);
	}
};

class Student :public Human {
private:
	int stunum; // 123456은 여기서 초기화

public:
	Student(const char* aname, int aage, int astunum) :Human(aname, aage) {
		stunum = astunum;
	}

	void study() {
		printf("이이는 사, 이삼은 육, 이사 팔\n");
	}
};

int main() {
	Human kim("김상형", 29);
	kim.intro();
	Student han("김한결", 25, 123456);
	han.intro();
	han.study();
}