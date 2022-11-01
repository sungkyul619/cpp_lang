#include<iostream>
using namespace std;
class Vector2 {
public:
	Vector2();
	Vector2(float x, float y);
	float getX() const;
	float getY() const;
	

	Vector2 operator+(const Vector2 rhs) const; //멤버 연산자
	Vector2 operator-(const Vector2 rhs) const;
	Vector2 operator*(const float rhs) const;
	Vector2 operator/(const float rhs) const;
	float operator*(const Vector2 rhs) const;


private:
	float x;
	float y;
};

//전역
Vector2 operator*(const float a, const Vector2 b) { //비멤버 연산자
	return Vector2(a * b.getX(), a* b.getY());
}

int main() {
	Vector2 a(2, 3);
	Vector2 b(-1, 4);
	float f(3);
	/*Vector2 c1 = sum(a, b);
	Vector2 c2 = a.operator+(b);*/
	Vector2 c3 = a+b;
	Vector2 c4 = a-b;
	Vector2 c5 = a*f;
	Vector2 c6 = f*a;
	//Vector2 c6 = a/f;
	//float c7 = a*b;
	cout << a.getX() << "," << a.getY() << endl;
	cout << b.getX() << "," << b.getY() << endl;
	cout << c3.getX() << "," << c3.getY() << endl;
	cout << c4.getX() << "," << c4.getY() << endl;
	cout << c5.getX() << "," << c5.getY() << endl;
	cout << c6.getX() << "," << c6.getY() << endl;
	//cout << c7 << endl;

}
//생성자 정의 분리
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
// 메서드 정의 분리할땐 반환형 먼저 써주고!
float Vector2::getX() const { return x; }
float Vector2::getY() const { return y; }

Vector2 Vector2::operator+(const Vector2 rhs) const {//동적메소드. 객체에 소속됨
	return Vector2(x + rhs.x, y + rhs.y);
}

Vector2 Vector2::operator-(const Vector2 rhs) const {
	return Vector2(x - rhs.x, y - rhs.y);
};
Vector2 Vector2::operator*(const float rhs) const {
	return Vector2(x * rhs, y * rhs);
};
Vector2 Vector2::operator/(const float rhs) const {
	return Vector2(x / rhs, y / rhs);
};
float Vector2::operator*(const Vector2 rhs) const {
	return (x * rhs.x+ y * rhs.y);
};