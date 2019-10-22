#include<iostream.h>
#include<conio.h>
class A
{
virtual void salary()=0;
};
class B:public A
{public:
void salary()
{
int sal;
int hra,da,ta;
cout<<"Enter details of employee";
cout<<"Enter HRA DA TA\n";
cin>>hra>>da>>ta;
sal=hra+da+ta;
cout<<"Net pay:"<<sal;
}
};
void main()
{
clrscr();
B ob;
ob.salary();
getch();
}
