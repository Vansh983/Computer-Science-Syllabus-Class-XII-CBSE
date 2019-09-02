#include<iostream>
using namespace std;
main()
{
    int i , j ,a[10],z=10 ,x,f=0 ;
    int mid = (f+1)/2;
    cout<<"PRESS 1 TO ENTER ARRAY "<<endl<<"PRESS 2 TO SORT ARRAY "<<endl<<"PRESS 3 TO SEARCH ELEMENT "<<endl<<"PRESS 0 TO EXIT"<<endl;
    cin>>s;
    while(s!=0)
    {
    if(s==1)
    {
        cout<<"ENTER THE ARRAY = ";
          for(i=0;i<n;i++)
          {
           cin>>a[i];
           }
           cout<<"PRESS 1 TO ENTER ARRAY "<<endl<<"PRESS 2 TO SORT ARRAY "<<endl<<"PRESS 3 TO SEARCH ELEMENT "<<endl<<"PRESS 0 TO EXIT"<<endl;
    cin>>s;
    }
    if(s==2)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n-1;j++)
            {
                if(a[j]>a[j+1])
                {
                    temp = a[j];
                    a[j] = a[j+1];
                    a[j+1]= temp;
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<"PRESS 1 TO ENTER ARRAY "<<endl<<"PRESS 2 TO SORT ARRAY "<<endl<<"PRESS 3 TO SEARCH ELEMENT "<<endl<<"PRESS 0 TO EXIT"<<endl;
    cin>>s;
    }
    if(s==3)
    {
        cout<<"ENTER THE ELEMENT TO BE SEARCHED = ";
        cin>>x;
        while(f<=z)
        {
            if(x==a[mid])
            {
                cout<<"VALUE FOUND AT POSITION = "<<mid+1;
                break;
            }
            else
                if(x>a[mid])
            {
                mid = mid + 1 ;
                f++;
            }
            else
                if(n<a[mid])
            {
                mid = mid - z;
                f++;
            }
            else
                cout<<"VALUE NOT FOUND";

       }
        }
    }
}}
