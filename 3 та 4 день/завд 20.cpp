#include <iostream>

using namespace std;
 
int F(int n)
{
    return n%10 + n/10;
}
 
bool Luck(int n)
{ 
     return F(n/1000) == F(n%1000);
}
 
int main()
{
    setlocale(LC_ALL,"Russian");
    cout<<"Щасливi шестизначнi числа\n";
    for (int i = 100000; i <= 999999; ++i)
    { if (Luck(i) == 1)
    cout << i <<"\t";
    }
    system("pause");
}
