#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int *pa;
	pa = &a;
	//Dia chi
	cout<<"Gia tri cua bien con tro pa la dia chi cua bien a:"<<pa<<endl;
	cout<<"Dia chi cua bien a ma bien con tro pa tro den:"<<&a<<endl;
	//Gia tri
	cout<<"Gia tri vung nho ma bien con tro pa tro den:"<<*pa<<endl;
	cout<<"Gia tri cua bien a ma bien con tro pa tro den:"<<a<<endl;
	//Dia chi bien con tro
	cout<<"Dia chi cua bien con tro pa:"<<&pa<<endl;
	system("pause");
}