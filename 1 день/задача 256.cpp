/*���� ���������� ����� n, s1..sn. ³����, �� ����� s1..sn � �������� ���� ����. ������ ��� ��������� i, ��:
1) si - ����� �� ������� ����
2) si - ��������� �� ������� ����
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
cout<<"����i�� �����: ";
char str[255];int k,h;
cin.getline(str,255);
int l=strlen(str);
cout<<"����� �����i �� ������� ���� = "<<FirstComa(str)<<endl;
k=FirstComa(str);
for(int i = k+1;str[i] !='\0';i++)
{if(str[i] ==',' )
cout<<"������ ���i �� ������� = "<<i<<endl;}

getch();
return 0;
}


