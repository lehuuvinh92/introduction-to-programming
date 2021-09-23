#include <iostream>
using namespace std;

int main() {
	int temp[3][4];
	cout<<"input temp array:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<"temp["<<i<<"]["<<j<<"]=";
			cin>>temp[i][j];
		}
		cout<<"\n";
	}
	cout<<"output temp array:"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			cout<<temp[i][j]<<" ";
		}
		cout<<"\n";
	}
	system("pause");
}