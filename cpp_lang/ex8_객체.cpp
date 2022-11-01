
// 생성자: 객체가 생성될 때 자동으로 호출되는 함수
// 소멸자: 객체가 소멸될 때 자동으로 호출되는 함수

#include<iostream>
using namespace std;

class MyClass {
public:
	MyClass() { //생성자. 반환하는 자료형을 써주지 않는다.
		cout << "생성자 호출" << endl;
	}
	
	~MyClass() { //소멸자. 
		cout << "소멸자 호출" << endl;
	}
};
//MyClass globalObj;
void testLocalObj() {
	cout << "testLocalObj함수 시작"<<endl;
	MyClass localObj;
	cout << "testLocalObj함수 끝" << endl;

}


class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) { //생성자 오버로딩
		real = real_;
		imag = imag_;
	}
	double getReal(){
		return real;
	};
	double setReal(double real_) {
		real=real_;
	};
	double getImag() {
		return imag;
	};
	double setImag(double imag_) {
		imag = imag_;
	};

private:
	double real;
	double imag;
};

int main() {
	Complex c1; //기본생성자
	Complex c2 =Complex(2,3); // new Complex(2,3)이랑 똑같네 by자바
	Complex c3(4, 5);
	Complex c4 = { 6,7 };
	Complex c5 = Complex{ 8,9 };
	Complex c6{ 10,11 };


	cout << "c1= " << c1.getReal() << "," << c1.getImag() << endl; 
	cout << "c2= " << c2.getReal() << "," << c2.getImag() << endl; 
	cout << "c3= " << c3.getReal() << "," << c3.getImag() << endl; 
	cout << "c4= " << c4.getReal() << "," << c4.getImag() << endl; 
	cout << "c5= " << c5.getReal() << "," << c5.getImag() << endl; 
	cout << "c6= " << c6.getReal() << "," << c6.getImag() << endl; 


	/*cout << "main함수 시작!" << endl;
	testLocalObj();
	cout << "main함수 끝!" << endl;*/
}