#include <iostream>

class StaticTest {
public:
	int a;
	static int b;	// Static 멤버 변수 선언
	StaticTest() {
		a = 10;
		b = 20;	//클래스 내부에서 초기화는 안된다.
		b++;
	}
	void getData() {
		printf("a: %d, b:%d\n", a, b);
	}

};

int main() {
	return 0;
}