//
////오버로딩 개념이네~
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
//	//파이썬 a,b=20,30
//	int a = 20, b = 30;
//	double da = 2.222, db = 3.333;
//	int *pa = &a, *pb = &b;
//	swap(a, b);
//	swap(da, db);
//	swap(pa, pb);
//	// 컴파일러가 매개변수형을 인식하고 적합한것으로 찾아줌
//	std::cout << "a:b =" << a << ":" << b << std::endl;
//	std::cout << "da:db =" << da << ":" <<db << std::endl;
//	std::cout << "pa:pb =" << *pa << ":" << *pb << std::endl;
//}

#include<iostream>

using namespace std;

int inventory[64] = { 0 };
int score = 0;

//디폴트값은 오른쪽부터 부여해야한다.
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