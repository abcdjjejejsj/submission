//hospital management system
#include<iostream>
using namespace std;
class person
{
    public:
    string name;
    int age,id;
    void accept()
    {
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
        cout<<"Enter ID:";
        cin>>id;
    }
    void display()
    {
        cout<<"\t"<<name<<"\t"<<age<<"\t"<<id;
    }
};
class doctor:virtual public person
{
    public:
    string spec;
    void acceptD()
    {
        accept();
        cout<<"Enter specialization:";
        cin>>spec;
    }
    void displayD()
    {
        display();
        cout<<"\t"<<spec<<endl;
    }
};

class nurse:virtual public person
{
    public:
    int ex;
    string shift;
    void acceptN()
    {
        accept();
        cout<<"Enter experience(no.of years):";
        cin>>ex;
        cout<<"Enter shift(day/night):";
        cin>>shift;
    }
    void displayN()
    {
        display();
        cout<<"\t"<<ex<<" yrs \t\t"<<shift<<endl;
    }
};
class staff:virtual public person
{

};
int main()
{
    class doctor d[10];
    class nurse n[10];
    string nme;
    int ch,countD=0,countN=0,i,flag=0;
    do{
        cout<<"1.Add doctor\t2.Add Nurse\t3.Search doctor\t4.Search Nurse\t5.Display Doctors\t6.Display nurse\t7.Exit\nEntrer choice:";
        cin>>ch;
        switch(ch)
        {
            case 1:d[countD].acceptD();
            countD++;
            break;
            case 2:n[countN].acceptN();
            countN++;
            break;
            case 3:cout<<"Enter name of doctor for search:";
                   cin>>nme;
                   for(i=0;i<countD;i++)
                   {
                    if(d[i].name==nme)
                    {
                        flag=1;
                        break;
                    }
                   }
                   if(flag==1)
                   {
                    cout<<"Doctor is present"<<endl;
                    d[i].displayD();
                   }else{
                    cout<<"Doctor is NOT present"<<endl;
                   }
                   flag=0;
                   break;
            case 4:cout<<"Enter name of nurse for search:";
                   cin>>nme;
                   for(i=0;i<countD;i++)
                   {
                    if(n[i].name==nme)
                    {
                        flag=1;
                        break;
                    }
                   }
                   if(flag==1)
                   {
                    cout<<"Nurse is present"<<endl;
                    n[i].displayN();
                   }else{
                    cout<<"Nurse is NOT present"<<endl;
                   }
                   flag=0;
                   break;

            case 5://display
                cout<<"Sr.no\tName\tAge\tID\tspecialization"<<endl;
                   for(i=0;i<countD;i++)
                   {
                    cout<<i+1;
                    d[i].displayD();
                   }
                   break;

            case 6://display
                   cout<<"Sr.no\tName\tAge\tID\texperience\tshift"<<endl;
                   for(i=0;i<countN;i++)
                   {
                    cout<<i+1;
                    n[i].displayN();
                   }
                   break;
        }
    }while(ch!=7);
}
