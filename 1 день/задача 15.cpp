/*Задача 15
Після введення з клавіатури довільного рядка вивести на екран цей рядок, 
але з відібраними з нього латинськими літерами.*/

#include <iostream>
#include <conio.h>
#include <string.h>
 
using namespace std;
 
int main()
{
  char mas[500];
  fgets(mas,500,stdin);
  char *str=new char[strlen(mas)];
  str=mas;
  for (int i=0;i<strlen(mas);i++)
{
if ((str[i]>=65)&&(str[i]<=90)||(str[i]>=97)&&(str[i]<=122))
{ cout<<str[i];}
} getch();
return 0;
}
