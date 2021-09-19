#include <iostream>
using namespace std;

// Return type of function is int
int prime()
{
    int n;

    printf("Enter a positive integer to check: ");
    cin >> n;

    return n;
}

int main()
{
    int num, i, flag = 0;

    // No argument is passed to prime()
    num = prime();
    for (i = 2; i <= num/2; ++i){
        if (num%i == 0){
            flag = 1;
            break;
        }
    }

    if (flag == 1){
        cout<<num<<" is not a prime number.";
    }else{
        cout<<num<<" is a prime number.";
    }
    system("pause");
}