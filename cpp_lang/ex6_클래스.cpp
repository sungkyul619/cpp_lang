//struct c���
//struct  ��û�� ��� �߰�
//class  c++��ü�������α׷���

//Ŭ���� = �ڷ�����+�ڷ�ó��=����+�Լ�
//Ŭ����(Ÿ��): Ư���� �뵵�� �����ϱ� ���� ������ �Լ��� ��Ƶ� Ʋ
//��ü(������Ʈ): �� Ʋ�� �̿��Ͽ� �� ��ü. �޸𸮻��� ����

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
		cout << "tv �׽��ϴ�." << endl;
	}
	void off() {
		powerOn = false;
		cout << "tv �����ϴ�." << endl;
	}
	void setChannel(int cnl) {
		if (cnl >= 1 && cnl <= 100) {
			channel = cnl;
			cout << "���� ä����" << channel << endl;
		}
	}
	void setVolume(int vol=1) {
		if (vol >= 0 && vol <= 100) {
			volume = vol;
			cout << "���� ������" << volume << endl;
		}
	}
	void setVolumeUp() {
		if (volume >= 0 && volume <100) {
			volume++;
			cout << "���� ������" << volume << endl;
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