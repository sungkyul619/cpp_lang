// 1. �Ű������� ���ȭ (����Լ�)
// 2. �޼����� ���ȭ(����޼��忡 ���ؼ���)
#include<iostream>
using namespace std;

class Account {
public:
	Account() :money(0){ }
	Account(int money): money(money){ }

	void deposit(const int d) { //����� �Ű�����
		//d = money; //�Ǽ��ڵ�
		money += d;
		cout << d << "���� �����ߴ�!" << endl;
	}
	void draw(const int d) {
		if (money >= d) {
			money -= d;
		}
		cout << d << "���� �����ߴ�!" << endl;
	}

	int viewMoney() const{ //������޼���
		return money;
	}

private:
	int money;
};

int main(){
	Account doodle(200);
	doodle.deposit(100);
	doodle.draw(20);
	cout<<doodle.viewMoney()<<"�� ���Ҵ�^^" << endl;
	cout<<doodle.viewMoney()<<"�� ���Ҵ�^^" << endl;
	cout<<doodle.viewMoney()<<"�� ���Ҵ�^^" << endl;
	cout<<doodle.viewMoney()<<"�� ���Ҵ�^^" << endl;
	cout<<doodle.viewMoney()<<"�� ���Ҵ�^^" << endl;
	cout<<doodle.viewMoney()<<"�� ���Ҵ�^^" << endl;
	cout<<doodle.viewMoney()<<"�� ���Ҵ�^^" << endl;
}