//Operator Overloading Using friend Function (-)

#include<iostream.h>
#include<conio.h>
class unary
{
  private:
	 int a,b,c;
  public:
	void get();
	void show();
	unary friend operator-(unary &x);//declaration
};
void unary::get()
{
   cout<<"Enter Value of a :-"<<endl;
   cin>>a;
   cout<<"Enter Value of b :-"<<endl;
   cin>>b;
   cout<<"Enter Value of c :-"<<endl;
   cin>>c;
}
unary operator-(unary &x) //defination
{
 x.a=-x.a;
 x.b=-x.b;
 x.c=-x.c;
}
void unary::show()
{
  cout<<"a=   "<<a<<endl;
  cout<<"b=   "<<b<<endl;
  cout<<"c=   "<<c<<endl;
}
void main()
{
 clrscr();
 unary u;
 u.get();
 -u;
 u.show();
 getch();
}
