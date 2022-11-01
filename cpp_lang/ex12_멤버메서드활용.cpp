//멤버 메서드의 선언, 정의 분리하기
// 클래스의 이름은 namespace처럼 취급해도 된다
// 멤버메서드도 클래스에 포함된거면 ...

#include<iostream>
using namespace std;
class Vector2 {
public:
	Vector2(); 
	Vector2(float x, float y); 
	float getX() const; 
	float getY() const;
	static Vector2 sum(Vector2 a, Vector2 b) { //정적메소드. 클래스에 소속됨
		return Vector2(a.x + b.x, a.y + b.y); // 때문에 정확히 어떤것에 어떤것 더할지 명시
	}

	Vector2 add(Vector2 rhs) {//동적메소드. 객체에 소속됨
		return Vector2(x + rhs.x, y + rhs.y);
	}

private:
	float x;
	float y;
};

// 전역함수.. 이런건 없을수록 좋다 . 클래스에 넣자!
//Vector2 sum(Vector2 a, Vector2 b) {
//	return Vector2(a.getX() + b.getX(), a.getY() + b.getY());
//}

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	Vector2 c1 = Vector2::sum(a, b);
	Vector2 c2 = a.add(b);
	cout << a.getX() << "," << a.getY() << endl;
	cout << b.getX() << "," << b.getY() << endl;
	cout << c1.getX() << "," << c1.getY() << endl;
	cout << c2.getX() << "," << c2.getY() << endl;

}
//생성자 정의 분리
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
// 메서드 정의 분리
float Vector2:: getX() const { return x; }
float Vector2::getY() const { return y; }