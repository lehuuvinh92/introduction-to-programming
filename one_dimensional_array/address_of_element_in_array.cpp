#include <iostream>
using namespace std;

#define MAX 5

int main() {
	int arA[MAX] = {5, -1, 0, 2, 9};
	cout<<"Address of elements in array:"<<endl;
	for(int i= 0; i< MAX; i++){
		cout<<&arA[i]<<" ";
	}
	system("pause");
}