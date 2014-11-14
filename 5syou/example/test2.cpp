//testの派生
#include <iostream>
#include <cstring>
using namespace std;

int main(){
	char ch[][20]={
		"aiueo","kakikukeko","sashisuseso"
	};

	for(int i=0;i<3;i++){
		cout << ch[i] << endl;
	}

	char *p=(char *)ch;
	int count = 0;
	while(1){
		cout << *p++;
		count++;
		if(count==41)break;
	}
	cout << count << ":" << strlen(ch[0]);
	cout << endl;


	return 0;
}
