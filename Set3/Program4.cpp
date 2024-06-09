// 4:. Write a  program to print all Prime numbers between 1 to n.

#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number till you want prime number : ";
	cin >> n;
	cout << "Prime numbers are ";
	for (int i = 2; i <= n; i++)
	{
		for (int j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
			else if (i == j + 1)
			{
				cout << i << "  ";
			}
		}
	}
}