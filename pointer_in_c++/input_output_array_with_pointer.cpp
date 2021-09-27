#include <iostream>
using namespace std;

int main() {
	int arr[5], *parr;
	parr = arr;
	cout<<"input array"<<endl;
	for(int i=0;i<5;i++){
		cout<<"input "<<i<<"th element:";
		cin>>parr[i];
	}
	cout<<endl<<"output array:";
	for(int i=0;i<5;i++){
		cout<<*(parr + i)<<" ";
	}
	system("pause");
}