
// ������: ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ���: ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include<iostream>
using namespace std;


class Complex {
public:
	Complex() : real(0), imag(0) {}
	Complex(double real, double imag):real(real),imag(imag){} // ������ ���Ť�
	//Complex(double real_, double imag_):real(real_),imag(imag_){} // ������ ���Ť�
	
	double getReal() {
		return real;
	};
	double setReal(double real_) {
		real = real_;
	};
	double getImag() {
		return imag;
	};
	double setImag(double imag_) {
		imag = imag_;
	};

private: //�������
	double real;
	double imag;
};

class Time { //����������~!
public:
	Time() :h(0), m(0), s(0) {}
	Time(int s_):Time() {
		s = s_;
	}
	Time(int m_,int s_) :Time(s_) {
		s = s_;
		
	}
	Time(int h_,int m_, int s_): Time(m_,s_) {
				h = h_;
	}

//private:
	int h;
	int m;
	int s;
};

int main() {

	Time t1;
	Time t2(5);
	Time t3(3, 16);
	Time t4(1, 50, 8);
	cout << "c1 :" << t1.h << ":" << t1.m << ":" << t1.s << endl;
	cout << "c2 :" << t2.h << ":" << t2.m << ":" << t2.s << endl;
	cout << "c3 :" << t3.h << ":" << t3.m << ":" << t3.s << endl;
	cout << "c4 :" << t4.h << ":" << t4.m << ":" << t4.s << endl;
	//Complex c1; //�⺻������
	//Complex c2 = Complex(2, 3); // new Complex(2,3)�̶� �Ȱ��� by�ڹ�
	//Complex c3(4,1 );
	//cout << "c1= " << c1.getReal() << "," << c1.getImag() << endl;
	//cout << "c2= " << c2.getReal() << "," << c2.getImag() << endl;
	//cout << "c3= " << c3.getReal() << "," << c3.getImag() << endl;
	
	
}