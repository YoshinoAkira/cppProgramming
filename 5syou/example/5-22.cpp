#include <iostream>
#include <cstring>
using namespace std;


int main(){
	char string[]="this is a sentence with 7 tokens";
	char *tokenPtr;

	cout << string << endl;
	cout << "token:" <<endl;

	tokenPtr=strtok(string,"  ");
	while(tokenPtr !=NULL){
		cout << tokenPtr << endl;
		tokenPtr=strtok(NULL,"  "); 
	}


	cout << endl;
	cout << string<< endl;
	return 0;
}
