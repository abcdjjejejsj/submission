//overloading of binary operator: + - * /
//overloading of + operator using member function
#include<iostream>
using namespace std;
class binary
{
    public:
    int m,n;
    binary(int a)
    {
        m=a;
    }
    /* declare inside the class is also possible
    void operator +(binary &c)
    {
        n=m-c.m;
    }
    */
    void operator +(binary &c);
    void display()
    {
        cout<<"Addition of two numbers is:"<<n<<endl;
    }
};
void binary::operator +(binary &c)  //declare outside the class
{
    n=m-c.m;
}
int main()
{
    class binary obj1(4),obj2(1);
    cout<<"obj1="<<obj1.m<<endl;
     cout<<"obj2="<<obj2.m<<endl;
    obj1+obj2;
    obj1.display();
}