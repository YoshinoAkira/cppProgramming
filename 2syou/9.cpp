#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
	double amount,principal=1000.0, rate = 0.05;

	cout << "年数" << setw(21) << "預金残高" <<endl;

	for(int year = 1;year <=10; year++){
		amount = principal * pow(1.0+rate,year);
		cout << setw(2) << year
			<< setiosflags(ios::fixed | ios::showpoint)
			<< setw(20) << setprecision(2) <<amount << endl;
	}
	
	return 0;
}
