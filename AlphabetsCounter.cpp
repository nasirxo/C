/* Text Alphabets Counter 
     By : Nasir Ali   */

#include <iostream>
#include <string>
using namespace std;

int count(char * T,char n){
int C=0;
for(int x=0;x<=(int)strlen(T);x++){
 char N = (int(T[x])>=0x41||int(T[x])<=0x5A)?
 T[x]+0x20:*(T+x);   
 if((int)T[x]>0x60){
           N = T[x];
        }
 (N == n)?C++:NULL;
}
return C;
}

int main(){
char msg[SCHAR_MAX];
cout << " Enter Text : ";
cin.getline(msg,SCHAR_MAX);
cout << "    ====[Alphabets-Counter]====\n";
for(char a='A';a<='Z';a++){
cout << a << " : " << count(msg,a+0x20) << endl;
}
}
