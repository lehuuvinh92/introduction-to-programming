#include <iostream>
using namespace std;

int main() {
	char arCh[50];
	cout<<"Input character sequences with cin:";
	cin>>arCh;
	cout<<"Character sequences received with cin:";
	cout<<arCh;
	cin.clear();
	cin.ignore(100, '\n');
	cout<<"\nInput character sequences with cin.getline:";
	cin.getline(arCh,50);
	cout<<"Character sequences received with cin.getline:";
	cout<<arCh;
	
	system("pause");
}