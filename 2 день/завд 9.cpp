/*Масив X(n) розбитий на m фрагментів. У цілочисельному масиві K(m) зберігаються довжини 
відповідних фрагментів (усі ki різні, їх сума дорівнює n). Впорядкувати масив K за зростанням,
 переставивши відповідні фрагменти в масиві X.*/
#include <iostream.h>
#include <conio.h>

int main()
{
const int n=10, m=4;
int i, j, k, l, temp=0, X[n]={1, 3, 5, 2, 7, 9, 4, 6, 8, 10}, K[m]={1, 4, 3, 2};
    int start[m];
    for (i=0; i<m; i++)
    {
start[i]=temp;        
temp+=K[i];        
}
if (temp!=n)
return 0;
for (i=0; i<m; i++)
for (j=0; j<m-i-1; j++)
if(K[j]>K[j+1])
{
for (k=0; k<K[j]; k++)
{
temp=X[start[j]];
for (l=start[j]; l<start[j+1]+K[j+1]; l++)
X[l]=X[l+1];
X[l-1]=temp;
        }
temp=K[j];            
K[j]=K[j+1];            
        K[j+1]=temp;
        temp=0;
        for (k=0; k<m; k++)
        {
    
start[k]=temp;
temp+=K[k];
}
}
for (i=0; i<n; i++)
cout<<X[i]<<" ";
getch();
}
