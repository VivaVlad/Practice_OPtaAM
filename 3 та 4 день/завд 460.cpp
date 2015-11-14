#include<iostream>
#include<iomanip.h>
#include<conio.h> // для getch();
using namespace std;
void string_to_10(string s) 
{
        bool flag = false; int i=0; int sum=0;
        if (s[0]=='-') { flag = true; i=1; }
        for(i; i<s.length(); i++)
        for (int j=48;j<58;j++)
        { char temp = j; if (s[i]==temp) 
        sum=sum*10+j-48;}
        if (flag)
        cout<<-sum<<endl;  
        else cout<<sum<<endl;
}
void string_to_16(string s) 
{cout<<hex<<"В шiстнадцятичнiй системi-->";string_to_10(s);
}

int main()
{
    
        setlocale(LC_ALL, "Russian");
                string s; cin>>s;
                cout<<"В десятичнiй системi--> ";string_to_10(s);
                string_to_16(s);
                getch();
        return 0;
}
