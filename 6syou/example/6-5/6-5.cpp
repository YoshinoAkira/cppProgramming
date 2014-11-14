#include <iostream>
#include "time1.h"
using namespace std;
int main(){
	Time t;
	cout << "最初の軍用時間は ";
	t.printMilitary();
	cout <<  "最初の標準時刻は ";
	t.printStandard();

	t.setTime(13,27,6);
	cout << endl << "setTime呼び出し後の軍用時刻は ";
	t.printMilitary();
	cout << "setTime呼び出し後の標準時刻は ";
	t.printStandard();

	t.setTime(99,99,99);
	cout << endl << "不正な時刻を設定した後:"
		 << endl << "軍用時刻: ";
	t.printMilitary();
	cout << "標準時刻: ";
	t.printStandard();



	return 0;
}
