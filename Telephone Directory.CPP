//Downloaded From www.c4cpp.co.nr
//(C)2009.All rights reserved.
#include<iostream.h>
#include<conio.h>

struct name
{char first[50],mid[50],last[50];};

struct phone
{char area[50],exch[50];
long no;};

class rec
{name n;
phone p;
public :
void reci();
void disp();
};

void rec::reci()
{
clrscr();
cout<<"Enter First Name   :";
cin>>n.first;
cout<<endl;
cout<<"Enter Mid Name   :";
cin>>n.mid;
cout<<endl;
cout<<"Enter Last Name   :";
cin>>n.last;
cout<<endl;
cout<<"Enter Area :";
cin>>p.area;
cout<<endl;
cout<<"Enter Exchange :";
cin>>p.exch;
cout<<endl;
cout<<"Enter No :";
cin>>p.no;
}

void rec::disp()
{
clrscr();
cout<<endl;
cout<<endl;
cout<<"First Name   :";
cout<<n.first;
cout<<endl;
cout<<endl;
cout<<"Mid Name   :";
cout<<n.mid;
cout<<endl;
cout<<endl;
cout<<"Last Name   :";
cout<<n.last;
cout<<endl;
cout<<endl;
cout<<"Area :";
cout<<p.area;
cout<<endl;
cout<<endl;
cout<<"Exchange :";
cout<<p.exch;
cout<<endl;
cout<<endl;
cout<<"No :";
cout<<p.no;
cout<<endl;
cout<<endl;
getch();
}
void main()
{
rec t;
t.reci();
t.disp();
getch();
}


