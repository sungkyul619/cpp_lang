//객체 안에서 동적할당!
#include<iostream>
using namespace std;

class String {
public:
	String() {
		strData = NULL;
		len = 0;
	}
	String(char* str) {
		//strData =str //얕은복사가 되버림.동적할당에서 소멸자 에러생긴다.
		len = strlen(str);
		strData = new char[len+1]; //"\0"까지 포함해야하므로.
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