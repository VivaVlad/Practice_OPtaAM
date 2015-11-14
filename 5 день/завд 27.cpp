/*Відомі відомості про висоту над рівнем моря 15 гірських вершин. 
Всі значення виражені в метрах. Надрукувати назви вершин, 
чия висота перевищує 3000 м над рівнем моря.*/
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
     cout<<"Введення\n";
     for(int i=0;i<n;i++)
     {
       cout<<"\n Iм'я "<<i+1<<" гори: ";
       cin>>a[i].name;
       cout<<"\n Висота Н=";
       cin>>a[i].h;
       cout<<"\n  -------\n";
}     
} 
   void sort(void)
   {
   cout<<"\n\n Висота Н>3000:\n";
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
cout<<" Виберiть операцiю:\n";
    cout<<"i - введення "<<endl<<"s - сортування "<<endl<<"e - вихiд"<<endl;
    cin>>key;
    switch (key)
    {	
    case 'i': { vod ();  ; break;}
    case 's': {  sort(); getch (); break;} 
    case 'e': {  exit (1);}      
    default: cout<<"Помилка!!!\n";
    }

    }
    getch();
    return 0;
    }
   

