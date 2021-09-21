#include <iostream>
using namespace std;

#define MAX 5

int main() {
	int arA[MAX] = {5, -1, 0, 2, 9};
	cout<<"Output array:";
	for(int i= 0; i< MAX; i++){
		cout<<arA[i]<<" ";
	}
	//change value of 0th element in array
	arA[0]=99;
	cout<<"\nOutput array after changed:";
	for(int i= 0; i< MAX; i++){
		cout<<arA[i]<<" ";
	}
	system("pause");
}