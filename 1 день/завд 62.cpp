/*62.	ϳ��� �������� � ��������� ��������� ����� ��������� ���� ��������� �� ���� ��� ������ �������. 
�������, �� �� ������� � �������, �� ����������.
�������� ����� ������ ������.*/
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;
int main()
{setlocale(LC_ALL,"Russian");
char str[255];
 cout<<"����i�� �����: ";
cin.getline(str,255);
cout<<"������� � ����������� �����i�i: ";
for(int i=0;i<strlen(str);i++)
{if(str[i]>='a' && str[i]<='z' ||str[i]>='A' && str[i]<='Z')
{cout<<str[i]; }}
      
      getch();
      return 0;
      }

