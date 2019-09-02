#include<iostream>
#include<fstream>
using namespace std;
class book
{
char bname[30];
int bno,price;
public:
void enter()
{
    cout<<"ENTER NAME = ";
    cin>>bname;


    cout<<"ENTER NUMBER= ";
    cin>>bno;


    cout<<"ENTER PRICE = ";
    cin>>price;
    cout<<endl;
    cout<<endl;
}

void mod()
{
    cout<<"ENTER NEW NAME = ";
    cin>>bname;


    cout<<"ENTER NEW NUMBER= ";
    cin>>bno;


    cout<<"ENTER NEW PRICE = ";
    cin>>price;
    cout<<endl;
    cout<<endl;
}
void display()
{
    cout<<" NAME = "<<bname;
    cout<<endl;

    cout<<" NUMBER = "<<bno;
    cout<<endl;

    cout<<" PRICE = "<<price;
    cout<<endl;
}
int ret()
{
    return bno;
}
};
main()
{
book b,temp;
int n,x,i=0,s;
char name;
fstream a,t;
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 3 TO SEARCH"<<endl<<"PRESS 4 TO DELETE "<<endl<<"PRESS 5 TO MODIFY"<<endl;
cin>>s;
cout<<endl;
while(s!=0)
{
if(s==1)
{
cout<<"ENTER NUMBER OF RECORDS = ";
cin>>n;
a.open("set.txt",ios::out);
for(i=0;i<n;i++)
{
    b.enter();
    a.write((char*)&b,sizeof(book));
}
a.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 3 TO SEARCH"<<endl<<"PRESS 4 TO DELETE "<<endl<<"PRESS 5 TO MODIFY"<<endl;
cin>>s;
}
if(s==2)
{
    a.open("set.txt",ios::in);
    while(a)
    {
          a.read((char*)&b,sizeof(book));
          b.display();
   }
a.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 3 TO SEARCH"<<endl<<"PRESS 4 TO DELETE "<<endl<<"PRESS 5 TO MODIFY"<<endl;
cin>>s;
}
if(s==3)
{
    cout<<"ENTER RECORD TO BE FOUND = ";
    cin>>x;
    a.open("set.txt",ios::in);
    while(a)
    {
        a.read((char*)&b,sizeof(book));
        if(x==b.ret())
        {
           b.display();
        }
    }
    a.close();

cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 3 TO SEARCH"<<endl<<"PRESS 4 TO DELETE "<<endl<<"PRESS 5 TO MODIFY"<<endl;
cin>>s;
}
if(s==4)
{
    a.open("set.txt",ios::in);
    t.open("box.txt",ios::out);
    cout<<"ENTER THE RECORD TO BE DELETED = ";
    cin>>x;
    while(a)
    {
    a.read((char*)&b,sizeof(book));
    if(x!=b.ret())
    {
        t.write((char*)&b,sizeof(book));
    }
    }
    a.close();
    t.close();
    a.open("set.txt",ios::out);
    t.open("box.txt",ios::in);
    while(t)
    {
        t.read((char*)&b,sizeof(book));
        a.write((char*)&b,sizeof(book));
    }
    a.close();
    t.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 3 TO SEARCH"<<endl<<"PRESS 4 TO DELETE "<<endl<<"PRESS 5 TO MODIFY"<<endl;
cin>>s;
}
if(s==5)
{
    cout<<"ENTER THE RECORD TO BE MODIFIED = ";
    cin>>x;
    a.open("set.txt",ios::in);
    t.open("box.txt",ios::out);
    while(a)
    {
            a.read((char*)&b,sizeof(book));
            if(x!=b.ret())
            {
                t.write((char*)&b,sizeof(book));
            }
            if(x==b.ret())
             {
                b.mod();
                t.write((char*)&b,sizeof(book));
             }

    }
    a.close();
    t.close();
    a.open("set.txt",ios::out);
    t.open("box.txt",ios::in);
    while(t)
    {
        t.read((char*)&b,sizeof(book));
        a.write((char*)&b,sizeof(book));
    }
    a.close();
    t.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO DISPLAY"<<endl<<"PRESS 3 TO SEARCH"<<endl<<"PRESS 4 TO DELETE "<<endl<<"PRESS 5 TO MODIFY"<<endl;
cin>>s;
}
}
}





