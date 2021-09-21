#include <iostream>
using namespace std;

#define MAX 5

int main() {
	int arA[MAX];
	cout<<"Input array:"<<endl;
	for(int i= 0; i< MAX; i++){
		cout<<i<<"th element:";
		cin >> arA[i];
	}
	cout<<"Output array:";
	for(int i= 0; i< MAX; i++){
		cout<<arA[i]<<" ";
	}
	system("pause");
}