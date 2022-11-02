// 정적할당
// 동적할당

#include<iostream>
using namespace std;

class Vector2 {
public:
	Vector2() :x(0), y(0) {
		cout << this << " :Vector2()생성자" << endl;
	}
	Vector2(const float x, const float y) :x(x), y(y) {
		cout << this << " :Vector2(float x,y)생성자" << endl;
	}
	~Vector2() {
		cout << this << " : Vector2()소멸자" << endl;
	}
	float getx() const { return x; }
	float gety() const { return y; }
private:
	float x;
	float y;

};



int main() {
	cout << "ㅋㅋ" << endl;
	Vector2* d1 = new Vector2();
	Vector2* d2 = new Vector2(2, 3);
	cout << "정적??" << endl;
	Vector2 s1; //Vector2 s1 = Vector2();
	Vector2 s2(2, 3);//Vector2 s2 = Vector2(2, 3);


	cout << "(" << d1->getx() << "," << d1->gety() << ")" << endl;
	cout << "(" << d2->getx() << "," << d2->gety() << ")" << endl;
	delete d1;
	delete d2;

	//int* arr;
	//int len;

	//cout << "동적할당 배열길이 입력:";
	//cin >> len;
	//arr = new int[len];

	//for (int i = 0;i < len;i++) {
	//	arr[i] = len - i;
	//}
	//for (int i = 0; i < len; i++) {
	//	cout << arr[i] << endl;
	//}
	//delete[] arr;

	//int* a = new int(5); //new연산 옆에 생성자 
	//// 메모리상에 저장공간만들어짐
	//// new는 주소값을 반환함.
	//cout << a << endl;
	//cout << *a << endl;
	//*a = 10;
	//cout << a << endl;
	//cout << *a << endl;
	//delete a;
	
}	