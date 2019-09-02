#include<iostream>
#include<iomanip>
using namespace std;
class bank{
char name[20],type;
int account,balance;

public:
void enter()
{
cout<<"ENTER NAME = ";
cin>>name;
cout<<endl;
cout<<"ENTER ACCOUNT NUMBER = ";
cin>>account;
cout<<endl;
cout<<"ENTER TYPE OF ACCOUNT = ";
cin>>type;
cout<<endl;
cout<<"ENTER CURRENT BALANCE = ";
cin>>balance;
cout<<endl;
}

void deposit(int amount)
{
balance = balance + amount;
cout<<"NEW BALANCE = "<<balance;
cout<<endl;
}
void with(int amount)
{
balance = balance - amount;
cout<<"NEW BALANCE = "<<balance;
cout<<endl;}

int ac()
{
return account;
}

void tb()
{
cout<<name<<setw(15)<<account<<setw(15)<<type<<setw(15)<<balance<<endl;
}

};
main()
{bank b[100];
int n , i = 0 ,total1,total2,amount,acc,s,m;
cout<<"ENTER THE NUMBER OF ACCOUNTS = ";
cin>>n;
for(i=0;i<n;i++)
{
b[i].enter();
}
cout<<"ENTER ACCOUNT NUMBER TO BE OPERATED = ";
cin>>acc;
for(i=0;i<n;i++)
{
  if(b[i].ac()==acc)
   {
    m=i;
    break;
   }
}
cout<<"PRESS 1 TO DEPOSIT MONEY ";
cout<<endl;
cout<<"PRESS 2 TO WITHDRAW MONEY ";
cout<<endl;
cout<<"PRESS 3 TO VIEW TABLE ";
cout<<endl;
cout<<"PRESS 0 TO EXIT";
cout<<endl;
cout<<endl;
cin>>s;
while(s!=0)
{
if(s==1)
 {

   cout<<"ENTER AMOUNT TO BE DEPOSITED = ";
   cin>>amount;
   b[m].deposit(amount);
}
  if(s==2)
  {

        cout<<"ENTER AMOUNT TO BE WITHDRAWN = ";
        cin>>amount;
        b[m].with(amount);
  }

  if(s==3)
  {
  cout<<"NAME"<<setw(15)<<"ACCOUNT NO."<<setw(15)<<"TYPE"<<setw(14)<<"BALANCE"<<endl;
    for(i=0;i<n;i++)
     {
      b[i].tb();
     } break;
  }


  }
 }
