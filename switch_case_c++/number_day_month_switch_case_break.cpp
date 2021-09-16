#include <iostream>
using namespace std; 
int main() 
{
	int month, year;
	cout<<"Input month:";
	cin>>month;
	cout<<"Input year:";
	cin>>year;
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:cout<<"Month has 31 days!";	break;
		case 4:
		case 6:
		case 9:
		case 11:cout<<"Month has 30 days!";	break;
		case 2:
			if ((year % 100 != 0 && year % 4 == 0) || (year % 400 == 0))
				cout<<"Month has 29 days!";	
			else
				cout<<"Month has 28 days!";	
			break;
		default:
			cout<<"There is not this month!";
	}
	system("pause");
}
