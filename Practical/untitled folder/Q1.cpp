#include<iostream>
using namespace std;
main()
{
int i=0,j=0,f=0,s,n,m,c;
char s1[100],s2[100];
cout<<"PRESS 1 TO FIND LENGTH OF STRING"<<endl;
cout<<"PRESS 2 TO COMPARE STRING"<<endl;
cout<<"PRESS 3 TO CONCATENATE TWO STRINGS"<<endl;
cout<<"PRESS 4 TO CHECK IF STRING IS PALINDROM OR NOT LENGTH OF STRING"<<endl;
cout<<"PRESS 0 TO EXIT"<<endl;
cin>>s;
cout<<endl;
while(s!=0)
{
if(s==1)
  {
    cout<<"ENTER THE STRING ELEMENTS = ";
    cin>>s1;
    for(i=0;s1[i]!= '\0';i++)
      {
       n=i+1;
      }
    cout<<"THE LENGTH OF THE STRING IS = "<<n;
     break;

   }
if(s==2)
    {
    cout<<"ENTER ELEMENTS OF STRING 1 = ";
    cin>>s1;
    cout<<"ENTER ELEMENTS OF STRING 2 = ";
    cin>>s2;
    for(i=0;s1[i]!='\0';i++)
    {
        n=i+1;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        m=i+1;
    }
    if(n!=m)
    {
        cout<<"STRINGS ARE NOT EQUAL";
    }
    else
        for(i=0;i<n;i++)
           {
            if(s1[i]!=s2[i])
              {
               f=0;
               break;
              }

           else f++;
           }
    if(f!=0)
       cout<<"STRINGS ARE EQUAL";

    else
       cout<<"STRINGS ARE NOT EQUAL";
      break;
    }

 if(s==3)
    {
    cout<<"ENTER ELEMENTS OF STRING 1 = ";
    cin>>s1;
    cout<<"ENTER ELEMENTS OF STRING 2 = ";
    cin>>s2;
    cout<<endl;
    for(i=0;s1[i]!='\0';i++)
    {
        n=i+1;
    }
    for(i=0;s2[i]!='\0';i++)
    {
        m=i+1;
    }
    j=0;
    for(i=n;i<n+m;i++)
      {
      s1[i]=s2[j];
      j++;
      }
      s2[i]='\0';
      cout<<"CONCATENATED VALUE IS = "<<s2<<endl;
      cout<<"CONCATENATED STRING IS = "<<s1;
      break;
    }

    if(s==4)
    {
        cout<<"ENTER THE STRING ELEMENTS = ";
        cin>>s1;
        for(i=0;s1[i]!='\0';i++)
             {
                 n=i+1;
             }
           for(i=0;i<n/2;i++)
           {
               for(j=0;j<n;j--)
               {
                 if(s1[i]!=s1[j])
                   {
                    c=0;
                    break;
                   }
                 else c++;
               }

            if(c!=0)
                {
                    cout<<"PALINDROM"<<endl;
                }
            else
               {
                   cout<<"NOT A PALINDROM"<<endl;
               }
       }
    }

}}

