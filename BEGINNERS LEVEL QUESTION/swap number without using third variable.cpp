#include<iostream>
using namespace std;
int main()
{
    int a , b ;
    cout<<"Enter a = ";cin>>a;
    cout<<"\nEnter b = ";cin>>b;
     a = a + b ;
     b = a - b;
     a = a - b;
    cout<<"\na = "<<a;
    cout<<"\nb = "<<b;
}
