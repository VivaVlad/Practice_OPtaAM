#include <iostream.h>
main()
{  setlocale(LC_ALL,"Russian");
   char str[100];
   int k=0;
   cout<<"����i�� �����: ";
   cin.get(str,100);
   int l=strlen(str);
   for (int i=0;i<l; i++) 
   {if(str[i]!=':')
   k++;}
   cout <<"�i���i��� �����i� ����� ' : '="<<k<< endl;
   system("pause"); 
}
