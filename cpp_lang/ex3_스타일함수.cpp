//
////�����ε� �����̳�~
//
//#include<iostream>
////using namespace std;
//
//void swap(int& a, int& b) {
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void swap(double& a, double& b) {
//	double tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void swap(int* (&a), int* (&b)) {
//	int* tmp = a;
//	a = b;
//	b = tmp;
//}
//int main() {
//	//���̽� a,b=20,30
//	int a = 20, b = 30;
//	double da = 2.222, db = 3.333;
//	int *pa = &a, *pb = &b;
//	swap(a, b);
//	swap(da, db);
//	swap(pa, pb);
//	// �����Ϸ��� �Ű��������� �ν��ϰ� �����Ѱ����� ã����
//	std::cout << "a:b =" << a << ":" << b << std::endl;
//	std::cout << "da:db =" << da << ":" <<db << std::endl;
//	std::cout << "pa:pb =" << *pa << ":" << *pb << std::endl;
//}

#include<iostream>

using namespace std;

int inventory[64] = { 0 };
int score = 0;

//����Ʈ���� �����ʺ��� �ο��ؾ��Ѵ�.
void getItem(int itemId, int cnt=1, int sc=0) {
	inventory[itemId] += cnt;
	score += sc;
}

int main() {
	getItem(6, 5);
	getItem(3, 2);
	getItem(3);
	getItem(11,34,7000);

	cout << score << endl;
	for (int i = 0;i < 16;i++) cout << inventory[i] << ' ';
	cout << endl;
}