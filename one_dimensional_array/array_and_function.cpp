#include <iostream>
using namespace std;

#define MAX 5

void changeArray(int a[]){
	a[0]=99;
}
int main() {
	int arA[MAX] = {5, -1, 0, 2, 9};
	cout<<"Output arA array before change:"<<endl;
	for(int i= 0; i< MAX; i++){
		cout<<arA[i]<<" ";
	}
	//call changeArray(int a[]) function
	changeArray(arA);
	cout<<"\nOutput arA array after change:"<<endl;
	for(int i= 0; i< MAX; i++){
		cout<<arA[i]<<" ";
	}
	system("pause");
}
