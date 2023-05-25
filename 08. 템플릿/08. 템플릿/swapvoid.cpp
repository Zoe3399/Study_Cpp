#include <stdio.h>
#include <malloc.h>
#include <memory.h>

void swap(void* a, void* b, size_t len) {
	void* t;	
	//임의 타입의 번지를 받아 메모리끼리 복사 
	//임의의 대상체를 가리킬 수있지만 대상체의 길이 정보가 없어 변수의 길이를 인수로 전달해야한다.(불편함)
	
	t = malloc(len);
	memcpy(t, a, len);
	memcpy(a, b, len);
	memcpy(b, t, len);
	free(t);
}

int main() {
	int a = 3, b = 4;
	double c = 1.2, d = 3.4;
	swap(&a, &b, sizeof(int));
	swap(&c, &d, sizeof(double));
	printf("a = %d, b = %d\n", a, b);
	printf("c = %f, d = %f\n", c, d);
}