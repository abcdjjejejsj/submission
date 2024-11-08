// Find Minimum number of two numbers and maximum number of two numbers using function template
#include<iostream>
using namespace std;
template <class T>
void  fmin(T a,T b)
{
    if(a<b)
    {
        cout<<a<<" is smaller"<<endl;
    }else{
        cout<<b<<" is smaller"<<endl;
    }
}
template <class T>
void  fmax(T a,T b)
{
    if(a<b)
    {
        cout<<b<<" is greater"<<endl;
    }else{
        cout<<a<<" is greater"<<endl;
    }
}
int main()
{
    fmin(2,3);
    fmax(2.2,3.3);
}