#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int *pa;
	pa = &a;
	//Address
	cout<<"Value of pointer pa:"<<pa<<endl;
	cout<<"Address of variable a:"<<&a<<endl;
	//Value
	cout<<"Value of memory area which pointer pa point to:"<<*pa<<endl;
	cout<<"Value of variable a:"<<a<<endl;
	//Address of pointer
	cout<<"Address of pointer pa:"<<&pa<<endl;
	system("pause");
}
