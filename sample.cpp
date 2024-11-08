#include<iostream>
using namespace std;
template <class T,int s>
class A{
    public:
    T a[s];
    void getdata()
    {
         int i;
        cout<<"Enter elements of an array:"<<endl;
        for(i=0;i<s;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
    }
    void display()
    {
         int i;
        for(i=0;i<s;i++)
        {
            cout<<"a["<<i<<"]="<<a[i]<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    int size;
    cout<<"Enter size:";
    cin>>size;
    A<int,3>a1[size];
    for(int j=0;j<size;j++)
    {
    a1[j].getdata();
    }
    for(int j=0;j<size;j++)
    {
        cout<<"a1["<<j<<"]="<<endl;
    a1[j].display();
    }
    
    return 0;
}