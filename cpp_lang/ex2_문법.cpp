#include<iostream>
using namespace std;
//범위기반 for문

//int main() {
//	int a(5);
//	int &r1 = a; //레퍼런스변수
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
//	for (int &n: arr) { //자바 foreach문 같은거ㅋ
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
	int a(10); //cpp스타일
	//int a = 10; //c스타일
	int b(a+5);
	
	cout << "a =" << a << endl;
	cout << "b =" << b << endl;
}*/