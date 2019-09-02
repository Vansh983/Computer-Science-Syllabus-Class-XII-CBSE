#include<iostream>
#include<string.h>
using namespace std;
class employee{
char name[30];
int salary,eno;

public:
void enter()
{
cout<<"ENTER NAME = ";
cin>>name;
cout<<endl;

cout<<"ENTER EMPLOYEE NUMBER = ";
cin>>eno;
cout<<endl;

cout<<"ENTER SALARY = ";
cin>>salary;
cout<<endl;
}

void display()
{

cout<<" NAME = "<<name;
cout<<endl;

cout<<" EMPLOYEE NUMBER = "<<eno;
cout<<endl;

cout<<" SALARY = "<<salary;
cout<<endl;

}

int sal()
{
return salary;
}

char *nam()
{
return name;
}

};
main()
{
employee emp[100], temp;
int  i = 0 , j = 0 , num ,s;
char x[100];
cout<<"ENTER NUMBER OF RECORDS = ";
cin>>num;
for(i=0;i<num;i++)
{
  emp[i].enter();
  cout<<endl;
}
cout<<"PRESS 1 TO DISPLAY RECORDS IN ASCENDING ORDER OF SALARY";
cout<<endl;
cout<<"PRESS 2 TO DISPLAY RECORDS FOR A GIVEN NAME";
cout<<endl;
cout<<"PRESS 0 TO EXIT";
cout<<endl;
cout<<endl;
cin>>s;
while(s!=0)
{
 if(s==1)
 {
 for(j=0;j<num;j++)
    {
      for(i=0;i<num-1;i++)
      {
        if(emp[i].sal()  > emp[i+1].sal())
        {
          temp = emp[i];
          emp[i] = emp[i+1];
          emp[i+1] = temp;
        }
      }
    }

    for(i=0;i<num;i++)
    {
    emp[i].display();
    }break;
 }

 if(s==2)
 {
 cout<<"ENTER NAME WHOSE RECORDS HAVE TO BE FOUND = ";
 cin>>x;
   for(i=0;i<num;i++)
   {
    if(strcmp( x,emp[i].nam() )==0 )
      {
      break;
      }
   }
 emp[i].display();
 }

}
}
