/*Steps to manipulate file
Step 1: Open file
Step 2: Read/write file
Step 3: Close file
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
	string a;
	fstream data_file;
	string line;
	cout<<"================Read file================="<<endl;
	data_file.open("C:\\data.txt", ios::app | ios::out | ios::in);
	//Read file
	while (!data_file.eof()) {
			getline(data_file,line);
			cout<<line<<endl;
	}
	data_file.close();

	//Write file
	cout<<"================Write file================="<<endl;
	data_file.open("C:\\data.txt", ios::app | ios::out | ios::in);
	getline(cin, line);
	data_file<<'\n'<<line;
	data_file.close();

	//Read file after write file
	cout<<"================Read file after write file================="<<endl;
	data_file.open("C:\\data.txt", ios::app | ios::out | ios::in);
	while (!data_file.eof()) {
			getline(data_file,line);
			cout<<line<<endl;
	}
	data_file.close();

	system("pause");
}