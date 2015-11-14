# include <iostream>
# include <conio.h>
# include <math.h>

using namespace std;

void funktions_12 (double a,double b,double h)
{for(double x=a;x<b;x=x+h)
{if (x==3)
cout<<"Дiлення на нуль";
else 
cout<<(fabs(3*x-cos(x))/((x*x)-9))<<" ";
}
}
int main ()
{
double h,a,b;
setlocale(LC_ALL,"Russian");
if(cin)
{cout<<"Введiть число а=";
cin>>a;}
if(cin)
{cout<<"Введiть число b=";
cin>>b;}
if(cin)
{cout<<"Введiть число h=";
cin>>h;}
if(!cin)
cout<<"Неправильно введенi данi\n";
else
{cout<<"Вiдповiдь-->\n";
funktions_12(a,b,h);}
getch ();
return 0;    
}

