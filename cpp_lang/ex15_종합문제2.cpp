#include<iostream>



using namespace std;
class Myclass {
public: //��ü�� i����� �ν���Ʈ�� num�� i�� ����
	Myclass():num(cnt++),ch('\0') {}
	void check(Myclass* ptr) { //��ü�ּҰ����ͼ�
		if (ptr + num == this) { //�Լ�ȣ���� i����ü �ּ�
			cout << num << endl;
		}
	}
private:
	int num;
	char ch;
	static int cnt;
};

int Myclass::cnt = 1;
int main() {

	//Myclass obj[5];
	//for (int i = 0;i < 5;i++) {
	//	obj[i].check(obj); //i��°�ּҵ������ϴ� ��ü�ּ�
	//}
	int x = 10;
	int* px = &x;
	int y = *px;
	int& rx = x;
	px = &x; //�������� �ּҸ� �ٲܶ� ���
	//*px�� ������� �������ּҿ� �ִ°��� ����ҋ����
	cout << px << endl;
	cout << *px << endl;



}
