#include <iostream.h>
main()
{ setlocale(LC_ALL,"Russian");
long int i,j,m,n,b;
long int k[n];
 
cout<<"Сума-> ";
cin>>m;
cout<<"Кiлькiсть номiналiв-> ";
cin>>n;
cout<<"Введiть масив K :\n";
for (int i=0;i<n;i++)
cin>>k[i];

 
 for (int i=0; i<n;i++)
{for (int j=0; j<n-1;j++)
if (k[j]<k[j+1])
  {b=k[j];
  k[j]=k[j+1];
  k[j+1]=b;
}}
 
for (int i=0; i<n;i++)
{cout<<"Номiнал-->"<<k[i]<<" у.е. кiлькiсть-->" <<m/k[i]<<endl;
m=m %k[i];
}
system("pause");}
