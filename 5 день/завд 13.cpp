/*³����� ��� ������� � 25 ���� �����. ����� ���� ���� �� �� ���������� ������. 
�) ��������� ������� ������ �������� � ���������� ���� �����.
�) ��������� ������� ���� ����, �� � ������ ��������, ��� ���������� ����� ��������� ���� �����.
�) ��������� ������� ���� ����, �� � ������ �������� � ����, �� �������������� ��� ����� ��� ��������� ����� (��� ������� �� ������).
�) ������� ������� ���� � ������� ��������� �� �����.
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
    cout<<"1. �������."<<endl;
    cout<<"2. ���i�."<<endl;                                         
    cout<<"B����i�� �����: ";        
    cin>>menu;
    system("cls");
    switch(menu)
    {
    case(1):
    {
    int n;
    cout<<"�����i�� �i���i��� ���i� :";cin>>n;
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
cout << "\�i�i������� �i�� - " << min.name << "\n������������ �i�� - " << max.name << "\n\n";
    
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
cout << "1) " << max1.name << " i " << max2.name << " ������i ����\n";
    
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
cout << "1) " << max1.name << " i " << max2.name << " ������i ����\n";    
 
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

