#include <stdio.h>

class Exception
{
private:
	int Errorcode;

public:
	Exception(int ae) :Errorcode(ae) {}
		int GetErrorCode() { return Errorcode; }
		void ReportError() {
			switch (Errorcode)
			{
			case 1:
				puts("메모리가 부족합니다.");
				break;

			case 2:
				puts("연산 범위를 초과했습니다.");
				break;

			case 3:
				puts("하드 디스크가 가득 찼습니다.");
				break;
					
			default:
				break;
			}
		}
	
};

void report() {

	if (true/*예외발생*/) throw Exception(3);
	//여기 까지 왔으면 무사히 작업 완료
}

int main() {
	try
	{
		report();
		puts("작업을 완료했습니다.");
	}
	catch (Exception &e)
	{
		printf("에러  코드 = %d => ", e.GetErrorCode());
		e.ReportError();
	}
}