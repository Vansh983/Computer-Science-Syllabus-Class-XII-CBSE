  #include<fstream>
  #include<iostream>
  #include<string.h>
  using namespace std;
  main()
  {
  fstream afile;
  char a[100];
  int x=0,i=0,j=0,c,t=1;
  afile.open("b.txt",ios::in);
 while(t!=0)
 {
 cout<<"Enter your choice\n0) Exit\n 1)count the word 'the' in text file\n2)display all lines starting
with vowel, Press 0 to exit - ";
 cin>>t;
 cout<<endl;
 {
 if(t==1)
 {
 while(afile)
 {
 afile.getline(a,100,' ');
 if(strcmp(a,"the")==0)
 {
 x++;
 }
 }
 cout<<"Number of times 'the' occurs - "<<x<<endl;
 }
 if(t==2)
 {
 cout<<"Lines starting with vowels are : "<<endl;
 while(afile)
 {
 afile.getline(a,100);
 if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a
[i]=='O'||a[i]=='U')
 {
 for(j=0;j!='.';j++)
 {
 cout<<a[j];
 }
cout<<endl;
 }
 }
 }
 }
 afile.close()
}
