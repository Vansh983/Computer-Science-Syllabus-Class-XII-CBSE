#include<iostream>
#include<fstream>

class directory
{
   char name[50],address[50];
   float tele;
   public:
   void enter()
   {
        std::cout<<"enter name -";
        std::cin>>name;
        std::cout<<"enter address -";
        std::cin>>address;
        std::cout<<"enter telephone number -";
        std::cin>>tele;
   }
   void display()
   {
       std::cout<<"name is - "<<name;
       std::cout<<"address is - "<<address;
   }
   float telephone()
   {
       return tele;
   }

};
main()
{   directory record;
    int i,n,g,f=0;
    char ch;
    float r;
    std::fstream afile;



    do
    {
        std::cout<<"press 1 to append records";
        std::cout<<std::endl;
        std::cout<<"press 2 to search name and address by giving telephone number";
        std::cout<<std::endl;
        std::cin>>g;

    switch(g)
    {
    case 1 :   std::cout<<"enter the number of records - ";
               std::cin>>n;
               afile.open("ofile.dat",std::ios::app|std::ios::binary);
               for(i=0;i<n;i++)
               {
               record.enter();
               afile.write((char*)&afile,sizeof(afile));
               }
               afile.close();
               break;
    case 2 : afile.open("ofile.dat",std::ios::in);
             std::cout<<"enter the telephone number you want record of - ";
             std::cin>>r;
               while(afile)
               {
                   afile.read((char*)&afile,sizeof(afile));
                   if(!afile)
                   {break;}
                   if(r==record.telephone())
                   {
                       record.display();
                       f=1;
                       break;
                   }
                   if(f=0)
                   {
                       std::cout<<"not found";
                   }
                      afile.close();
                      break;
               }


             }





std::cout<<"do you want to continue?";
std::cin>>ch;
}while(ch=='y');
}
