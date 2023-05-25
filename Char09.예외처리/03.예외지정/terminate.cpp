/*	
아무도 처리하지 않는 예외는 terminate함수가 처리하며, 내부적으로 abort함수를 호출하여 프로그램을 강제 종료한다.

*/

#include <stdio.h>
#include <exception>
using namespace std;

void myterm()
{
	puts("처리되지 않은 예외 발생");
	exit(-1);
}

int main()
{
	set_terminate(myterm);
	try {
		throw 1;
	}
	catch (char* m) {

	}
}