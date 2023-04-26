#include<iostream>
using namespace std;
int c = 10;
int main()
{
    int c = 100 ;//local variable.
    cout<<"\nlocal variable c = "<<c;
    cout<<"\nglobal variable c = "<<::c;
}

