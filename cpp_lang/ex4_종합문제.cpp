#include<iostream>
#include<string>
using namespace std;

int main() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	for (int (&ln)[3] : arr) {
		for (int &col : ln) {
			cout << col << " ";
		}
		cout << endl;
	}
	
	//2�����迭������[Į������]
	for (int(*ln)[3] = arr; ln < arr + 2;ln++) {
		for (int* c = *ln; c < *ln + 3;c++) {
			cout << *c << " ";
		}
		cout << endl;
	}
}


/*��1
int main() {
	string name;
	int score;
	cout << "�̸��Է� :";
	//getline(cin,name);
	cin >> name;
	cout << "�����Է� :";
	cin >> score;
	cout << "���ڴ��Ǿ綼 " << name << "���� ������ " << score << "�� �Դϴ�" << endl;
}
*/
