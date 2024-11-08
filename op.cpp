//operator overloading for unary operator:-   ++    --
//++ by using member function
//-- by using friend function
#include<iostream>
using namespace std;
class unary
{
    public:
    int a,b;
    unary(int m,int n)
    {
        a=m;
        b=n;
    }
    void operator ++()
    {
        a+=2;
        b+=3;
    }
    void display()
    {
        cout<<"a="<<a<<"\tb="<<b<<endl;
    }
    friend void operator --(unary&);
};

void operator --(unary&s)
{
    s.a-=2;
    s.b-=3;
}
int main()
{
    class unary u(2,3);
    //++ overloading
    cout<<"original values:"<<endl;
    u.display();
    ++u; //calling overloaded operator
    cout<<"values after increament overloading:"<<endl;
    u.display();
    --u;
    cout<<"values after decreament overloading:"<<endl;
    u.display();
    
}
