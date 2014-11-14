#include <iostream>
#include "employ1.h"
using namespace std;
#include <cstdio>

int main(){
	cout << "インスタンス化前の従業員の数は "
		<< Employee::getCount() << endl;

	Employee *e1Ptr = new Employee("Susan","Baker");
	Employee *e2Ptr = new Employee("Robert", "Jones");
	Employee *e3Ptr;
	e3Ptr=e2Ptr;
	cout << "インスタンス化後の従業員の数は "
		<< e1Ptr->getCount() <<endl;
	cout << endl << "従業員1: "
		<< e1Ptr->getFirstName()
		<< "  " << e1Ptr->getLastName()
		<< endl << "従業員2: "
		<< e2Ptr->getFirstName()
		<< "  " << e2Ptr->getLastName() << endl << endl;


	cout << e3Ptr->getFirstName() << endl; 
	cout << "count" << Employee::getCount() << endl;
	cout << endl;

	Employee *e4ptr = new Employee("Victory","Firm");


	////
	//デリート前のポインタ。デリート後もポインタがあることを最後に示す。
	cout << "__________________________\n";
	printf("e1Ptr:%p\n",e1Ptr);
	printf("e2Ptr:%p\n",e2Ptr);
	printf("e3Ptr:%p\n",e3Ptr);
	printf("e4Ptr:%p\n",e4ptr);
	cout<< "___________________________\n";

	
	delete e1Ptr;
	cout << endl << "従業員" << e4ptr->getNumber() <<"(" <<Employee::getCount()  << "): "
		<< e4ptr->getFirstName()
		<< "  " << e4ptr->getLastName() << endl << endl;

	delete e2Ptr;

	cout << "メモリ領域を解放した後の従業員の数は "
		 << Employee::getCount() << endl;

	delete e4ptr;


	//デリート後のポインタが存在することが示される。
	//さらに、デリート後のポインタにsetFirstNameを使って名前を設定して、さらに、それをgetFirstNameして出力することもできる。
	cout << "__________________________\n";
	printf("e1Ptr:%p\n",e1Ptr);
	printf("e2Ptr:%p\n",e2Ptr);
	printf("e3Ptr:%p\n",e3Ptr);
	printf("e4Ptr:%p\n",e4ptr);
	e1Ptr->setFirstName("tiger");
	cout << e1Ptr->getFirstName()<<endl;

	
	cout<< "___________________________\n";

	
	return 0;
}
