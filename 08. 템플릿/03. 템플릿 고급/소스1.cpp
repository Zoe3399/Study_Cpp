/* 함수 템플릿 */
#include <iostream>
using namespace std;

template <typename T> //일반화
class CTest {
private:
	T num;
public:
	//CTest(T anum) : num(anum) {};
	CTest(T);
	void printData() {
		cout << "num : " << num << endl;
	}
};
template <typename T>
CTest<T>::CTest(T anum) {


}

int main()
{
	//CTest obj(10);
	CTest<int> obj(10);
	obj.printData();

	return 0;
}