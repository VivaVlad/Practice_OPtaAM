#include<iostream.h>
#include<fstream.h>
void Create_FiLe()
{
setlocale(LC_ALL,"Russian");
ofstream vlad("vlad.doc");
srand(time(0));
    int n;
    cin>>n;
    int k;
    cin>>k;

int *a=new int[n];
for(int i=0;i<n;i++)
        a[i]=rand()%10+1;
vlad<<"Усi числа:\n";
cout<<"Усi числа:\n";
for(int i=0;i<n;i++)
    {cout<<a[i]<<" ";
    vlad<<a[i]<<" ";
    }
vlad<<"\n";cout<<"\n";
vlad<<"Числа, якi не дiляться на k: \n";
cout<<"Числа, якi не дiляться на k: \n";

for(int i=0;i<n;i++)
    {if(a[i]%k!=0)
    {vlad<<a[i]<<" ";
    cout<<a[i]<<" ";
    }}
cout<<endl;
vlad.close();
}


void Read_FiLe()
{
    ifstream viva("vlad.doc"); 
    char b[100];int k=0;
    while(!viva.eof())
    {for(int i=0;i<100; i++)
    { if(viva.get(b[i]))
    k++;}}
    viva.close();
    ofstream vlad("result.doc");
    for(int i=0;i<k;i++)
    vlad<<b[i];
    vlad.close();
}
main()
{
Create_FiLe();
Read_FiLe();
system("pause");

}
