#include<iostream>



using namespace std;
class Myclass {
public: //객체의 i번요소 인스턴트는 num도 i랑 같음
	Myclass():num(cnt++),ch('\0') {}
	void check(Myclass* ptr) { //전체주소가져와서
		if (ptr + num == this) { //함수호출한 i번객체 주소
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
	//	obj[i].check(obj); //i번째주소도포함하는 전체주소
	//}
	int x = 10;
	int* px = &x;
	int y = *px;
	int& rx = x;
	px = &x; //포인터의 주소를 바꿀때 사용
	//*px는 출력으로 포인터주소에 있는값을 출력할떄사용
	cout << px << endl;
	cout << *px << endl;



}
