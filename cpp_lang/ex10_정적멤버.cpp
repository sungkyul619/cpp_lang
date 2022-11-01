#include<iostream>
using namespace std;


//전역변수는 객체지향프로그램에서 지양! c#같은경우 전역변수가 없다~
// 전역변수 너무 많으면 프로그램 난잡해진다
// 전역변수 안쓰려고 정적멤버 만든다~

class Color {
public:
	Color() :r(0), g(b), b(0), id(idCounter++) { }
	Color(float r, float g, float b) :r(r),g(g),b(b), id(idCounter++) {}
	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }
	int getId() { return id; }
	//정적멤버메서드 클래스 자체에 포함된다.
	static Color mixColor(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	static int idCounter ; //전역변수였던애를 정적변수로 클래스내에 선언하고
private:
	float r;
	float g;
	float b;
	int id;
};

int Color::idCounter = 1; //정적변수의 초기화는 네임스페이스 형태로 외부에서.


int main() {
	Color red(1, 0, 0);
	Color blue(0, 0, 1);
	Color res= Color::mixColor(red, blue);
	//Color res= res.mixColor(red, blue);

	cout << "r =" << res.getR() << " g =" << res.getG() << " b =" << res.getB() << endl;
	cout << "red.getId()= " << red.getId() << endl;
	cout << "blue.getId()= " << blue.getId() << endl;
	cout << "res.getId()= " << res.getId() << endl;



}










//// static: 정적 <-> 동적
//#include<iostream>
//using namespace std;
//
//class Color {
//public:
//	Color() :r(0), g(0),b(0){}
//	Color(float r, float g, float b) : r(r), g(g), b(b) {}
//	float getR() { return r; }
//	float getG() { return g; }
//	float getB() { return b; }
//
//	static Color mixColor(Color a, Color b) {
//		return Color((a.r + b.r / 2), (a.g + b.g / 2), (a.b + b.b / 2));
//	}
//
//private:
//	float r;
//	float g;
//	float b;
//};
//
////Color mixColor(Color a, Color b) {
////	//생성자 초기값 지정하여 생성.
////	//Color res((a.getR () + b.getR() / 2), (a.getG() + b.getG() / 2), (a.getB() + b.getB() / 2));
////	return Color((a.getR() + b.getR() / 2), (a.getG() + b.getG() / 2), (a.getB() + b.getB() / 2));
////			//자바의 new Color(r,g,b)에서 new만 뺀것. 객체생성
////}
//
//int main() {
//	Color blue(0, 0, 1);
//	Color red(1, 0,0 );
//	Color res = Color::mixColor(blue, red);
//	cout << "r =" << res.getR() << " g =" << res.getG() << " b =" << res.getB() << endl;
//}