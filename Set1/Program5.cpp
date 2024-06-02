// 5. Write a program to accept a number and check if it is divisible by 5 and 7.

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number : " << endl;
    cin >> num;
    if(num%7==0 && num%5==0)
    {
        cout << "Given number is divisible by 5 and 7." << endl;
    }
    else
    {
        cout << "Given number is not divisible by 5 and 7." << endl;
    }
    
    return 0;
}