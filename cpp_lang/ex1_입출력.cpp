
#include<iostream>
#include<stdint.h>
using namespace std;

int main() {
	//char str[] = "hello world!"; // C언어 
	//배열형태가 아니라서 길이를 안줘도 됨!
	string str; // C++언어 아싸! 자바랑 똑같아~
	str = "Hello wordl~~!";
	cout << str << endl;
	int a = 10;
	int b = 20;
	string how = "목자님은혜로 ";
	string name;
	cout << "이름입력: ";
	cin >> name;
	string message = "안녕하세요," + name + "님."; //문자열 + 기호가능!
	cout << message << endl;
	cout << how+name<<a << b << endl;
}







//#include<iostream>
//using namespace std;
//
//
//int main() {
//	int a, b;
//	cout << "hello world!" << endl;
//	cin >> a >> b; // scanf에서는 자료형써줘야했는데 이거는 불요!
//
//	cout << a << "+" << b << "=" << a + b << endl;
//}














//#include<iostream>
//using namespace std;
//
//int main() {
//	//namespace 성명에서 성
//	//std::cout << "Hello,world!"<< std::endl;
//	cout << "Hello,world!"<< endl;
//}