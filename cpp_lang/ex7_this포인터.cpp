#include<iostream>
using namespace std;


//this: 보이지 않는 매개변수. 객체의 주소를 알려준다!

struct MyClass {
public:
	void printThis() {
		cout << "this 나의주소는" << this << endl;
	}
	void printThis(MyClass* ptr) {
		cout << "포인터 나의주소는" << ptr << endl;
	}

};
int main(){
	MyClass a,b;
	cout << "a의주소는 " << &a << endl;
	cout << "b의주소는 " << &b << endl;
	a.printThis(&a);
	b.printThis(&b);
	a.printThis();
	b.printThis();

}
