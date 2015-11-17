/*11.Дан файл, содержащий текст на русском языке. Выбрать из
него те символы, которые встречаются в нем только один раз, в
том порядке, в котором они встречаются в тексте.*/
#include<iostream.h>
#include<fstream.h>
#include<windows.h>
void Create_FiLe()
{
setlocale(LC_ALL,"Russian");
SetConsoleCP(1251);
SetConsoleOutputCP(1251);
ofstream vlad1("vlad1.txt");
    int n;
    cout<<"Введiть кiлькiсть символiв n=";
    cin>>n;
    char *a=new char[n];
    cout<<"Введiть рядок :\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    vlad1<<"Усi символи: \n";
    for(int i=0;i<n;i++)
    {vlad1<<a[i];}
    vlad1<<"\n";
    vlad1<<"Кирилиця: \n";
    for(int i=0;i<n;i++)
{for(int j=i+1;j<n;j++)
{if (a[i]==a[j])
{ a[i]=-5; 
}}}
 
ofstream fail1("Max-vidsortovanuy.txt");
    for(int i=0;i<n;i++)
    {if (a[i]==-5)
    continue;
    vlad1<<a[i]<<" "; }
    vlad1.close();
}

void Read_FiLe()
{
    ifstream viva("vlad1.txt"); 
    char b[100];int k=0;
    while(!viva.eof())
    {for(int i=0;i<100; i++)
    { if(viva.get(b[i]))
    k++;}}
    viva.close();
    ofstream vlad("result1.txt");
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
