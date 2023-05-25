#include <iostream>

class MyTest {
private:
	int x;
	int y;

public:
	MyTest(int a = 0, int b= 0) { // 디폴트 생성자 없이 가능한것(디폴트 매개변수)
		x = a;
		y = b;	// 초기화
	} // 디폴트 생성자가 없어지기에 만들어야한다.

	const MyTest sum(const MyTest& other) const{ //멤버함수 만들기 , 바뀌면 안되니까 const삽입
		MyTest res; //객체선언
		res.x = this-> x + other.x;
		res.y = this-> y + other.y;
		return res;
	}

	void printData() {
		printf("a: %d, b = %d", x, y);
	}
};

int main() {
	
	MyTest obj1(10, 20);
	MyTest obj2(20, 10);
	MyTest obj;
	obj = obj.sum(obj2);
	obj.printData();

	return 0;
}