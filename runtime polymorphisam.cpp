#include<conio.h>
#include<iostream.h>
class base
{
public:
virtual void display()
{
cout<<"display function";
}
};
class swap:public base
{
int a,b,c;
public:
void get()
{
cout<<"enter two values a and b";
cin>>a>>b;
}
void display()
{
cout<<"values before swapping";
cout<<"a="<<a<<"b="<<b;
c=a;
a=b;
b=c;
cout<<"values after swapping";
cout<<"a="<<a<<"b="<<b;
}
};
void main()
{
base *ob;
swap j;
ob=&j;
j.get();
ob -> display();
getch();
}



