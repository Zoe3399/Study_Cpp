#include <stdio.h> 

int main()
{
	int* pi;
	int* pj;

	pi = new int;
	pj = new int(10); // 생성자를 호출하는 연산자임으로 바로 초기화가 가능하다.

	*pi = 123;

	printf("*pi = %d\n", *pi);
	printf("*pj = %d\n", *pj);

	delete pi;
	delete pj;
}