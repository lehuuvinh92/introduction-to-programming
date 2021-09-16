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
		case 1:cout<<"Month has 31 days!";	break;
		case 3:cout<<"Month has 31 days!";	break;
		case 5:cout<<"Month has 31 days!";	break;
		case 7:cout<<"Month has 31 days!";	break;
		case 8:cout<<"Month has 31 days!";	break;
		case 10:cout<<"Month has 31 days!";	break;
		case 12:cout<<"Month has 31 days!";	break;
		case 4:cout<<"Month has 30 days!";	break;
		case 6:cout<<"Month has 30 days!";	break;
		case 9:cout<<"Month has 30 days!";	break;
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
