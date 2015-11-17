#include<iostream.h>
#include<fstream.h>
void Create_FiLe()
{
setlocale(LC_ALL,"Russian");
ofstream vlad("vlad2.txt");
srand(time(0));
    int n=9;
    int *a=new int[n];
for(int i=0;i<n;i++)
        a[i]=rand()%10+1;
vlad<<"”сi числа:\n";
for(int i=0;i<n;i++)
    {vlad<<a[i]<<" ";
    }
 vlad<<"\n";   
vlad.close();
}


void Read_FiLe()
{
    ifstream viva("vlad2.txt"); 
    char b[100];int k=0;
    while(!viva.eof())
    {for(int i=0;i<100; i++)
    { if(viva.get(b[i]))
    k++;}}
    for(int i=0;i<k;i++)
    cout<<b[i];
    viva.close();
      
}
main()
{
Create_FiLe();
Read_FiLe();
system("pause");

}
