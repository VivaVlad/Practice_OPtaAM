/*Написати рекурсивну процедуру для виведення на екран цифр натурального числа у зворотному порядку.*/

#include <iostream.h>
#include <cmath>
#include <conio.h>

using namespace std;
 
long Reverse(long x)
{
   long y = 0;
   while(x)
   {
       y = y*10 + x%10;
       x /= 10;
   }
   return y;
}

int main(){setlocale(LC_ALL,"Russian");
    long n,h;
    cout<<"Введiть число--> ";
    cin >> n;
    cout<<"Перевернуте число--> "<<Reverse(fabs(n))+1;
    getch();
    return 0;
}
