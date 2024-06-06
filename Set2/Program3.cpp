// 3. Write a program to accept a character, an integer n and display the next n characters.

#include<iostream>
using namespace std;

int main()
{
    int n;
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    cout<<"Enter the integer to display how many character you want : ";
    cin>>n;
    cout<<"Next characters are : ";
    for(int i=1; i<=n; i++)
    {
        char nextch = ch + i;
        cout<<nextch<<"  ";
    }
}