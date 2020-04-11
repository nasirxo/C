<h1>C/C++ Codes By Nasir Ali</h1>

<p>├── AGE.cpp</p>
<p>├── AlphabetsCounter.cpp</p>
<p>├── Calculator_cpp</p>
<p>├── Factorial_table.cpp</p>
<p>├── GPA.c</p>
<p>├── MathSolver.cpp</p>
<p>├── Matrix-Arrays.cpp</p>
<p>├── NumTable.c</p>
<p>├── README.md</p>
<p>├── SquareRoot_Table.cpp</p>
<p>├── StringGen.cpp</p>
<p>├── Summation_table.cpp</p>
<p>├── calculator.cpp</p>
<p>├── factorial.c</p>
<p>└── usage.cpp</p>

# C++ Syntax

```cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
  int y = 10 - 5;
  int x = 5 + 6;
  cout << "I am Nasir Ali! " << endl;
}
```

#C++ Custom Arrays 
```cpp

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

```

<h1>Statistics</h1>
<p>18 directories, 166 files</p>
