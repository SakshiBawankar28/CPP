// 6. Accept two numbers and calculate GCD of them.

#include <iostream>
using namespace std;

int main()
{
  int n1, n2, gcd;
  cout << "Enter the two numbers : ";
  cin >> n1 >> n2;
  for (int i = 1; i <= n1 && i <= n2; ++i)
  {
    if (n1 % i == 0 && n2 % i == 0)
    {
      gcd = i;
    }
  }

  cout << "GCD = " << gcd;
}