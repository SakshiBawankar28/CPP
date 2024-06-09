// 7:Write a program to create student class with data members rollno, marks1,mark2,mark3. Accept data (acceptInfo()) and display  using display member function. Also display total,percentage and grade.

#include<iostream>
using namespace std;

class Student
{
    private:
    int rollno, m1, m2, m3, total;
    float per;
    char grade;
    public:
    void acceptInfo()
    {
        cout<<"Enter the roll number : ";
        cin>>rollno;
        cout<<"Enter the marks of subject_1, subject_2, subject_3 : ";
        cin>>m1>>m2>>m3;
    }
    void display()
    {
        cout<<"\nStudent details : "<<endl;
        cout<<"Roll number : "<<rollno<<endl;
        cout<<"Mark of sbject 1 : "<<m1<<endl;
        cout<<"Mark of sbject 2 : "<<m2<<endl;
        cout<<"Mark of sbject 3 : "<<m3<<endl;
    }
    void calculateAndDisplay()
    {
        total = m1+m2+m3;
        cout<<"Total Marks is : "<<total<<endl;
        per = (float)total/3;
        cout<<"Percentage is : "<<per<<endl;
        if(per>=90)
        {
            cout<<"Grade A"<<endl;
        }
        else if(per>=80)
        {
            cout<<"Grade B"<<endl;
        }
        else if(per>=70)
        {
            cout<<"Grade C"<<endl;
        }
        else if(per>=60)
        {
            cout<<"Grade D"<<endl;
        }
        else
        {
            cout<<"Grade E"<<endl;
        }
        
    }
};

int main()
{
    Student s1;
    s1.acceptInfo();
    s1.display();
    s1.calculateAndDisplay();
}