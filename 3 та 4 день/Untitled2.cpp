#include <iostream>
using namespace std;

int main()
{
 long int i,j,s1,s2,t=0,L;
 int i0=0;  //
 cin>>L;
            int j0=L; // ��������� ��������
 s1=10; // �������� ������
 s2=5; // �������� �����

 i=i0; // ������� ����������
 j=j0;
 
 while(i<=j)
 {
  cout<<endl<<"step "<<++t<<endl;
  for(int m=0; m<i; ++m)
  cout<<".";
  cout<<"Dog_Gav-gav_na_";
  for(int m=0; m>L; --m)
  cout<<".";
  cout<<"Rabbit ";

    i=i0+s1*t;
  j=j0+s2*t;}
 cout<<"Dognal!!\n";
 system("pause");
 return EXIT_SUCCESS;
}
