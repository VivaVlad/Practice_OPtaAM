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
{cout<<"����i�� ����� �=";
cin>>a;}
if(cin)
{cout<<"����i�� ����� b=";
cin>>b;}
if(cin)
{cout<<"����i�� ����� c=";
cin>>c;}
if(cin)
{cout<<"����i�� ����� d=";
cin>>d;  
}
if(pryklad(a,b,c,d)==0)
cout<<"����������� ������i ���i\n";
else
cout<<"�i����i��-->"<<pryklad(a,b,c,d)<<endl; 
getch ();

}
