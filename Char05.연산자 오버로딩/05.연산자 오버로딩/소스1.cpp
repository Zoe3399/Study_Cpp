#include <iostream>

class MyTest {
private:
	int x;
	int y;

public:
	MyTest(int a = 0, int b = 0) {
		x = a;
		y = b;
		printf("인수 2개 생성자!!\n");
	}
	MyTest(MyTest& rhs) : x(rhs.x), y(rhs.y) {
		printf("복사생성자 호출!!\n");
	}

	// + 연산자 
	const MyTest operator +(const MyTest& other) const {
		MyTest res;
		res.x = this->x + other.x;
		res.y = this->y + other.y;
		return res;
	}


	//// 대입연산자
	const MyTest operator =(const MyTest& other)/* const*/ {
		//MyTest res;
		x = other.x;
		y = other.y;
		return *this;
	}


	//전역 연산자 함수 위한 프랜드 함수
	friend const MyTest operator -(const MyTest& rhs1, const MyTest& rhs2);

	void printData() {
		printf("\n\na: %d, b: %d", x, y);
	}

	const MyTest operator-(const MyTest& rhs1, const MyTest& rhs2) {
		MyTest res;
		res.x = rhs1.x - rhs2.x;
		res.y = rhs1.y - rhs2.y;
		return res;
	}

};

int main() {
	MyTest obj1(20, 10);
	MyTest obj2(15, 5);
	MyTest obj;
	
	//obj3 = obj1 + obj2;	+연산자 실행
	//obj = obj1.operator= (obj2);
	// ↑ 대입 연산자 실행

	//
	obj = operator-(obj1, obj2);
	obj.printData();
	obj.printData();

}

