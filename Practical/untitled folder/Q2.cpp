#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
struct document
{
char name[30];
char topic[30];
int page;
};
main()
{
document doc[50],temp;
int i=0,num,s,j=0;
char x[100];
cout<<"ENTER THE NUMBER OF DOCUMENTS = ";
cin>>num;
for(i=0;i<num;i++)
        {
            cout<<"ENTER NAME = ";
            cin>>doc[i].name;

            cout<<"ENTER TOPIC = ";
            cin>>doc[i].topic;

            cout<<"ENTER NUMBER OF PAGES = ";
            cin>>doc[i].page;
            cout<<endl;
        }
cout<<"PRESS 1 TO SEARCH A DOCUMENT"<<endl;
cout<<"PRESS 2 TO SORT"<<endl;
cout<<"PRESS 0 TO EXIT"<<endl;
cin>>s;
cout<<endl;
while(s!=0)
{
    if(s==1)
    {
        cout<<"ENTER THE NAME OF THE DOCUMENT TO BE SEARCHED = ";
        cin>>x;
        for(i=0;i<num;i++)
        {
          if(strcmp(x,doc[i].name)==0)
           {
             break;
           }
        }
         cout<<"NAME = "<<doc[i].name<<endl;
         cout<<"TOPIC = "<<doc[i].topic<<endl;
         cout<<"NO OF PAGES = "<<doc[i].page<<endl;
         break;
    }


    if(s==2)
    {
        for(i=0;i<num;i++)
        {
            for(j=0;j<num-1;j++)
            {
                if(doc[i].page>doc[i+1].page)
                {
                    temp = doc[i];
                    doc[i]=doc[i+1];
                    doc[i+1]=temp;
                }
            }
        }
       for(i=0;i<num;i++)
       {
           cout<<"NAME = "<<doc[i].name;cout<<endl;
           cout<<"TOPIC = "<<doc[i].topic;cout<<endl;
           cout<<"NO OF PAGES = "<<doc[i].page;cout<<endl<<endl;

       }
break;
    }


}

}
