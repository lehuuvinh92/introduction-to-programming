#include <iostream>
using namespace std;

#define MAX 5

int main() {
	int arA[MAX] = {5, -1, 0, 2, 9};
	int arB[MAX];
	cout<<"Output arB (arB store garbage values due to is not initialization):\n";
	for(int i= 0; i< MAX; i++){
		cout<<arB[i]<<" ";
	}
	//copy arA to arB
	for(int i= 0; i< MAX; i++){
		arB[i]=arA[i];
	}
	cout<<"\nOutput arB (arB store elements of arA):\n";
	for(int i= 0; i< MAX; i++){
		cout<<arB[i]<<" ";
	}
	system("pause");
}