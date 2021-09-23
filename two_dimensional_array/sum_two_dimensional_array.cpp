#include <iostream>
using namespace std;

int sumArray(int a[2][3])
{
	int i, j, sum=0;
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			sum = sum + a[i][j];
		}
	}
	return sum;
}

int main() {
	int temp[2][3]={{0, 5, 1},{8, -1, 2}};
	//sum elements in temp array
	int result = sumArray(temp);
	cout<<"Sum elements in temp array = "<<result;
	system("pause");
}