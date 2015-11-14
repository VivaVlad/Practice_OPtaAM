#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <stdlib.h>
#include <math.h>
 
int j, x, count, sh;
int counter1(int j, int k, int count)
{   count=0;
int y=0;
switch(k)
{ 
   case 1: y=j*1; 
   case 2: y=j*16; 
   case 3: y=j*256;
}
 count=count+y;
 return count;
 }
int main()
{ 
setlocale(LC_ALL, "Russian");
int i,z, summ;
z=0; i=0; summ=0;
char s[3]; 
char si; 
cout<<"¬ведiть чилсло в шiстнадц€тичнiй системi-->"<<" ";
cin>>s;
cout<<"\n";
i=strlen(s);
for(x=0;x<=i-1;x++)
{ 
switch(s[x])
 {
  case '0': j=0; z=counter1(j,x, count);  summ=summ+z; continue;
  case '1': j=1; z=counter1(j,x,count);  summ=summ+z; continue;
  case '2': j=2; z=counter1(j,x,count);  summ=summ+z; continue;
  case '3': j=3; z=counter1(j,x,count);  summ=summ+z; continue;
  case '4': j=4; z=counter1(j,x,count);  summ=summ+z; continue;
  case '5': j=5; z=counter1(j,x,count);  summ=summ+z; continue;
  case '6': j=6; z=counter1(j,x,count);  summ=summ+z; continue;
  case '7': j=7; z=counter1(j,x,count);  summ=summ+z; continue;
  case '8': j=8; z=counter1(j,x,count);  summ=summ+z; continue;
  case '9': j=9; z=counter1(j,x,count);  summ=summ+z; continue;
  case 'A': j=10; z=counter1(j,x,count);  summ=summ+z; continue;
  case 'B': j=11; z=counter1(j,x,count);  summ=summ+z; continue;
  case 'C': j=12; z=counter1(j,x,count);  summ=summ+z; continue;
  case 'D': j=13; z=counter1(j,x,count);  summ=summ+z; continue;
  case 'E': j=14; z=counter1(j,x,count);  summ=summ+z; continue;
  case 'F': j=15; z=counter1(j,x,count);  summ=summ+z; continue;
//summ=summ+z;
}
//z=counter1(j,x,count);
// summ=summ+z;
 }
 cout<<"¬ шiстнадц€тичнiй системi-->"<<" "<<s<<"\n";
 cout<<"¬ дес€тичнiй системi--> "<<" "<<summ-3809<<"\n";
 getch();
 return 0;
 }
