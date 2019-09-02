#include<iostream>
#include<fstream>
using namespace std;
class student{
char name[30];
int roll , m ;

public:
void enter()
{cout<<"NAME = ";
cin>>name;
cout<<endl;
cout<<"ROLL NUMBER = ";
cin>>roll;
cout<<endl;
cout<<"TOTAL MARKS = ";
cin>>m;
cout<<endl;
}
void display()
{
    cout<<"ROLL NO. : "<<roll<<endl;
    cout<<"NAME : "<<name<<endl;
    cout<<"MARKS : "<<m<<endl;
     if(m>=96)
    {
        cout<<"COMPUTER SCIENCE";
        cout<<endl;
    }
    else if(m>=91 && m<=95)
    {
        cout<<"ELECTRONICS";
        cout<<endl;
    }
    else if(m>=86 && m<=90)
    {
        cout<<"MECHANICAL";
        cout<<endl;

    }
    else if(m>=81 && m<=85)
    {
        cout<<"ELECTRICAL";
        cout<<endl;
    }
    else if(m>=76 && m<=80)
    {
        cout<<"CHEMICAL";
        cout<<endl;
    }
    else if(m>=71 && m<=75)
    {
        cout<<"CIVIL";
        cout<<endl;
    }

}
int rt()
{
    return roll;
}
};
main()
{
    student stud;
    int num,i=0,s,n;
    fstream a;

cout<<"PRESS 1 TO ENTER DATA ";
cout<<endl;
cout<<"PRESS 2 TO PRINT STREAM ";
cout<<endl;
cout<<"PRESS 0 TO EXIT";
cout<<endl;
cout<<endl;
cin>>s;

 while(s!=0)
 {
     if(s==1)
     {
         cout<<"ENTER NUMBER OF RECORDS = ";
         cin>>n;
         a.open("star.cpp",ios::out);
         for(i=0;i<n;i++)
         {
             stud.enter();
             a.write((char*)&stud,sizeof(student));
         }
         a.close();
         cout<<"PRESS 1 TO ENTER DATA "<<endl<<"PRESS 2 TO PRINT STREAM "<<endl<<"PRESS 0 TO EXIT"<<endl<<endl;
         cin>>s;
    }

    if(s==2)
    {
        a.open("star.cpp",ios::in);
        while(a)
        {
            a.read((char*)&stud,sizeof(student));
            if(!a)
            break;
            stud.display();
        }
        a.close();
        break;
    }

 }

}

