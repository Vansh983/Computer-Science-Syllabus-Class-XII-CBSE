#include<iostream>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
using namespace std;
main()
{
    fstream afile,temp;
    int c,vow,con,dig,i,x;
    char ch[100],b[10000],d[1000],e[10000],z[100000];
    afile.open("a.txt",ios::out);
    cout<<"Enter the text to add to the file\n";
    cin.getline(b,10000);
    afile<<b;
    afile.close();
    cout<<"Press:\n(0)To exit the program\n(1)Count Vowels, Digits and Words\n(2)Create a # Backup File\n(3)Dump File\n";
    cin>>c;
    while(c!=0)
    {
        if(c==1)
        {
            vow = 0; dig = 0; con = 0;
            afile.open("a.txt",ios::in);
            while(afile)
            {
                if(!afile)
                {break;}
                afile.getline(d,1000,' ');
                x = strlen(d);
                for(i=0;i<x;i++)
                {
                    if(!isalnum(d[i]))
                    {}
                    else if(isdigit(d[i]))
                        {dig++;}
                    else if(d[i]=='A'||d[i]=='E'||d[i]=='I'||d[i]=='O'||d[i]=='U'||d[i]=='a'||d[i]=='e'||d[i]=='i'||d[i]=='o'||d[i]=='u')
                        {vow++;}
                    else
                        {con++;}
                }

            }
            afile.close();
            system("cls");
            cout<<"Digits: "<<dig<<endl<<"Consonants: "<<con<<endl<<"Vowels: "<<vow<<endl;
            getch();
        }
        if(c==2)
        {
            afile.open("a.txt",ios::in);
            temp.open("temp.txt",ios::out);
            while(afile)
            {
                if(!afile){break;}
                afile.getline(e,10000,' ');
                temp<<e;
                temp<<"#";
            }
            afile.close();
            temp.close();
            afile.open("a.txt",ios::out);
            temp.open("temp.txt",ios::in);
            while(temp)
            {
                if(!temp){break;}
                temp.getline(e,10000,'#');
                afile<<e;
                afile<<"#";
            }
            afile.close();
            temp.close();
        }
        if(c==3)
        {
            system("cls");
            afile.open("a.txt",ios::in);
            afile.getline(z,100000);
            cout<<z;
            afile.close();
        }
        cout<<endl;
        cout<<"Press:\n(0)To exit the program\n(1)Count Vowels, Digits and Words\n(2)Create a # Backup File\n(3)Dump File\n";
        cin>>c;


    }
}
