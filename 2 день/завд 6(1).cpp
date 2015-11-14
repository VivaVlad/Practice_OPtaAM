#include <iostream.h>

const int size = 5;
const int size1 = 5;
const int size2 = size+size1;
 
int main() {    
int i=0,j=0,k=0;       
srand(time(0));
int A[size], B[size1], C[size2], temp, temp1, temp2;
cout<<"Obednanya dvoh vporyadkovanuh po zrostany masiviv.\n";
for(int i = 0; i < size; i++) {
A[i] = rand() % 10 + 1;           
}       
for(int i = 0; i < size - 1; i++) {
for(int j = 0; j < size - 1; j++) {
if(A[j] > A[j + 1]) {                   
temp = A[j];
A[j] = A[j + 1];                    
A[j + 1] = temp;                    
}
}
}
cout<<"Pershuy masuv -> ";
for(int i = 0; i < size; i++) {                 
cout<<A[i];
}
 for(int i = 0; i < size1; i++) {
A[i] = rand() % 10 + 1;              
 }
 for(int i = 0; i < size1 - 1; i++) {
 for(int j = 0; j < size1 - 1; j++) {
 if(B[j] > B[j + 1]) {                 
 temp1 = A[j];
 B[j] = B[j + 1];
 B[j + 1] = temp1;                    
 }
 }
 }
cout<<"\nDryhuy masuv -> ";
for(int i = 0; i < size1; i++) {
cout<<B[i];
}
cout<<endl;
for(int i = 0; i < size; i++) {
C[i] = A[i];
}
for(int i = 0; i < size2; i++) {
C[i + size] = B[i];
}
 for(int i = 0; i < size2 - 1; i++) {
for(int j = 0; j < size2 - 1; j++) {
if(C[j] > C[j + 1]) {
temp2 = C[j];
C[j] = C[j + 1];
C[j + 1] = temp2;
 }
 }
 }

cout<<"Masuv bez odnakovuh elementiv -> ";


for (int k=0;k<size2;k++)
{if((A[i]<B[j] ||  j>=size1 )&& i<size ) 
{C[k]=A[i];  i++;}
else  if (A[i]==B[j])
{C[k]=B[j];i++;j++;
}
    
else
{C[k]=B[j];
j++;}}
for(k=0;k<size2;k++)
cout<<C[k]<<"  ";
system("pause");
}
