// 1. 매개변수의 상수화 (모든함수)
// 2. 메서드의 상수화(멤버메서드에 대해서만)
#include<iostream>
using namespace std;

class Account {
public:
	Account() :money(0){ }
	Account(int money): money(money){ }

	void deposit(const int d) { //상수형 매개변수
		//d = money; //실수코드
		money += d;
		cout << d << "원을 예금했다!" << endl;
	}
	void draw(const int d) {
		if (money >= d) {
			money -= d;
		}
		cout << d << "원을 인출했다!" << endl;
	}

	int viewMoney() const{ //상수형메서드
		return money;
	}

private:
	int money;
};

int main(){
	Account doodle(200);
	doodle.deposit(100);
	doodle.draw(20);
	cout<<doodle.viewMoney()<<"원 남았다^^" << endl;
	cout<<doodle.viewMoney()<<"원 남았다^^" << endl;
	cout<<doodle.viewMoney()<<"원 남았다^^" << endl;
	cout<<doodle.viewMoney()<<"원 남았다^^" << endl;
	cout<<doodle.viewMoney()<<"원 남았다^^" << endl;
	cout<<doodle.viewMoney()<<"원 남았다^^" << endl;
	cout<<doodle.viewMoney()<<"원 남았다^^" << endl;
}