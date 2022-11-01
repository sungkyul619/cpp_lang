
// ������: ��ü�� ������ �� �ڵ����� ȣ��Ǵ� �Լ�
// �Ҹ���: ��ü�� �Ҹ�� �� �ڵ����� ȣ��Ǵ� �Լ�

#include<iostream>
using namespace std;

class MyClass {
public:
	MyClass() { //������. ��ȯ�ϴ� �ڷ����� ������ �ʴ´�.
		cout << "������ ȣ��" << endl;
	}
	
	~MyClass() { //�Ҹ���. 
		cout << "�Ҹ��� ȣ��" << endl;
	}
};
//MyClass globalObj;
void testLocalObj() {
	cout << "testLocalObj�Լ� ����"<<endl;
	MyClass localObj;
	cout << "testLocalObj�Լ� ��" << endl;

}


class Complex {
public:
	Complex() {
		real = 0;
		imag = 0;
	}
	Complex(double real_, double imag_) { //������ �����ε�
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
	Complex c1; //�⺻������
	Complex c2 =Complex(2,3); // new Complex(2,3)�̶� �Ȱ��� by�ڹ�
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


	/*cout << "main�Լ� ����!" << endl;
	testLocalObj();
	cout << "main�Լ� ��!" << endl;*/
}