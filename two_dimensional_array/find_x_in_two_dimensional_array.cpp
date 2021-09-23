#include <iostream>
using namespace std;

int FindX(int a[2][3], int x)
{
	int i, j;
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			if (a[i][j] == x){
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int temp[2][3]={{0, 5, 1},{8, -1, 2}};
	//find -1 in temp array
	int result = FindX(temp, -1);
	if(result == 1){
		cout<<"Find -1 in temp array";
	}else{
		cout<<"Not find -1 in temp array";
	}
	system("pause");
}