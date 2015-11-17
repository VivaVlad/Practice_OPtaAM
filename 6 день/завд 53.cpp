/*Имеются два типизированных файла, элементами которых
являются отдельные буквы. Записать в третий файл
все начальные совпадающие элементы имеющихся файлов.*/
#include<iostream>
#include<fstream.h>
#include<windows.h>

using namespace std;

main()
{
    setlocale(LC_ALL,"Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
ifstream viva("zavd53(1).txt"); 
    char b[100];int k=0;
    while(!viva.eof())
    {for(int i=0;i<100; i++)
    { if(viva.get(b[i]))
    k++;}}
    viva.close();
ifstream viva1("zavd53(2).txt"); 
    char a[100];int s=0;
    while(!viva1.eof())
    {for(int i=0;i<100; i++)
    { if(viva1.get(a[i]))
    s++;}}
    viva.close();
ofstream vlad("result3.txt");
    vlad<<"Символи, якi повторяються у двох файлах: \n";
    for(int i=0;i<k;i++)
    {for(int j=0;j<s;j++)
    if(b[j]==a[i])
    {vlad<<b[j];}
    }
system("pause");

}

