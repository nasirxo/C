#include <iostream>
using namespace std;
int main(){
  start:
  float X,Y; // X & Y Defined as integer
  char O;
  cout << "Number 1 : ";cin >>X;
  cout << "Number 2 : ";cin >>Y;
  cout << " Operators : (+ - * / %)" << endl;
  cout << "Enter Operator : ";cin >>O;
  switch (O){
case '+': cout << "ANSWER : " << X+Y << endl;
case '-': cout << "ANSWER : " << X-Y << endl;
case '*': cout << "ANSWER : " << X*Y << endl;
case '/': cout << "ANSWER : " << X/Y << endl;
case '%': cout << "ANSWER : " << int(X)%int(Y) << endl;
default: cout << "Invalid ! Operator Entered\n";
  }
  goto start;
}