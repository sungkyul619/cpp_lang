#include<iostream>
using namespace std;


//���������� ��ü�������α׷����� ����! c#������� ���������� ����~
// �������� �ʹ� ������ ���α׷� ����������
// �������� �Ⱦ����� ������� �����~

class Color {
public:
	Color() :r(0), g(b), b(0), id(idCounter++) { }
	Color(float r, float g, float b) :r(r),g(g),b(b), id(idCounter++) {}
	float getR() { return r; }
	float getG() { return g; }
	float getB() { return b; }
	int getId() { return id; }
	//��������޼��� Ŭ���� ��ü�� ���Եȴ�.
	static Color mixColor(Color a, Color b) {
		return Color((a.r + b.r) / 2, (a.g + b.g) / 2, (a.b + b.b) / 2);
	}
	static int idCounter ; //�������������ָ� ���������� Ŭ�������� �����ϰ�
private:
	float r;
	float g;
	float b;
	int id;
};

int Color::idCounter = 1; //���������� �ʱ�ȭ�� ���ӽ����̽� ���·� �ܺο���.


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










//// static: ���� <-> ����
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
////	//������ �ʱⰪ �����Ͽ� ����.
////	//Color res((a.getR () + b.getR() / 2), (a.getG() + b.getG() / 2), (a.getB() + b.getB() / 2));
////	return Color((a.getR() + b.getR() / 2), (a.getG() + b.getG() / 2), (a.getB() + b.getB() / 2));
////			//�ڹ��� new Color(r,g,b)���� new�� ����. ��ü����
////}
//
//int main() {
//	Color blue(0, 0, 1);
//	Color red(1, 0,0 );
//	Color res = Color::mixColor(blue, red);
//	cout << "r =" << res.getR() << " g =" << res.getG() << " b =" << res.getB() << endl;
//}