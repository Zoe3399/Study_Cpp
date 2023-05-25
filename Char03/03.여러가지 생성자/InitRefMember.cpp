#include <stdio.h>

class Some {
public:
	int& total;
	int n1, n2;
	Some(int& atotal) :total(atotal)
	{
		this->n1 = n1;
		this->n2 = n2;
	}
	void OutTotal() { printf("%d\n", total); }
};

int main()
{
	int value = 8;
	Some S(value);
	S.OutTotal();
}