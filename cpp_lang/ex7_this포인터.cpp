#include<iostream>
using namespace std;


//this: ������ �ʴ� �Ű�����. ��ü�� �ּҸ� �˷��ش�!

struct MyClass {
public:
	void printThis() {
		cout << "this �����ּҴ�" << this << endl;
	}
	void printThis(MyClass* ptr) {
		cout << "������ �����ּҴ�" << ptr << endl;
	}

};
int main(){
	MyClass a,b;
	cout << "a���ּҴ� " << &a << endl;
	cout << "b���ּҴ� " << &b << endl;
	a.printThis(&a);
	b.printThis(&b);
	a.printThis();
	b.printThis();

}
