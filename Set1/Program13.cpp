// 13:Check whether the number is palindrome or not?

#include<iostream>
using namespace std;

int main()
{
    int num, reverse=0, remainder, original_num;
    cout << "Enter the number : ";
    cin >> num;
    original_num = num;
    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }
    if(original_num == reverse)
    {
        cout << "Number is palindrome";
    }
    else
        cout << "Number is not a palindrome";

    return 0;
}