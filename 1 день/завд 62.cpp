/*62.	Після введення з клавіатури довільного рядка визначити його належність до того або іншого алфавіту. 
Символи, які не входять в алфавіти, не аналізувати.
Можливий третій варіант відповіді.*/
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{setlocale(LC_ALL,"Russian");
char str[255];
 cout<<"Введiть рядок: ";
cin.getline(str,255);
cout<<"Символи в латинському алфавiтi: ";
for(int i=0;i<strlen(str);i++)
{if(str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z')
{cout<<str[i]; }}
      
      getch();
      return 0;
      }

