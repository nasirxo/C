#include <bits/stdc++.h>
using namespace std;
int main(){
int n,o,p;
cout << " [ ===SUMMATIOM TABLE ]=== \n\n";
cout << " FROM : ";cin >> p;
cout << " TO : ";cin >> o;
cout << "\n============================";
for(float n=p;n<=o;n++){
char x[SCHAR_MAX];
sprintf(x,"\nΣ(%.0f) = %.0f",n,n*(n+0b1)/0b10);
cout << x;
}
cout << "\n============================";
}
