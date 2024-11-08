//insertion(<<) and extraction(>>) operator overloading 
//refer 7.cpp
#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age;
    person()
    {
        name="";
        age=0;
    }
    person(string nme,int a)
    {
        name=nme;
        age=a;
    }
    friend istream& operator >>(istream &is,person &obj)
    {
        cout<<"Enter name:";
        is>>obj.name;
        cout<<"Enter age:";
        is>>obj.age;
        return is;
    }

    friend ostream& operator <<(ostream &os,const person &obj)
    {
        os<<"NAME:"<<obj.name<<"\tAGE:"<<obj.age;
        return os;
    }
};
int main()
{
    class person p("hello",12),p1;
    cout<<p.name<<"\t"<<p.age;
    cin>>p1;
    cout<<p1<<endl;
    return 0;
}