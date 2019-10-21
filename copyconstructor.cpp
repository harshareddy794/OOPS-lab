#include<iostream.h>
#include<conio.h>
class A
{int x,y;
public:
A(int x1,int y1)
{
x=x1;
y=y1;
cout<<"Normal"<<x<<y;
}
A(const A &ob)
{
x=ob.x;
y=ob.y;
cout<<"Copy constructor"<<x<<y;
}
};
void main()
{
clrscr();
A obj(10,20);
A o= obj;
getch();
}
