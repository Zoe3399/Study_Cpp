#include <stdio.h>

template<typename T>
T cast(int s)
{
	return (T)s; 
	// cast함수는 인수로 전달된 정수형의 s를 T타입으로 캐스팅하여 리턴한다.
}

int main() {

	//cast(1234) => 어떤 타입을 리턴하는 함수를 만들지 결정할 수없어 에러로 처리
	// 여기서 1234 는  cast함수의 인숭일 뿐 T를 결정하는 데 힌트X
	// 호출문에 타입 인수가 나타나지 않아 애매하기때문에 명시적으로 원하는 타입을 밝혀야한다.
	unsigned u = cast<unsigned>(1234); 
	double d = cast<double>(5678);

	printf("u=%d, d=%f\n", u, d);
}