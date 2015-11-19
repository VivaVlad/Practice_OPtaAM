#include <iostream>
#include <iomanip>
#include <fstream.h>
#include <conio.h>
#include <windows.h>
using namespace std;
struct pupil 
{  
char name[10];   
int h;   
}a[100],b;  
int n,s=0,m,q,q1;
void input(void)
{if(cin)
     {cout<<"Кiлькiсть елементiв=";cin>>n;
      cout<<"Введiть найменування обмундирування i кiлькiсть : \n";}
     
     for(int i=0;i<n;i++)
     { 
     cin>>a[i].name>>a[i].h;
     }
//Serializing struct to student.data
ofstream output_file("BD.txt", ios::binary);
                  output_file.write((char*)&a, sizeof(pupil)*n);
                  output_file.close();
                  ofstream file("kilkist.txt");
                       file<<n;
                       file.close();
}
void write(void)
{   
     if(cin)
     {cout<<"Кiлькiсть елементiв=";
     cin>>m;}
     cout<<"Допишiть найменування обмундирування i кiлькiсть : \n";
     for(int i=0;i<m;i++)
     { if(cin)
       cin>>a[i].name>>a[i].h;}
 ofstream output_file("BD.txt", ios::ate|ios::app|ios::binary);
   // for(int i=0;i<n;i++)
     {output_file.write((char*)&a, sizeof(a));}
      output_file.close();
    
    
    ifstream file2("kilkist.txt");
                       file2>>q;
                       file2.close();
    ofstream file3("kilkist.txt");
                       file3<<q+m;
                       file3.close();
}
void deletE (void)
{char t;
    cout<<" Виберiть операцiю:\n";
    cout<<"y - видалення "<<endl<<"n - exit "<<endl;
    cin>>t;

switch(t)
{
case 'y':{ofstream vlad("BD.txt",ios_base::out | ios_base::trunc);
cout<<"Видалено!!!\n";
break;}
case 'n':{exit(1);break;}
default: cout<<"Error";
}
system("pause");
}
void stan(void)
{   int l;
    if(cin)
    {cout<<"Введiть кiлькiсть солдатiв : ";cin>>l;}
    for(int i=0;i<n;i++)
    {if(l<=a[i].h)
    {cout<<i+1<<")"<<"Солдати забезпечені всим.\n";break;}
    else if(l>a[i].h)
    {int q=i;
    cout<<i+1<<")"<<"Недостача "<<"="<<l-a[i].h<<endl;}}
    system ("pause");
}
void read(void)
{     
      ifstream file4("kilkist.txt");
                       file4>>q1;
                       file4.close();
     
                          
     ifstream input_file("BD.txt", ios::in|ios::binary);                   
     // Зчитування
    
    pupil C[q1];
    input_file.read((char*)&C, sizeof(C)); 

  
  
   for(int i=0;i<q1; i++)
  { cout<<endl<<"Обмундирування"<<i+1<<" - "<<C[i].name<<"\t";
   cout<<"Кiлькiсть - "<<C[i].h<<endl;}
    
  
    system("pause");
} 
int main()
   {
   setlocale(LC_ALL,"Russian");
   SetConsoleCP(1251);
   SetConsoleOutputCP(1251);
   char key;
   while(1)
{

cout<<" Виберiть операцiю:\n";
    cout<<"i - введення "<<endl<<"w - допис "<<endl<<"r - зчитування "<<endl<<"d - видалення "<<endl<<"s - cтан складу та недостачi(виберiть введення i заповнiть BD!!!)"<<endl<<"e - вихiд"<<endl;
    cin>>key;
    switch (key)
    {	
    case 'i': { input();break;}
    case 'w': { write();break;} 
    case 'r': { read(); break;} 
    case 'd': { deletE();break;} 
    case 's': { stan();break;}
    case 'e': {exit (1);}      
    default: cout<<"Помилка!!!\n";}
  system("cls");  
}
    
    getch();
    return 0;
    }
