#include <cmath>
#include <iostream>
#include <conio.h>

using namespace std;
 
double pryklad(double a, double b,
        double c, double d)
{
if(!cin)
return 0;
else  return (sqrt (a/b)+sqrt(c/d)-sqrt((a*b)/(c*d)));
}
main()
{setlocale(LC_ALL,"Russian");
double a,b,c,d; 
if(cin)
{cout<<"Введiть число а=";
cin>>a;}
if(cin)
{cout<<"Введiть число b=";
cin>>b;}
if(cin)
{cout<<"Введiть число c=";
cin>>c;}
if(cin)
{cout<<"Введiть число d=";
cin>>d;  
}
if(pryklad(a,b,c,d)==0)
cout<<"Неправильно введенi данi\n";
else
cout<<"Вiдповiдь-->"<<pryklad(a,b,c,d)<<endl; 
getch ();

}
