#include<iostream>
using namespace std;
//������� for��

//int main() {
//	int a(5);
//	int &r1 = a; //���۷�������
//	
//}

void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}
int main() {
	int a=5;
	int &p = a;
	p = 17;
	cout <<"a =" << a << endl; //17
	cout <<"p =" << p << endl; //17
	int b = 20;
	swap(a, b);
	cout << a<<"," << b << endl;
	/*cout << &a << endl;
	cout << &p<<endl;*/


}

//int main() {
//	int arr[10] = { 3,1,4,1,5,9,2,6,5,3 };
//	for (int &n: arr) { //�ڹ� foreach�� �����Ť�
//		cout << n << ' ';
//		n++;
//	}
//	cout << endl; 
//
//	for (int i : arr) {
//		cout << i << " ";
//	}
//	cout << endl;
//}


/*
int main() {
	int a(10); //cpp��Ÿ��
	//int a = 10; //c��Ÿ��
	int b(a+5);
	
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
}*/