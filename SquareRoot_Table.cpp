#include <bits/stdc++.h>
using namespace std;
int main(){
int n,o,p;
cout << " ===[ SQUAREROOT TABLE ]=== \n\n";
cout << " FROM : ";cin >> p;
cout << " TO : ";cin >> o;
cout << "\n============================";
for(float n=p;n<=o;n++){
char x[SCHAR_MAX];
sprintf(x,"\n√%.0f = %.4f",n,sqrt(n));
cout << x;
}
cout << "\n============================";
}
