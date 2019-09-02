#include<iostream>
#include<fstream>
#include<iomanip>
#include<string.h>
using namespace std;
class blood{
char name[30],bg;
int add;

public:
void enter()
{
    cout<<"ENTER NAME = ";
    cin>>name;
    cout<<endl;

    cout<<"ENTER BLOOD GROUP = ";
    cin>>bg;
    cout<<endl;

    cout<<"ENTER ADDRESS = ";
    cin>>add;
    cout<<endl;
    cout<<endl;

}
void display()
{
    cout<<" NAME = "<<name;
    cout<<endl;

}

void tb()
{
    cout<<"NAME"<<setw(15)<<"BLOOD GRP."<<endl;
    cout<<name<<setw(15)<<bg<<endl;
}

char grp()
{
    return bg;
}
};
main()
{
blood b;
int s,n,i = 0 ;
char x;
fstream a;

cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO SEARCH"<<endl<<"PRESS 3 TO DISPLAY"<<endl;
cin>>s;
cout<<endl;
while(s!=0)
{

if(s==1)
{
cout<<"ENTER THE NUMBER OF DONORS = ";
cin>>n;
a.open("pro.txt",ios::out);
for(i=0;i<n;i++)
{
        b.enter();
        a.write((char*)&b,sizeof(blood));

}
a.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO SEARCH"<<endl<<"PRESS 3 TO DISPLAY"<<endl;
cin>>s;
}

if(s==2)
{
    cout<<"ENTER THE BLOOD GROUP = ";
    cin>>x;
    a.open("pro.txt",ios::in);
    while(a)
    {
        a.read((char*)&b,sizeof(blood));
        if(strcmp(b.grp(),x)==0)
        {
        b.display();
        }
        break;
    }
    a.close();
cout<<"PRESS 1 TO ENTER"<<endl<<"PRESS 2 TO SEARCH"<<endl<<"PRESS 3 TO DISPLAY"<<endl;
cin>>s;
}
}

}
