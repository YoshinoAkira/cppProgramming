#include "salesp.h"
#include <iostream>
#include <iomanip>

using namespace std;

SalesPerson::SalesPerson(){
	for(int i=0;i<12;i++){
		sales[i]=0;
	}
}

void SalesPerson::getSalesFromUser(){
	double sales=0;
		for(int i=0;i<12;i++){
			cout << i+1 << "月の売上:";
			cin >> sales;
			setSales(i,sales);
		}
}

void SalesPerson::setSales(int i,double f){
	if(i<0 || i>12 || f<0)
		cout << "入力エラー\n";
	else
		sales[i] = f;
}

void SalesPerson::printAnnualSales(){
	cout << "年間合計: " 
		<< setprecision(2)
		<<setiosflags(ios::fixed | ios::showpoint) 
		<< totalAnnualSales() << endl;
}

double SalesPerson::totalAnnualSales(){
	double total=0;
	for(int i=0;i<12;i++){
		total += sales[i];
	}

	return total;
}

