//ポインタで文字列宣言したとき、先頭ポインタをインクリメントしていったらどうなるか
#include <iostream>
using namespace std;


int main(){
	char *ch[4]={
		"aho","baka","gomigomi","sushi"
	};
	int count = 0;
	for(int i=0;i<4;i++){
		cout << ch[i] << endl;
	}
	char *p=(char *)ch;
	for(;*p;p++){
		cout << p;
		count++;
	}


	cout << endl<<count << endl;
	return 0;
}
