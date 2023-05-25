
//1) 만들기
//2) 복사생성자
//3) 오퍼레이터

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char *name;
	int age;

public:
	Human() {}
	Human(const char* n, int a) { 
		name = new char[strlen(n)+1]; //동적할당
		strcpy(name, n);
		age = a; 
	}

	~Human() {	// 동적할당 해제
		delete[]name;
	}

	void printHuman() {
		printf("이름 = %s , 나이 = %d\n", name, age);
	}
};

void main() {
	
	Human h1("박수민", 23);
	h1.printHuman();

	Human Nhn(h1);
	Nhn.printHuman(); // 복사 생성자 호출

	Human Xman;
	Xman = Nhn;
	Xman.printHuman(); //대입 연산자 함수 호출

	return 0;

}