//function overloading
#include<iostream>
using namespace std;
void add(int a,int b)
{
    cout<<"add="<<a+b<<endl;
}
void add(double a,double b)
{
    cout<<"addii="<<a+b<<endl;
}
void add(int a,int b,int c)
{
    cout<<"addition="<<a+b+c<<endl;
}
int main()
{
    add(2,3);
    add(2.2,3.3);
    add(1,2,3);
    return 0;
}