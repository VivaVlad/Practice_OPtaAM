#include <iostream.h>
#include <fstream.h>
#include <conio.h>
#include <string.h>
using namespace std;
struct pupil 
{  
char name[10];   
int h;   
}a[100];  
int n=5;
void input(void)
{
     cout<<"��������\n";
     for(int i=0;i<n;i++)
     {
       cout<<"\n I�'� "<<i+1<<" ��������: ";
       cin>>a[i].name;
       cout<<"\n ��i���=";
       cin>>a[i].h;
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
   {
   cout<<"\n\n  ��i���=5:\n";
for(int i=0;i<=9;i++)
if(a[i].h==5) cout<<a[i].name<<"\n";          
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
    case 'i': { input();  ; break;}
    case 's': {  sort(); getch (); break;} 
    case 'e': {  exit (1);}      
    default: cout<<"�������!!!\n";
    }

    }
    
    getch();
    return 0;
    }
