#include<iostream>
#include<fstream>
using namespace std;
class sports{

char sname[30];
int sno,fees;

public:
void enter()
{
    cout<<"ENTER NAME = ";
    cin>>sname;
    cout<<endl;

    cout<<"ENTER NUMBER = ";
    cin>>sno;
    cout<<endl;

    cout<<"ENTER FEES = ";
    cin>>fees;
    cout<<endl;
}

void display()
{
    cout<<"NAME = "<<sname<<endl;
    cout<<"NUMBER = "<<sno<<endl;
    cout<<"FEES = "<<fees<<endl;
}

int ret()
{
    return sno;
}
};
main()
{
    sports f ;
    int i = 0 , s , x , n;
    fstream a , t ;

    cout<<"PRESS 1 TO ENTER DATA "<<endl<<"PRESS 2 TO DELETE DATA "<<endl;
    cin>>s;

    while(s!=0)
    {
        if(s==1)
        {
            cout<<"ENTER THE NUMBER OF RECORDS = ";
            cin>>n;
            a.open("bro.txt",ios::out);
            for(i=0;i<n;i++)
            {
                 f.enter();
                a.write((char*)&f,sizeof(sports));

            }
            a.close();
            cout<<"PRESS 1 TO ENTER DATA "<<endl<<"PRESS 2 TO DELETE DATA "<<endl;
            cin>>s;
        }
        if(s==2)
        {
            cout<<"ENTER THE NUMBER OF THE RECORD TO BE DELETED = ";
            cin>>x;
            a.open("bro.txt",ios::in);
            t.open("pro.txt",ios::out);
            while(a)
            {
            a.read((char*)&f,sizeof(sports));
            if(x!=f.ret())
            {
            t.write((char*)&f,sizeof(sports));
            }
            }
            a.close();
            t.close();

            t.open("pro.txt",ios::in);
            a.open("bro.txt",ios::out);

            while(t)
            {
            t.read((char*)&f,sizeof(sports));
            a.write((char*)&f,sizeof(sports));

            }
            a.close();
            t.close();


            a.open("bro.txt",ios::in);
            while(a)
            {
                a.read((char*)&f,sizeof(sports));
                f.display();
            }
                a.close();
                cout<<"PRESS 1 TO ENTER DATA "<<endl<<"PRESS 2 TO DELETE DATA "<<endl;
                cin>>s;
            }


        }
    }

