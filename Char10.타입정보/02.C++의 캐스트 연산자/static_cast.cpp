#include <stdio.h>

int main()
{
	const char* str = "korea";
	int* pi;
	double d = 123.456;
	int i;

	i = static_cast<int>(d);
	pi = static_cast<int*>(str);
	pi = (int*)str;

}