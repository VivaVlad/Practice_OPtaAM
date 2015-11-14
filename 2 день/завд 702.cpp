#include <iostream>
#include <iomanip>
using namespace std;
 
main() {
    
    int n;double d=1;double v=1;
     setlocale(LC_ALL,"Russian");
    /* розмірність матриць */
    cout<<"n: ";
    cin >> n;
         
    /* задання матриці A */
        double** A = new double *[n];
        for (int i = 0; i < n; ++i)
            A[i] = new double [n];
        cout<<"Введiть елементи матрицi A:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        cout<<"Eлементи матрицi A:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<A[i][j]<<"\t";
            }cout<<endl;
        }
      cout<<endl;
  /* задання вектора b */
    double* b = new double [n]; 
    cout<<"Eлементи вектора b у випадку а) :\n";
    for (int i = 0; i < n; i++)
    {double g=n; 
    while(d>0&&d<=g)
    {b[i]=1/(d*d+2);d++;
    cout<<setprecision(4)<<b[i]<<" ";
    }}
    cout<<endl;
    double* b1 = new double [n];
    cout<<"Eлементи вектора b у випадку б) :\n";
    for (int i = 0; i < n; i++)
    {double g=n; 
    while(v>0&&v<=g)
    {
    if(v/2==1)
    {b1[i]=1/(v*v+2);v++;
    cout<<setprecision(4)<<b1[i]<<" ";}
    else
    {b1[i]=1/v;v++;
    cout<<setprecision(4)<<b1[i]<<" ";}
    }}
    
    cout<<endl;
    double* b_out = new double [n];
    /* множення вектора b на матрицю A */
     for (int i = 0; i < n; i++)
    {
        b_out[i]=0;
        
        for (int j = 0; j < n; j++)
        {
           
                b_out[i] += b[i]*A[i][j]; 
        }
    }
 
 double* b1_out = new double [n];
    /* множення вектора b1 на матрицу A */
     for (int i = 0; i < n; i++)
    {
        b1_out[i]=0;
        
        for (int j = 0; j < n; j++)
        {
           
                b1_out[i] += b1[i]*A[i][j]; 
        }
    }
 
 
    cout<<"Результат у випадку а) :"<<endl;
    
    for(int j=0; j<n; j++)
    {
    cout<<setprecision(4)<<b_out[j]<<" ";
    }
    cout<<endl;
    
    cout<<"Результат у випадку б) :"<<endl;
    
    for(int i=0; i<n; i++)
    {
    cout<<setprecision(4)<<b1_out[i]<<" ";
    }
    cout<<endl;
    
    
    for (int i = 0; i < n; ++i){
         delete [] A[i];
            }
            
            
            
    delete []A;
    delete []b;
    delete []b_out;
    delete []b1;
    delete []b1_out;
    
system("pause");
}
