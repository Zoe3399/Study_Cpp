/* Human 클래스의 멤버 변수를 숨기고 액세스 함수 작성
	이름[12], 그 이상은 빈 문자열을 대입한다.
	나이 = 1~ 120 범위만 인정하고 범위 밖의 나이는 0를 대입한다.*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

class Human {
private:
	char name[12];
	int age;

public:
	Human(const char *n, int a) {
		Setname(n);
		Setage(a);
	}
	void intro() {
		printf("이름 : %s, 나이 : %d\n", name, age);
	}

	char* Getname() { return name; }
	void Setname(const char *n) { 
		if (strlen(n) < 12) {
			strcpy(name, n);
		}
		else {
			strcpy(name, "");
		}
	}

	int Getage() { return age; }
	void Setage(int a) {
		if (a >= 1 && a <= 120) {
			age = a;
		}
		else {
			age = 0;
		}
	}
};

int main() {
	Human Park("박수민", 23);
	Park.Setname("Park Sumin");
	Park.Setage(23);
	Park.intro();
}