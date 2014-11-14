#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	long long limit=0,bunbo=1,bunshi=1,x;
	cout << "e^xを求めます。\n";
	cout << "xは？:";
	cin >> x;
	cout << "何項目まで求めますか。";
	cin >> limit;

	double sum=0;
	for(int i=0;i<limit;i++){
		bunbo=1,bunshi=1;
		for(int j=i;j>=1;j--){
			bunbo *= j;
			bunshi *= x;
		}
		sum += static_cast<double>(bunshi)/bunbo;
	}

	cout << "近似値は " 
		 << setw(30)
		 << setprecision(30) //これがないと６桁くらいで終わる。
		 << setiosflags(ios::fixed | ios::showpoint)//あってもなくてもあまり変わらない？
		 <<sum
		 << " です。\n";

	return 0;
}
