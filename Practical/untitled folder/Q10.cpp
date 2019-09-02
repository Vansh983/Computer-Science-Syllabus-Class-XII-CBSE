#include<iostream>
#include<fstream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
main()
{
char a[1000],b[1000],d[1000];
int i,j=0,k=0,l=0,c,z,p=0;
fstream afile;
fstream bfile;
afile.open("ab.txt",ios::out);
cout<<"Enter the text";
cin>>a;
afile<<a;
afile.close();

 cout<<endl;
 while(z!=0)
 {
 cout<<"Enter your choice\n";
 cout<<"0) to exit"<<endl;
 cout<<"1) to count the no. of vowels and digits"<<endl;
 cout<<"2) to replace spaces with #"<<endl;
 cin>>z;
 if(z==1)
 {
 afile.open("ab.txt",ios::in);
 while(afile)
 {
 afile.getline(b,100,'.');
 c=strlen(b);
 for(i=0;b[i]!='.'&&i<c;i++)
 {
 if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='A'||b[i]=='E'||b[i]=='I'||b[i]=='O'||b[i]=='U')
 j++;
 else
 if(isdigit(b[i]))
 k++;
 else
 if(b[i]==' ')
 p++;
 }
}
 afile.close();
 cout<<"no. of vowels ="<<j<<endl<<"no. of digits="<<k<<"no. of words="<<l+2;
 }

 if(z==2)
 {
 afile.open("ab.txt",ios::in);
 while(afile)
 {

 afile.getline(d,100,'.');
 c=strlen(d);
 for(i=0;i<c&&d[i]!='.';i++)
 {
 if(d[i]==' ')
 d[i]='#';
 }
 bfile.open("c.txt",ios::out);
 bfile<<d;
 bfile.close();

 }
 afile.close();

}

}

}
