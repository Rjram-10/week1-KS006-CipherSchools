#include<iostream>
using namespace std;
int main()
{
    // float a,b;
    // cin>>a>>b;
    // if(a>0.01 && b>a)
    // cout<<"The condion in if statement is true"<<endl;
    // else
    // cout<<"The condition is false";
 

    // int marks;
    // cout<<"Enter the marks: ";
    // cin>>marks;
    // if(marks>=90)
    // cout<<"A";
    // else if(marks<90 && marks>=80)
    // cout<<"B";
    // else if(marks<80 && marks>=70)
    // cout<<"C";
    // else
    // cout<<"Pass"  ;


    int a;
    cout<<"Enter the number: ";
    cin>>a;
    switch (a)
    {
    case 1:
        cout<<"The value of a is 1";
        break;
    case 2:
        cout<<"The value of a is 2";
        break;
    default:
        cout<<"Invalid input!";
        break;
    } 
}
