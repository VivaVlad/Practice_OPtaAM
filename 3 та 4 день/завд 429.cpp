# include <iostream>
# include <conio.h>
# include <math.h>


using namespace std;
 
int min(int *a,int n)
{int temp;
for(int i=0;i<n;i++)
{temp=a[0];
if(temp>a[i])
temp=a[i];
}
return temp;
}

int max(int *a,int n)
{int temp;
for(int i=0;i<n;i++)
{temp=a[0];
if(temp<a[i])
temp=a[i];
}
return temp;
}

main()
{setlocale(LC_ALL,"Russian");
int n,n1,n2,l,k,k1,k2,h;
cout<<"Введiть розмiр масиву а=";
cin>>n;
cout<<"Введiть елементи масиву а:\n";
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
cout<<"Введiть розмiр масиву b=";
cin>>n1;
cout<<"Введiть елементи масиву b:\n";
int b[n1];
for(int i=0;i<n1;i++)
{cin>>b[i];}
cout<<"Введiть розмiр масиву c=";
cin>>n2;
cout<<"Введiть елементи масиву c:\n";
int c[n2];
for(int i=0;i<n2;i++)
{cin>>c[i];}
k=min(a,n);cout<<"Мiнiмум серед а:"<<k<<endl;
k1=min(b,n1);cout<<"Мiнiмум серед и:"<<k1<<endl;
k2=min(c,n2);cout<<"Мiнiмум серед с:"<<k2<<endl;
h=max(c,n2);cout<<"Максимум серед с:"<<h<<endl;
if(k>10)
{l=k1+k2;}
else 
l=1+h;
cout<<"L="<<l;
getch();
}
