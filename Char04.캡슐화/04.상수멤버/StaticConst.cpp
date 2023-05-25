#include <stdio.h>

class MathCalc {
private:
	static const double pie;

public:
	MathCalc(){}
	void DoCalc(double r) {
		printf("반지름 %2.f인 원의 둘레 = %2.f\n", r, r * 2 * pie);
	}
};

const double MathCalc::pie = 3.1416;

int main() {
	MathCalc m;
	m.DoCalc(5);
}