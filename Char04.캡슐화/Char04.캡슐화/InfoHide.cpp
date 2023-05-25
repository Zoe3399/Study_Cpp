// 정보를 은폐하는 방법

#include <stdio.h> 

class Time {
private:
	int hour, min, sec;
	// 시간 요소를 저장하는 hour, min, sec 멤버 변수는 모두 private로 선언하여 숨김
	// = > 외부에서 규칙에 맞지 않는 시간을 대입하는것을 방지
	// 이렇게 주요 멤버를 숨기면 외부에서 값을 읽거나 변경할 수 없어, 멤버값 대신 읽거나 쓰는 액세스를 제공

public:
	Time(int h, int m, int s) {
		SetHour(h);
		SetMinute(m);
		sec = s;
	}

	int GetHour() { return hour; }
	void SetHour(int h) {
		if (h >= 0 && h < 24) {
			hour = h;
		}
	}

	int GetMinute() { return hour; }
	void SetMinute(int m) {
		if (m >= 0 && m < 60) {
			min = m;
		}
	}

	int GetSecond() { return sec; }
	void OutTime() {
		printf("현재 시간은 %d:%d:%d입니다\n", hour, min, sec);
	}
};

int main() {
	Time now(12, 34, 56);
	now.SetHour(40);
	now.OutTime();
	now.SetHour(9);
	now.OutTime();
}

