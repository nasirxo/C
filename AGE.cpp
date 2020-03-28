#include <bits/stdc++.h>
#define BWHT "\e[1;37m"
#define BYEL "\e[1;33m"
#define BLKB "\e[40m"
#define REDB "\e[41m"
#define GRNB "\e[42m"
#define BLUB "\e[44m"
#define MAGB "\e[45m"
#define CYNB "\e[46m"

using namespace std;
int main(){
int year,age;
char B[SCHAR_MAX]={10, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 65,71, 69, 45, 70, 105, 110, 100,101, 114, 32, 32, 32, 32, 32,32, 32, 32, 32, 10, 32, 32, 32, 32, 32, 32, 32, 226, 150, 132, 239, 184, 187, 204, 183, 204, 191, 226, 148, 187, 204, 191, 226, 149, 144, 226, 148, 129, 228, 184, 128, 32, 226, 128, 162, 32, 226, 128, 162, 32, 226, 128, 162, 32, 226, 128, 162, 32, 226, 128, 162, 32, 226, 128, 162, 10, 32, 32, 32, 61, 61, 61, 62, 32, 66, 121, 32, 58, 32, 78, 97, 115, 105, 114, 32, 65, 108, 105, 32, 32, 60, 61, 61, 61, 10};
cout << BWHT << B << endl << endl << BWHT;
cout << REDB << "Birth Year : " << GRNB;
cin >> year;
age = 0x7E4 - year;
cout << BLKB << endl << endl;
cout<<setw(12)<<CYNB<<BYEL<<"====[ DETAILS ]====";
cout<<BLKB<<endl<<endl;
cout<<BWHT;    
cout<<setw(13)<<BLUB << "AGE (YEARS) : "<< MAGB<<age<<BLKB;
cout<<endl;    
cout<<setw(13)<<BLUB << "AGE (MONTHS) : "<< MAGB<<age*0xC<<BLKB;
cout<<endl;
cout<<setw(13)<<BLUB << "AGE (HOURS) : "<< MAGB<<age*0x120<<BLKB;
cout<<endl;  
cout<<setw(13)<<BLUB << "AGE (MINUTES) : "<< MAGB<<age*0x4380<<BLKB;
cout<<endl; 
cout<<setw(13)<<BLUB << "AGE (SECONDS) : "<< MAGB<<age*0xFD200<<BLKB;
cout<<endl;
}
