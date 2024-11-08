//bank database
#include<iostream>
using namespace std;
class bank{  //declaring class 
    public:
    string name;
    int ac,bal,wa,da;
    void info()  //accepting basic details 
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter account number:";
        cin>>ac;
        cout<<"\nEnter Balance:";
        cin>>bal;
    }
    void deposite()  //function for depositing the  money
    {
        cout<<"Enter the amount for deposite:";
        cin>>da;
        bal+=da;
        cout<<da<<"Rs deposited successfully !\n";
        cout<<"Balance:"<<bal<<"Rs"<<endl;
    }
    void withdraw()  //function for withdrawing money
    {
        cout<<"Enter the amout for withdraw:";
        cin>>wa;
        if(wa<=bal)
        {
            cout<<wa<<"Rs withdrawl successfully !\n";
            bal-=wa;
            cout<<"Balance:"<<bal<<"Rs"<<endl;
        }else{
            cout<<"\nYour balance is low !\n";
        }
    }
    void display()
    {
      cout<<"name\tAccount number\tBalance\n";
    }
};
int main()
{
    class bank b[10];
    int ch,count=0,nch,i,flag=0,pos,temp_ac;
    string nme;
    do{
        cout<<"1.Add user\t2.Deposite\t3.Withdraw\t4.Display\t5.Exit\nEnter choice:";
        cin>>ch;
        switch(ch)
        {
            case 1://basic information
                    b[count].info();
                    count++;
                    break;
            case 2://deposite
                    cout<<"Search by 1.Name\t2.Account number\nEnter choice:";
                    cin>>nch;
                    switch(nch)
                    {
                        case 1://by name
                                cout<<"Enter Name:";
                                cin>>nme;
                                for(i=0;i<count;i++)
                                {
                                    if(b[i].name==nme)
                                    {
                                        flag=1;
                                        pos=i;
                                        break;
                                    }
                                }
                                if(flag==1)
                                {
                                    b[pos].deposite();
                                }
                                else{
                                    cout<<"Account Doesn't Exist !";
                                }
                                flag=0;
                                break;
                        case 2://by account number
                               cout<<"Enter account number:";
                               cin>>temp_ac;
                               for(i=0;i<count;i++)
                               {
                                if(b[i].ac==temp_ac)
                                {
                                    flag=1;
                                    pos=i;
                                    break;
                                }
                               }
                               if(flag==1)
                               {
                                b[pos].deposite();
                               }else{
                                cout<<"Account Doesn't Exist !";
                               }
                               break;
                    }
                    break;
            case 3://Withdraw
                    cout<<"Search by 1.Name\t2.Account number\nEnter choice:";
                    cin>>nch;
                    switch(nch)
                    {
                        case 1://by name
                                cout<<"Enter Name:";
                                cin>>nme;
                                for(i=0;i<count;i++)
                                {
                                    if(b[i].name==nme)
                                    {
                                        flag=1;
                                        pos=i;
                                        break;
                                    }
                                }
                                if(flag==1)
                                {
                                    b[pos].withdraw();
                                }
                                else{
                                    cout<<"Account Doesn't Exist !";
                                }
                                flag=0;
                                break;
                        case 2://by account number
                               cout<<"Enter account number:";
                               cin>>temp_ac;
                               for(i=0;i<count;i++)
                               {
                                if(b[i].ac==temp_ac)
                                {
                                    flag=1;
                                    pos=i;
                                    break;
                                }
                               }
                               if(flag==1)
                               {
                                b[pos].withdraw();
                               }else{
                                cout<<"Account Doesn't Exist !";
                               }
                               break;
                    }
                    break;
            case 4://display()
                    cout<<"Name\tAccount number\tBalance\n";
                    for(i=0;i<count;i++)
                    {
                        cout<<b[i].name<<"\t"<<b[i].ac<<"\t"<<b[i].bal<<endl;
                    }
                                
                    break;
            case 5://exit
                    break;
        }
    }while(ch!=5);
    return 0;
}