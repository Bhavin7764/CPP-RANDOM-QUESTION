#include<iostream>
using namespace std;
int c =1000;
int main()
{
    int c = 10 ;
    cout<<"local var c = "<<c;
    cout<<"\nglobal var c = "<<::c;
}
