#include <iostream>
using namespace std;
int main()
{
 long int i,j,s1,s2,t=0,L;
 int i0=0;  //
 cin>>L;
 int j0=L; // начальные значения
 s1=3; // скорость собаки
 s2=1; // скорость зайца

 i=i0; // текущие координаты
 j=j0;
 
 while(i<=j)
 {
  for(int m=i; m<i; ++m)
  cout<<"Dog="<<m<<"\t";
  for(int m=j; m<j; ++m)
  cout<<"Rabbit="<<m<<"\t";
  i=i0+s1*t;
  j=j0+s2*t;
 }
 cout<<"Dognal!!";
 system("pause");
 return EXIT_SUCCESS;
}
