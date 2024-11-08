//static member function
#include<iostream>
using namespace std;
class sample
{
    public:
    static int count;
    static void show()
    {
        count++;
    }
    void display()
    {
        cout<<"Count="<<count<<endl;
    }

};
int sample::count=0;
int main()
{
    class sample s,t,d;
    s.display();
    sample::show();
    s.display();
    sample::show();
    t.display();
}