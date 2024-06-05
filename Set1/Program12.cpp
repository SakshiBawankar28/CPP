// 12:Sum of series : 1+2+3+….+n

#include<iostream>
using namespace std;

int main()
{
    int num, sum=0;
    cout<<"Enter the number till you want sum : ";
    cin >> num;
    for(int i=0; i<=num; i++)
    {
        sum = sum+i;
    }
    cout << " Sum = " << sum;

    return 0;
}