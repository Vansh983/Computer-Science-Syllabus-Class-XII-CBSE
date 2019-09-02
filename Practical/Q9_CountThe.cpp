#include<iostream>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>
using namespace std;

main()
{
    fstream afile;
    char ch[1000],b[10000];
    int a=0,c=9,ffa;
    afile.open("a.txt",ios::out|ios::app);
    cout<<"Enter the text to add to the file\n";
    cin.getline(b,10000);
    afile<<b;
    afile.close();
    cout<<"Press:\n(0)To exit the program\n(1)Print lines starting with vowels\n(2)Count the number of 'The'\n";
    cin>>c;
    while(c!=0)
    {
        if(c==1)
        {
            afile.open("a.txt",ios::in);
            
            ffa = 0;

            system("cls");

            while(afile)
            {
                afile.getline(ch,1000,'.');
                if((ch[0]=='A')||(ch[0]=='E')||(ch[0]=='I')||(ch[0]=='O')||(ch[0]=='U'))
                {
                    cout<<ch<<endl;
                    ffa = 1;
                }
                if((ch[1]=='A')||(ch[1]=='E')||(ch[1]=='I')||(ch[1]=='O')||(ch[1]=='U'))
                {
                    cout<<ch<<endl;
                    ffa = 1;
                }
            }
            cout<<endl;
            if(ffa == 0)
            {
                cout<<"-----No line found-----\n\n";         }
            afile.close();
        }
        if(c==2)
        {
            afile.open("a.txt",ios::in);
            while(afile)
            {
                afile.getline(ch,1000,' ');
                if((ch[0]=='T')||(ch[0]=='t'))
                    if((ch[1]=='H')||(ch[1]=='h'))
                        if((ch[2]=='E')||(ch[2]=='e'))
                            if(!isalnum(ch[3]))
                                ++a;

            }
            system("cls");
            cout<<a<<endl<<endl;
            a = 0;
            afile.close();
        }
        cout<<"Press:\n(0)To exit the program"<<endl<<"(1)Print lines starting with vowels"<<endl<<"(2)Count the number of 'The'"<<endl;
        cin>>c;
    }
};
