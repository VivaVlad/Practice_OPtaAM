/*Даны результаты переписи населения, которые хранятся в
памяти ЭВМ. Напечатать фамилии, имена и подсчитать общее число
жителей, родившихся после 1990 г.*/
#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct pupil 
{  
char name[10];
char surname[20];    
int day;
int month;
int year;   
}a[100];  
int n=3;
void input(void)
{
     cout<<"Введення\n";
     for(int i=0;i<n;i++)
     { if(cin)
       {cout<<"\n Iм'я "<<i+1<<" громадянина: ";
       cin>>a[i].name;}
       if(cin)
       {cout<<"\n Прiзвище "<<i+1<<" громадянина: ";
       cin>>a[i].surname;}
        if(cin)
       { cout<<"\n День народження=";
       cin>>a[i].day;}
       if(cin)
        {cout<<"\n Мiсяць народження=";
       cin>>a[i].month;}
       if(cin&&a[i].month>0&&a[i].month<=12)
       {cout<<"\n Рiк народження=";
       cin>>a[i].year;}
       cout<<"\n  -------\n";
       // Serializing struct to student.data
    ofstream output_file("students.doc", ios::binary);
    output_file.write((char*)&a, sizeof(a));
    output_file.close();

    // Reading from it
    ifstream input_file("students.doc", ios::binary);
    pupil b[100];
    input_file.read((char*)&b, sizeof(b)); 
}     
} 
   void sort(void)
   {int y=0;
   cout<<"\n\n  Рiк народження 1990:\n";
for(int i=0;i<=n;i++)
if(a[i].year>1990)
{y++;
cout<<a[i].name<<" "<<a[i].surname<<"\n";}
cout<<"Кiлькiсть людей, якi народились пiзнiше 1990 = "<<y<<"\n";        
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
    case 'i': { input();  ; break;}
    case 's': {  sort(); getch (); break;} 
    case 'e': {  exit (1);}      
    default: cout<<"Помилка!!!\n";
    }

    }
    
    getch();
    return 0;
    }
