//bubble sort
#include<iostream>
using namespace std;
template <class T,int s>
class A{
    public:
    T a[s];
    int size;
    void getdata()
    {
         int i;
         cout<<"Enter size of an array:";
         cin>>size;
        cout<<"Enter elements of an array:"<<endl;
        for(i=0;i<size;i++)
        {
            cout<<"a["<<i<<"]=";
            cin>>a[i];
        }
    }
    void sorting()
    {
        int i,j;
        for(i=0;i<size-1;i++)
        {
            for(j=0;j<size-i-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    T temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
            }
         }
    }

    void display()
    {
         int i;
        for(i=0;i<size;i++)
        {
            cout<<"a["<<i<<"]="<<a[i]<<"\t";
        }
        cout<<endl;
    }
};
int main()
{
    A<int,4>a1;
    a1.getdata();
    a1.sorting();
    a1.display();
    return 0;
}