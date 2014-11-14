#include <iostream>
using namespace std;
#include <cstdlib>

double oneToTwo(); 
double oneToHundred(); 
double zeroToNine(); 
double thousandToT();
double mOneToOne();
double mThreeToEleven();

enum random {OTT,OTH,ZTN,TTT,MOTO,MTTE};
void test(enum random num);

int main(){
	enum random ran;
	ran = OTH;
	cout << ran << endl;
	cout << ran << endl;
	test(OTH);
	
	return 0;
}

double oneToTwo(){
	return rand() % 2 + 1;
}

double oneToHundred(){
	return rand() % 100 + 1;
}

double zeroToNine(){
	return rand() % 10;
}

double thousandToT(){
	return rand() % 113 + 1000;
}

double mOneToOne(){
	return rand() % 3 - 1;
}

double mThreeToEleven(){
	return rand() % 15 -3;
}

void test(enum random num){
	cout << "試行回数は？";
	int shikou=0;
	cin >> shikou;
	int d=0;
	double (*func)();
	switch(num){
		case OTT:
			d=2;
			func = oneToTwo;
			break;
		
		case OTH:
			d=101;
			func = oneToHundred;
			break;
		
		case ZTN:
			d=10;
			func = zeroToNine;
			break;
		
		case TTT:
			d=113;
			func = thousandToT;
			break;
		
		case MOTO:
			d=3;
			func = mOneToOne;
			break;

		case MTTE:
			d=15;
			func = mThreeToEleven;
			break;

		default:
			cout << "error:" << endl;
			return;
	}

	int *p = new int[d];
	int r = 0 ;
	for(int i=0;i<shikou;i++){
		r = func();
		cout << r << "\t";
	}
	cout << endl;
}
