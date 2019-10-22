#include<iostream.h>
#include<conio.h>
template<class T>
T sum(T a,T b)
{
return(a+b);
}
int main()
{
clrscr();
int a=10,b=20,c;
long k=11,l=22,m;
c=sum(a,b);
cout<<"Sum of integers" <<c;
m=sum(k,l);
cout<<"Sum of long values"<<m;
getch();
return 0;
}
