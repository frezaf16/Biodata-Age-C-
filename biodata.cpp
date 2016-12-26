#include<conio.h>
#include<iostream.h>
main() {
clrscr();
char name[20], address[20];
int year, age;
cout<<"=============Program Bodata==============\n";
cout<<"Input name    : "; cin>>name;
cout<<"Input address  : "; cin>>address;
cout<<"year of birth     : "; cin>>year;
cout<<"=========================================\n\n";
age=2016-year;
cout<<"Your name is      : "<<name<<"\n";
cout<<"Your address is    : "<<address<<"\n";
cout<<"Age You Are      : "<<age<<"\n\n";
cout<<"Press Enter To Return To Menu";
getch();
}
