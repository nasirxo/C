#include <iostream>
using namespace std;
class Matrix{
  /* Linear-Matrix Class For DataScience 
          By Nasir Ali */            
public:
 double A[500];
 int size;
 void insert(double C[]){
   size = *(&C + 1) - C;
   for(int q=0;q<=size;q++){
      A[q]=C[q];
    }
 }
 void show(){
 cout << endl << "ARRAY : ";
 for(int c=0;c<=size-1;c++){   
   cout<<A[c]<<",";
  }
}
    
 void nmultiply(double n){
  for(int q=0;q<=size;q++){
        A[q]=A[q]*n;
    }
}
  void count(void){
  cout << endl;
  cout << "COUNT : " << size;
}
    
 void divide(double n){
  for(int q=0;q<=size-1;q++){
        A[q]=A[q]/n;
    }
}
  void average(){
  cout << endl;
  double avg=0;
  for(int q=0;q<=size-1;q++){avg+=A[q];}
  cout << "AVERAGE : "<<avg/size;
  }
    
  void sum(){
  cout << endl;
  double sum=0;
  for(int q=0;q<=size-1;q++){sum+=A[q];}
  cout << "SUM : "<<sum;
  }
    
  void product(){
  cout << endl;
  double p=1;
  for(int q=0;q<=size-1;q++){p*=A[q];}
  cout << "PRODUCT : "<<p;
  }
    
  void max(){
  double * T=A;
  for(int q=0;q<=size-1;q++){
   if(T[0]<T[q]){T[0]=T[q];}
  }
  cout << endl << "MAXIMUM : "<<T[0];}
 
  void min(){
  double * T=A;
  for(int q=0;q<=size-1;q++){
   if(T[0]>T[q]){T[0]=T[q];}
  }
  cout << endl << "MINIMUM : "<<T[0];}

  void reverse(void){
  int Q = size;
  double temp[500];
  while(Q-->0){
   temp[(size-1)-Q]=A[Q];      
        }
   for(int q=0;q<=size;q++){
      A[q]=temp[q];
    }
  }

};
  
int main(){
double X[] = {1,2,3,4,5};
Matrix Z;
Z.insert(X);
Z.reverse();
Z.show();
Z.average();
Z.product();
Z.sum();
Z.max();
Z.min();
Z.count();
Z.show();
Z.nmultiply(5);
Z.show();
Z.divide(2);
Z.show();

}
