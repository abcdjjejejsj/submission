//overloading - operator using friend function
#include<iostream>
using namespace std;
class sub
{
    public:
    int a;
    sub(int m)
    {
        a=m;
    }
    void display()
    {
        cout<<"Subtraction of two numbers="<<a<<endl;
    }
    void displayA()
    {
        cout<<"a="<<a<<endl;
    }
    friend void operator -(sub&);
};
void operator -(sub &s1, sub &s2)
{
    s1.a=s1.a + s2.a;
};
int main()
{
    class sub obj1(2),obj2(4);
    cout<<"obj1:";
    obj1.displayA();
    cout<<"obj2:";
    obj2.displayA();
    obj1-obj2;
    obj1.display();
}