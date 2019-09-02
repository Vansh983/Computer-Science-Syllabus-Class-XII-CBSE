#include<iostream>
#include<iomanip>
using namespace std;
class library
{
int acno,price,copies,p;
char name[50],title,publisher;

public:
void enter()
{
cout<<"ENTER BOOK NO : ";
cin>>acno;
cout<<endl;

cout<<"ENTER BOOK NAME : ";
cin>>name;
cout<<endl;

cout<<"ENTER BOOK TITLE : ";
cin>>title;
cout<<endl;

cout<<"ENTER PUBLISHER : ";
cin>>publisher;
cout<<endl;

cout<<"ENTER PRICE  : ";
cin>>price;
cout<<endl;
}

int ac()
{
    return acno;
}

void modify()
{
 cout<<"ENTER AMOUNT TO BE ADDED = ";
 cin>>p;
 price = price + p;
 cout<<"NEW PRICE : "<<price;
}

void display()
{
    cout<<name<<setw(15)<<publisher<<setw(15)<<price<<endl;
}

};
main()
{
library l[100];
int i = 0 , x, s,n;

cout<<"ENTER NUMBER OF BOOKS = ";
cin>>n;
{
    for(i=0;i<n;i++)
    {
        l[i].enter();
    }
}

cout<<"PRESS 1 TO MODIFY PRICE";
cout<<endl;
cout<<"PRESS 2 TO VIEW TABLE";
cout<<endl;
cout<<"PRESS 0 TO EXIT";
cout<<endl;
cin>>s;
cout<<endl;
while(s!=0)
{
if(s==1)
    {
    cout<<"ENTER THE ACCESS NO. OF THE BOOK :";
    cin>>x;
    for(i=0;i<n;i++)
    {
        if(l[i].ac()==x)
        {
            break;
        }
    }
    l[i].modify();
     }


if(s==2)
{
    cout<<"NAME"<<setw(15)<<"AUTHOR"<<setw(15)<<"COST"<<endl;
    for(i=0;i<n;i++)
    {
        l[i].display();
    }break;
}

}

}
