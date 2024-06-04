// 8. Write a  program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;

int main()
{
    int a,b,c,sum;
    cout << "Enter the angles of a tringle : ";
    cin >> a >> b>> c;
    sum = a+b+c;
    if(sum <= 180)
    {
        cout << "Triangle is valid" << endl;
    }
    else
    {
        cout << "Triangle is not valid" << endl;
    }

}