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
	
	//2차원배열포인터[칼럼개수]
	for (int(*ln)[3] = arr; ln < arr + 2;ln++) {
		for (int* c = *ln; c < *ln + 3;c++) {
			cout << *c << " ";
		}
		cout << endl;
	}
}


/*문1
int main() {
	string name;
	int score;
	cout << "이름입력 :";
	//getline(cin,name);
	cin >> name;
	cout << "점수입력 :";
	cin >> score;
	cout << "목자님의양떼 " << name << "님의 점수는 " << score << "점 입니다" << endl;
}
*/
