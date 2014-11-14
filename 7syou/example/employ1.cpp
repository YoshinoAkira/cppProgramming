#include "employ1.h"
#include <cstring>
#include <cassert>
#include <iostream>
using namespace std;


//staticなのにint宣言のみで通る不思議
//staticを付けるとエラーが生じる
int Employee::count = 0;
int Employee::number = 0;

void Employee::setFirstName(const char* first){
	strcpy(FirstName,first);
}

Employee::Employee(const char *first,const char *last){
	count++;
	number++;
	FirstName = new char[strlen(first)+1];
	assert(FirstName!=0);
	LastName = new char[strlen(last)+1];
	assert(LastName!=0);
	strcpy(FirstName,first);
	strcpy(LastName,last);	
	cout << "constructor:" << count << endl;
}

Employee::~Employee(){
	cout << "destructor:" << count << endl;
	count--;
	delete [] FirstName;
	delete [] LastName;
}

//static intが返ってくるのに戻り値の型がintなの不思議
//staticを付けるとエラー、cannot declare member functino 〜〜to have static linkage
int Employee::getCount(){
	return count;
}

const char* Employee::getFirstName() const{
	return FirstName;
}

const char* Employee::getLastName() const{
	return LastName;
}



