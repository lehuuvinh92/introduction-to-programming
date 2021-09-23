#include <iostream>
using namespace std;

#define MAXR 100 //max column
#define MAXC 100 //max row

void inputArray(int a[][MAXC], int &m, int &n){
	cout<<"input number of row:";
	cin>>m;
	cout<<"input number of column:";
	cin>>n;
	cout<<"input two dimensional array "<<m<<"x"<<n<<":"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<"a["<<i<<"]["<<j<<"]=";
			cin>>a[i][j];
		}
		cout<<"\n";
	}
}

void outputArray(int a[][MAXC], int m, int n){
	cout<<"output two dimensional array "<<m<<"x"<<n<<":"<<endl;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<a[i][j]<<" ";
		}
		cout<<"\n";
	}
}
int main() {
	int temp[MAXR][MAXC];
	int m, n;
	
	inputArray(temp, m, n);
	
	outputArray(temp, m, n);

	system("pause");
}
