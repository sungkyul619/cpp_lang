// �����Ҵ�
// �����Ҵ�

#include<iostream>
using namespace std;

class Vector2 {
public:
	Vector2() :x(0), y(0) {
		cout << this << " :Vector2()������" << endl;
	}
	Vector2(const float x, const float y) :x(x), y(y) {
		cout << this << " :Vector2(float x,y)������" << endl;
	}
	~Vector2() {
		cout << this << " : Vector2()�Ҹ���" << endl;
	}
	float getx() const { return x; }
	float gety() const { return y; }
private:
	float x;
	float y;

};



int main() {
	cout << "����" << endl;
	Vector2* d1 = new Vector2();
	Vector2* d2 = new Vector2(2, 3);
	cout << "����??" << endl;
	Vector2 s1; //Vector2 s1 = Vector2();
	Vector2 s2(2, 3);//Vector2 s2 = Vector2(2, 3);


	cout << "(" << d1->getx() << "," << d1->gety() << ")" << endl;
	cout << "(" << d2->getx() << "," << d2->gety() << ")" << endl;
	delete d1;
	delete d2;

	//int* arr;
	//int len;

	//cout << "�����Ҵ� �迭���� �Է�:";
	//cin >> len;
	//arr = new int[len];

	//for (int i = 0;i < len;i++) {
	//	arr[i] = len - i;
	//}
	//for (int i = 0; i < len; i++) {
	//	cout << arr[i] << endl;
	//}
	//delete[] arr;

	//int* a = new int(5); //new���� ���� ������ 
	//// �޸𸮻� ��������������
	//// new�� �ּҰ��� ��ȯ��.
	//cout << a << endl;
	//cout << *a << endl;
	//*a = 10;
	//cout << a << endl;
	//cout << *a << endl;
	//delete a;
	
}	