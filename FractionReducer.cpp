/* Fraction Reducer 
   By : Nasir Ali */

#include <iostream>
#include <algorithm>

using namespace std;

int reduce(int m, int n){
   if (__gcd(m,n) > 0){
      return 1;
   }
   else {
      return 0;
   }
}

int main(){
int m,n;
cout << "  ===[Fraction Reducer]===   \n";
cout << endl;
cout << " Enter M : ";cin>>m;
cout << " Enter N : ";cin>>n;
int g = __gcd(m,n);
   if(reduce(m,n)){
   cout << "\n   " << m << "/" << n;
   cout << " = ";
   cout << m/g << "/" << n/g << endl;
   }
   else{
   cout << "Fraction error" << endl;
   }
}
