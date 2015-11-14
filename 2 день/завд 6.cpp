#include <iostream.h>

const int size = 5;
const int size1 = 5;
const int size2 = 10;
 
main() 
{    
srand((time(0)));
int arr[size], arr1[size1], arr2[size2], temp, temp1, temp2;
cout<<"Obednanya dvoh vporyadkovanuh po zrostany masiviv.\n";
for(int i = 0; i < size; i++) {
arr[i] = rand() % 10 + 1;           
}       
for(int i = 0; i < size - 1; i++) {
for(int j = 0; j < size - 1; j++) {
if(arr[j] > arr[j + 1]) {                   
temp = arr[j];
arr[j] = arr[j + 1];                    
arr[j + 1] = temp;                    
}
}
}
cout<<"Pershuy masuv -> ";
for(int i = 0; i < size; i++) {                 
cout<<arr[i]<<" ";
}
 for(int i = 0; i < size1; i++) {
 arr1[i] = rand() % 10 + 1;              
 }
 for(int i = 0; i < size1 - 1; i++) {
 for(int j = 0; j < size1 - 1; j++) {
 if(arr1[j] > arr1[j + 1]) {                 
 temp1 = arr[j];
 arr1[j] = arr1[j + 1];
 arr1[j + 1] = temp1;                    
 }
 }
 }
cout<<"\nDryhuy masuv -> ";
for(int i = 0; i < size1; i++) {
cout<<arr1[i]<<" ";
}
for(int i = 0; i < size; i++) {
arr2[i] = arr[i];
}
for(int i = 0; i < size2; i++) {
arr2[i + size] = arr1[i];
}
 for(int i = 0; i < size2 - 1; i++) {
for(int j = 0; j < size2 - 1; j++) {
if(arr2[j] > arr2[j + 1]) {
temp2 = arr2[j];
arr2[j] = arr2[j + 1];
arr2[j + 1] = temp2;
 }
 }
 }
cout<<"\nVidsortyvanuy masuv -> ";
for(int i = 0; i < size2; i++) {
cout<<arr2[i]<<" ";
}
cout<<endl;
int b = 0;
int sz = size2;      
for(int i = 0; i < sz; i++) {
for(int j = 0; j < sz; j++) {
if(i == j) { 
continue;
}
if(arr2[i] == arr2[j]) { 
for(int u = j; u < sz; u++) {
arr2[u] = arr2[u+1];
}                                   
sz--;
j--;
} 
}
}
cout<<"Masuv bez odnakovuh elementiv -> ";
for(int i = 0; i < sz; i++) 
{
cout<<arr2[i]<<" ";
}
cout<<endl;
system("pause");
}
