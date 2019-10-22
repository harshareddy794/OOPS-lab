#include<iostream.h>
#include<conio.h>
class A
{public:
int img,rel;
void get()
{
cout<<"Enter imaginary part"<<endl;
cin>>img;
cout<<"Enter real part"<<endl;
cin>>rel;
}
A operator + (A ob)
{ A obj;
obj.img=img+ob.img;
obj.rel=rel+ob.rel;
return(obj);
}
void dis()
{
cout<<rel<<"+i"<<img<<endl;
}
};
void main()
{
clrscr();
A ob1,ob2,res;
ob1.get();
ob2.get();
res=ob1+ob2;
res.dis();
getch();
}
