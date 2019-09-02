#include<iostream>
#include<fstream>
using namespace std;
class tele{
char name[30];
int add , ph;
public:
void enter()
{
cout<<"ENTER NAME = ";
cin>>name;
cout<<endl;

cout<<"ENTER ADDRESS = ";
cin>>add;
cout<<endl;

cout<<"ENTER PHONE NUMBER = ";
cin>>ph;
cout<<endl;
cout<<endl;
}

void display()
{
cout<<"NAME = "<<name<<endl;
cout<<"ADDRESS = "<<add<<endl;
cout<<"PHONE NO. = "<<ph<<endl;
}

int ret()
{
    return ph;
}
};
main()
{
tele t;
int i=0,n,s,x;
fstream a , m;

cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 0 TO EXIT "<<endl;
cin>>s;
while(s!=0)
{
if(s==1)
{
cout<<"ENTER NUMBER OF RECORDS = ";
cin>>n;
a.open("x.txt",ios::out);
for(i=0;i<n;i++)
{
t.enter();
a.write((char*)&t,sizeof(tele));
}
a.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 0 TO EXIT "<<endl;
cin>>s;
}
if(s==2)
{
 cout<<"ENTER THE MOBILE NUMBER FOR WHICH DETAILS ARE REQUIRED = ";
 cin>>x ;
 a.open("x.txt",ios::in);
 while(a)
 {
     a.read((char*)&t,sizeof(tele));
     if(x==t.ret())
     {

         t.display();

     }
 }
 a.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 0 TO EXIT "<<endl;
cin>>s;
}
}
}
