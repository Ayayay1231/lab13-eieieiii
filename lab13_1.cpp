#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[], int N,double B[]){
    double sum = 0 ;
        for(int i = 0; i < N ; i++){
            sum = A[i]+sum ;
        }
        B[0] = sum/N ;
    
    double SD = 0 ;
  
        for(int k = 0; k < N ;k++){
            SD = pow(A[k]-B[0],2)+SD ;
        }
        B[1] = sqrt(SD/(N));

     long double GM = 1 ;
        for(int j = 0;j<N;j++){
            GM = GM*A[j];
        }
        B[2] = pow(GM,1.0/N);
    double HM = 0 ;
        for(int m = 0 ; m<N ; m++){
            HM = HM+(1/A[m]) ;
        }

        B[3] = N/HM;
        double max = A[0];
        double min = A[0];
        for(int q = 0 ;q<N ;q++){
            if(A[q] > max){
                max = A[q] ;
            }
            if(A[q]<min){
                min = A[q];
            }
            
        }
        B[4] = max ;
        B[5] = min ;
}   
