//��ü �ȿ��� �����Ҵ�!
#include<iostream>
using namespace std;

class String {
public:
	String() {
		strData = NULL;
		len = 0;
	}
	String(char* str) {
		//strData =str //�������簡 �ǹ���.�����Ҵ翡�� �Ҹ��� ���������.
		len = strlen(str);
		strData = new char[len+1]; //"\0"���� �����ؾ��ϹǷ�.
		strcpy(strData, str);
	}
	~String() {
		delete[] strData;
	}
	char *GetStrData( )const{
		return strData;
	}

	int GetLen() const {
		return len;
	} 
private:
	char* strData;
	int len;
};