#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int bunshi=1,bunbo=4,d=0,minus=1;
	double a=3.14, b=3.141, c=3.1415, e=3.14159;
	int aflag=0, bflag=0,cflag=0,eflag=0;
	double adif=0,bdif=0,cdif=0,edif=0;
	cout << "いくつまで求めますか:";
	cin >> d;
	double pi=0;
	for(int i=0;i<d;i++){
		pi += static_cast<double>(bunbo)/bunshi*minus;
		minus *= -1;
		bunshi += 2;

		adif=(pi-a)*100;
		bdif=(pi-b)*1000;
		cdif=(pi-c)*10000;
		edif=(pi-e)*100000;
		if(adif>=0 && adif<1 && !aflag){
			cout << i+1 << "番目で " << a << " が出る。\n";
			aflag=1;
		}
		if(bdif>=0 && bdif<1 && !bflag){
			cout << i+1 << "番目で " << b << " が出る。\n";
			bflag=1;
		}
		if(cdif>=0 && cdif<1 && !cflag){
			cout << i+1 << "番目で " << c << " が出る。\n";
			cflag=1;
		}
		if(edif>=0 && edif<1 && !eflag){
			cout << i+1 << "番目で " << e << " が出る。\n";
			eflag=1;
		}
	}
	cout << adif << endl;
	cout << bdif << endl;
	cout << cdif << endl;
	cout << edif << endl;
	cout << "πは " 
		 << setw(20)
		 << setprecision(20)
		 << setiosflags(ios::fixed | ios::showpoint)
		 << pi << " です。\n";

	return 0;
}
