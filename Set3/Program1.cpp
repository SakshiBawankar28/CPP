// 1:Write a program to create an array of integers and perform following operations on that array like finding the sum, average, maximum and minimum number in that array. Accept the numbers of the array from user. 

#include<iostream>
using namespace std;

int main()
{
    int size,sum=0,min=0,max=0;
    float average;
    cout<<"Enter the size of array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the element of array : ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nThe element of array : ";
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nSum of array : ";
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum = "<<sum;
    cout<<"\nAverage of array : ";
    average = (float)sum/size;
    cout<<average;


    for(int i=0; i<size; i++)
    {
        if(arr[i]<arr[i+1])
        {
            max = arr[i];
        }
    }
    cout<<"\nMaximum number is "<<max;
    for(int i=0; i<size; i++)
    {
        if(arr[i] > arr[i+1])
        {
            min = arr[i];
        }
    }
    cout<<"\nMinimum number is "<<min;
} 
