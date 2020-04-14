/* Binary Values Table 
    By : Nasir Ali   */

#include <iostream>
#include <bitset>

using namespace std;

int main(){
int m,n;

cout << " From : ";cin >> m;
cout << " To : ";cin >> n;

cout << "\nNUMBERS\tBINARY VALUES"<<endl;
for(int x=m;x<=n;x++){
  cout <<"  "<< x << "\t  " <<bitset<8>(x);
  cout << endl;
  }
}
