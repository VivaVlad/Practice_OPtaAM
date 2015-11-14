/*Дано натуральне число n, s1..sn. Відомо, що серед s1..sn є принаймні одна кома. Знайти такі натуральні i, що:
1) si - перша по порядку кома
2) si - подальшим по порядку кома
*/
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int FirstComa(const char* str)
{   for(int i = 0;str[i] !='\0';i++)
    if(str[i] ==',' )
    return i;
  
}

 
int main()
{
setlocale(LC_ALL,"Russian");
cout<<"Введiть рядок: ";
char str[255];int k,h;
cin.getline(str,255);
int l=strlen(str);
cout<<"Номер першоi по порядку коми = "<<FirstComa(str)<<endl;
k=FirstComa(str);
for(int i = k+1;str[i] !='\0';i++)
{if(str[i] ==',' )
cout<<"Номери далi по порядку = "<<i<<endl;}

getch();
return 0;
}


