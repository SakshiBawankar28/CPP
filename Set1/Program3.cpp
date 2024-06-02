// 3:Write a program to swap two numbers.

#include<iostream>
using namespace std;

int main()
{
    int n1, n2, temp;
    cout << "Enter num1 and num2  : "<< endl;
    cin >> n1 >> n2;
    cout << "Before swapping numner is "<< n1 << " and " << n2 <<endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout << "After swapping numner is "<< n1 <<" and "<< n2 <<endl;
    return 0;
}