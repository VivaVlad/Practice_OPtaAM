#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
 
double perimetr(double a,double b,double h)
{
return (a+b+2.0*sqrt(h*h+(a-b)*(a-b)/4.0));
}
 
int main()
{
double a1,a2,b1,b2,h1,h2,p;
cout<<"a1="; cin>>a1; cout<<a1<<endl;
cout<<"b1="; cin>>b1; cout<<b1<<endl;
cout<<"a1="; cin>>h1; cout<<h1<<endl;
cout<<"a1="; cin>>a2; cout<<a2<<endl;
cout<<"a1="; cin>>b2; cout<<b2<<endl;
cout<<"a1="; cin>>h2; cout<<h2<<endl;
cout<<"perimetr="<<perimetr(a1,b1,h1)+perimetr(a2,b2,h2);
getch ();
return 0;
}
