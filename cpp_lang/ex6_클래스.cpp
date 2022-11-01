//struct c언어
//struct  엄청난 기능 추가
//class  c++객체지향프로그래밍

//클래스 = 자료저장+자료처리=변수+함수
//클래스(타입): 특정한 용도를 수행하기 위한 변수와 함수를 모아둔 틀
//객체(오브젝트): 그 틀을 이용하여 찍어낸 객체. 메모리상의 공간

#include<iostream>
using namespace std;

struct TV {
private:
	bool powerOn;
	int channel;
	int volume;
public:
	void on() {
		powerOn = true;
		cout << "tv 켰습니다." << endl;
	}
	void off() {
		powerOn = false;
		cout << "tv 껐습니다." << endl;
	}
	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 100) {
			channel = cnl;
			cout << "현재 채널은" << channel << endl;
		}
	}
	void setVolume(int vol=1) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "현재 볼륨은" << volume << endl;
		}
	}
	void setVolumeUp() {
		if (volume >= 0 && volume <100) {
			volume++;
			cout << "현재 볼륨은" << volume << endl;
		}
	}
};
int main() {
	TV lg;

	lg.on();
	lg.setChannel(10);
	lg.setVolume(99);
	lg.setVolumeUp();


	lg.off();
}