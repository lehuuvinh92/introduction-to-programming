#include <iostream>
#include <string>
using namespace std;

void passByValue(int *x){
	cout<<"Address of pointer x:"<<&x<<endl;
	(*x)++;
}

int main() {
	int a = 10;
	passByValue(&a);//pass by pointer
	cout<<"Address of variable a:"<<&a<<endl;
	cout<<"Value of variable a changed:"<<a<<endl;
	system("pause");
}