/*Мається типізований файл, елементами якого є окремі символи.
а) З'ясувати, чи є перші два символи цифрами. Якщо так, то встановити, чи є число, утворене цими цифрами, парних.
б) Знайти число входжень в файл кожної з букв "а", "О" і "у".
в) Знайти число входжень в файл поєднання двох "сусідніх "Букв" н "і" е ".
г) З'ясувати, чи утворюють "сусідні" символи файлу буквосполучення "Ура".*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cctype>
#include <conio.h>
using namespace std;
char s[1000];
 int a=0,ne=0,o=0,y=0;
void smurfik (void) 
{
 for (int i=0;i<2;i++)
 {
     if ((s[i]>=48)&&(s[i]<=57))
     if (s[i]%2==0)
 cout<<"chislo"<<endl; 
      else if (s[i]%2==1)   
 cout<<"parne chislo"<<endl;  
 }   
     for (int i=0;i<strlen(s);i++)
     {
        if (s[i]==-32)
        a++;
        if (s[i]==-18) 
        o++;
        if (s[i]==-13)
        y++;
        if ((s[i]==-19)&&(s[i+1]==-27))
        ne++;
     }
}

int main()
{
 setlocale(0,"rus");
  ifstream ifs("data.txt",ios::in);
  if (!ifs) cout<<"File not";
  while (!ifs.eof())
  ifs.getline(s,1000);           
 smurfik();
  cout<<s<<endl;
  cout<<"a - "<<a<<endl<<"o - "<<o<<endl<<"y - "<<y<<endl<<"ne - "<<ne<<endl;
  system("pause");
    getch();
    return 0;
}


