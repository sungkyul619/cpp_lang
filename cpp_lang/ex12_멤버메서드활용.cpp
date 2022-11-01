//��� �޼����� ����, ���� �и��ϱ�
// Ŭ������ �̸��� namespaceó�� ����ص� �ȴ�
// ����޼��嵵 Ŭ������ ���ԵȰŸ� ...

#include<iostream>
using namespace std;
class Vector2 {
public:
	Vector2(); 
	Vector2(float x, float y); 
	float getX() const; 
	float getY() const;
	static Vector2 sum(Vector2 a, Vector2 b) { //�����޼ҵ�. Ŭ������ �Ҽӵ�
		return Vector2(a.x + b.x, a.y + b.y); // ������ ��Ȯ�� ��Ϳ� ��� ������ ���
	}

	Vector2 add(Vector2 rhs) {//�����޼ҵ�. ��ü�� �Ҽӵ�
		return Vector2(x + rhs.x, y + rhs.y);
	}

private:
	float x;
	float y;
};

// �����Լ�.. �̷��� �������� ���� . Ŭ������ ����!
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
//������ ���� �и�
Vector2::Vector2() : x(0), y(0) {}
Vector2::Vector2(float x, float y) : x(x), y(y) {}
// �޼��� ���� �и�
float Vector2:: getX() const { return x; }
float Vector2::getY() const { return y; }