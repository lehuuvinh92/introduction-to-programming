#include <iostream>
using namespace std;

int FindMax(int a[2][3])
{
	int i, j, max=a[0][0];
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			if(a[i][j] > max){
				max = a[i][j];
			}
		}
	}
	return max;
}

int main() {
	int temp[2][3]={{0, 5, 1},{8, -1, 2}};
	//find max in temp array
	int result = FindMax(temp);
	cout<<"Max in temp array = "<<result;
	system("pause");
}