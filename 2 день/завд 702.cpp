#include <iostream>
#include <iomanip>
using namespace std;
 
main() {
    
    int n;double d=1;double v=1;
     setlocale(LC_ALL,"Russian");
    /* ��������� ������� */
    cout<<"n: ";
    cin >> n;
         
    /* ������� ������� A */
        double** A = new double *[n];
        for (int i = 0; i < n; ++i)
            A[i] = new double [n];
        cout<<"����i�� �������� ������i A:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> A[i][j];
            }
        }
        cout<<"E������� ������i A:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<A[i][j]<<"\t";
            }cout<<endl;
        }
      cout<<endl;
  /* ������� ������� b */
    double* b = new double [n]; 
    cout<<"E������� ������� b � ������� �) :\n";
    for (int i = 0; i < n; i++)
    {double g=n; 
    while(d>0&&d<=g)
    {b[i]=1/(d*d+2);d++;
    cout<<setprecision(4)<<b[i]<<" ";
    }}
    cout<<endl;
    double* b1 = new double [n];
    cout<<"E������� ������� b � ������� �) :\n";
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
    /* �������� ������� b �� ������� A */
     for (int i = 0; i < n; i++)
    {
        b_out[i]=0;
        
        for (int j = 0; j < n; j++)
        {
           
                b_out[i] += b[i]*A[i][j]; 
        }
    }
 
 double* b1_out = new double [n];
    /* �������� ������� b1 �� ������� A */
     for (int i = 0; i < n; i++)
    {
        b1_out[i]=0;
        
        for (int j = 0; j < n; j++)
        {
           
                b1_out[i] += b1[i]*A[i][j]; 
        }
    }
 
 
    cout<<"��������� � ������� �) :"<<endl;
    
    for(int j=0; j<n; j++)
    {
    cout<<setprecision(4)<<b_out[j]<<" ";
    }
    cout<<endl;
    
    cout<<"��������� � ������� �) :"<<endl;
    
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
