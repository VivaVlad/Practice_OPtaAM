/*Відомий ріст кожного з 25 учнів класу. Жодна пара учнів не має однакового зросту. 
а) Визначити прізвища самого високого і найнижчого учнів класу.
б) Визначити прізвища двох учнів, які є самими високими, без урахування дійсно найвищого учня класу.
в) Визначити прізвища двох учнів, які є самими високими в класі, не використовуючи при цьому два оператори циклу (два проходи по масиву).
г) Вивести прізвища учнів в порядку зростання їх росту.
*/
#include <iostream>
#include <fstream.h>
#include <conio.h>
#include <windows.h>

 
using namespace std;
 
struct pupil
{
     char name[20];
     int height;
     };
     int main()
{
    setlocale(LC_ALL,"Russian");
    int menu;
    cout<<"1. Початок."<<endl;
    cout<<"2. Вихiд."<<endl;                                         
    cout<<"Bиберiть пункт: ";        
    cin>>menu;
    system("cls");
    switch(menu)
    {
    case(1):
    {
    int n;
    cout<<"Виберiть кiлькiсть учнiв :";cin>>n;
    pupil a[n], x, min, max, max1, max2;
    int k=0;
   if(n>=3)
   {for (int i=0; i<n; i++)
cin >> a[i].name >> a[i].height;}
else
{cout<<"Error\n";break;}
// a
min=max=a[0];
for(int i=0;i<n;i++)
if(a[i].height>max.height)
max=a[i];
else if(a[i].height<max.height)
min=a[i];
cout << "\Мiнiмальний рiст - " << min.name << "\nМаксимальний рiст - " << max.name << "\n\n";
    
// b
    max1.height = 0;
    max2.height = 0;
    for (int i=0; i<n; i++)
        if (a[i].height>max1.height&&a[i].height!=max.height)
        {
        max1 = a[i];
        k = i;
        }
for (int i=0 ; i<n; i++)
if (a[i].height >max2.height&&i!=k&&a[i].height!=max.height)
max2 = a[i];
cout << "1) " << max1.name << " i " << max2.name << " найвищi люди\n";
    
// c
    max1.height = 0;
    max2.height = 0;
    k=0;
    for (int i=0; i<n; i++)
    {
if (a[i].height != max.height && a[i].height > max1.height)
{
        max1 = a[i];
        k=i;
}
if (a[i].height != max.height && a[i].height > max2.height && k != i)
max2 = a[i];            
}    
cout << "1) " << max1.name << " i " << max2.name << " найвищi люди\n";    
 
// d
for (int i=1; i<n; i++)    
for (int j=0; j<n-i; j++)        
if (a[j].height > a[j+1].height            )
{            
x = a[j];
a[j] = a[j+1];                
a[j+1] = x;                
}                
for (int i=0; i<n; i++)            
cout << a[i].name << " " << a[i].height << endl;    
// Serializing struct to student.data
    ofstream output_file("students.doc", ios::binary);
    output_file.write((char*)&a, sizeof(a));
    output_file.close();

    // Reading from it
    ifstream input_file("students.doc", ios::binary);
    pupil master[n];
    input_file.read((char*)&master, sizeof(master)); 
 getch();       
return 0;                
        }
        case(2):
        {
         exit(1);
        }
        
}
  
getch();

}

