#include <iostream>
using namespace std;

class Base {
	int data;
public:
	Base() {};
	~Base() {};
	void setData(int adata) { data = adata; }
	int getData() { return data; }
};

class Derived :public Base {
	void setData(int adata) {
		if (adata > 0)adata = 0;
		Base::setData(adata);
	}

	void printData() {
		cout << "printData() : " << getData() << endl;
	}
};


void func(Parent* p)
{
	p->PrintMe();
	Child* c = dynamic_cast<Child*>(p);
	if (c) {
		c->printNum();
	} else {
		puts("이 객체는 num을 가지고 있지 않습니다.");
	}
}

int main()
{
	Base* pb = new Derived;
	Derived* pd = NULL;

	pb->setData(10);
	pd = static_cast<Derived*>(pb);
	pd->printData();
	return 0;
}