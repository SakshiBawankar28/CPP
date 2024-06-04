// 7. Accept a lowercase character from the user and check whether the character is a vowel or consonant. (Hint: a, e, i, o, u are vowels)

#include<iostream>
using namespace std;

int main() 
{
    char ch;
    cout << "Enter the lowercase character : ";
    cin >> ch;
    if(ch=='a'  ||  ch=='e'  ||  ch=='i'  ||  ch=='o' ||  ch=='u')
    {
        cout << "Given lowercase character is a vowels "<<endl;
    }
    else
    {
        cout << "Given lowercase character is not vowels "<<endl;
    }

    return 0;
}