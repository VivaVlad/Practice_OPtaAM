/*³��� ������� ��� ������ ��� ����� ���� 15 ������� ������. 
�� �������� ������� � ������. ����������� ����� ������, 
��� ������ �������� 3000 � ��� ����� ����.*/
#include <iostream.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct mountain 
{  
char name[10];   
int h;   
}a[100];  
int n=3;
void vod (void)
{
     cout<<"��������\n";
     for(int i=0;i<n;i++)
     {
       cout<<"\n I�'� "<<i+1<<" ����: ";
       cin>>a[i].name;
       cout<<"\n ������ �=";
       cin>>a[i].h;
       cout<<"\n  -------\n";
}     
} 
   void sort(void)
   {
   cout<<"\n\n ������ �>3000:\n";
for(int i=0;i<=n;i++)
if(a[i].h>3000) cout<<a[i].name<<"\n";          
}
int main()
   {
   setlocale(LC_ALL,"Russian");
   char key;
   while(1)
   {
system("cls");
cout<<" �����i�� ������i�:\n";
    cout<<"i - �������� "<<endl<<"s - ���������� "<<endl<<"e - ���i�"<<endl;
    cin>>key;
    switch (key)
    {	
    case 'i': { vod ();  ; break;}
    case 's': {  sort(); getch (); break;} 
    case 'e': {  exit (1);}      
    default: cout<<"�������!!!\n";
    }

    }
    getch();
    return 0;
    }
   

