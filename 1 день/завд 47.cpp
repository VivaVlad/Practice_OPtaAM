/*�������������� ������. ��� �����, ��������� �� �����������,
����������� �������. �������� ���������, ������������
��������� ��������������: ����� ������ ����� �
����� ����������� ������ ������ ���� �� ���� ������; ������
����� � ����������� ������ ���������� � ��������� �����.
���������. ����� ����� ���� ��� �� �������, ��� � �� ����������
�����.*/
# include <iostream>
# include <conio.h>
# include <ctype.h>

using namespace std;
void insertSpace(char *s)
{    int j=0;
     while(s[j]!='\0') 
{
     if(s[j]=='.')
{    for(int i = strlen(s); i > j; i--)
     s[i+1] = s[i];
     s[j+1]=' ';
     s[j+2]=toupper(s[j+2]);
    
}
     j++;
}
}
main()
{setlocale(LC_ALL,"Russian");
     cout<<"����i�� �����: ";
     char str[255];
     cin.getline(str,255);
     insertSpace(str);
     int l=strlen(str);
     cout<<"���������: ";
     for(int i=0;i<l;i++)
     {str[0]=toupper(str[0]);
     cout<<str[i];}
     getch();
        
 }
