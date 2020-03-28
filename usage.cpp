/* C++ Usage's By Nasir Ali 
  github : github.com/nasirxo/C
  fb : fb.com/nasir.xo
*/

// <= Single line Comment
/* Double  Line 
    Comment    */
#include <iostream> // Input/Output Library
using namespace std; 
/* Square Function Defined with Alternative of { } => <% %> */
int Square(double Q)<% return Q*Q; %>

int main(){
string line = "Line No "; // String "abc"
int y = 0xA; // Hex Value of 10 
double D = 4*4;//Extended Size Datatype 8Byte
long L = 9999999;// 32bit Datatype
float PI = 3.1415;// Datatype for Floating Num
int x = ------y; // decreament by 3 
cout << line <<__LINE__<<" : " << x << endl;
/* A defined as Dynamic Array with 
     12 Character Space
 */
char *A = (char*)malloc(0xC*sizeof(char));
*(A+0)='N'; //Putting N in First Index of A
cout << line <<__LINE__<<" : " << A << endl;
int N = (4>5)?10:20; //Logical Conditions
cout << line <<__LINE__<<" : " << N << endl;   
bool T = 1; // T representing True Boolean
bool F = 0; // F representing False Boolean
if (y!=x){
cout << line <<__LINE__<<" : " <<T<<endl;
}
else {
cout << line <<__LINE__<<" : " <<F<< endl;
} 
int even[100]; // Integer Array
cout << line <<__LINE__<<" : " <<"Generating Even Numbers"<< endl;
for(int a=0,z=0;a<=100;a++&&z++){
if(a%2==0){//Logical Statement divisible by 2
 even[z]=a; //Assigning Even to array index
   }
}
cout << line <<__LINE__<<" : " <<"Printing Even Numbers from Array"<< endl;
int esize = sizeof(even)/sizeof(int);
while(y-->0){cout << "=====";}cout << endl;
while(esize --> 0) {
 if(even[esize] != 0)
  cout << even[esize] << " ";  
}cout << endl;
while(--x+1>0){cout << "=====";}
#define Minus_10(x) x-10
cout <<endl<< line <<__LINE__<<" : " <<"Macro Function X-10 : "<<Minus_10(5)<<endl;   
int num = 47;
switch(num){
case 47:
cout << line <<__LINE__<<" : " <<"num is 47"<< endl;
default: 
cout << line <<__LINE__<<" : " <<"Default Statement"<< endl;   
  }
cout << line <<__LINE__<<" : " <<"Square Function Applied for 7 : "<<Square(7)<< endl;
}
