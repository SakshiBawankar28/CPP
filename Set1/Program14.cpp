//14:Write a  program to find sum of all even and odd numbers between 1 to n. 

#include<iostream>
using namespace std;

int main()
{
    int num, even_sum=0, odd_sum=0;
    cout << "Enter the number till you want sum of all even and odd numbers : " ;
    cin >> num;
    for(int i=1; i<=num; i++)
    {
        if(i % 2 == 0)
        {
            even_sum = even_sum + i;
        }
    }
    cout << "sum of all even numbers is : "<< even_sum << endl;

    for(int i=1; i<=num; i++)
    {
        if(i % 2 != 0)
        {
            odd_sum = odd_sum + i;
        }
    }
    cout << "sum of all even numbers is : "<< odd_sum << endl;

}
