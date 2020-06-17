#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>

using namespace std;

static void even(int a,int b){
  for(int x=a;x<=b;x++){
    if(x%2==0){cout << " " << x;}
  }
  cout << endl;
}

static void odd(int a,int b){
  for(int x=a;x<=b;x++){
    if(x%2!=0){cout << " " << x;}
  }
  cout << endl;
}

static void sum(int a,int b){
  double Z=0;
  for(int x=a;x<=b;x++){
    Z+=x;
  }
  cout <<a<<"+..+"<<b<<" = "<<Z<<endl;
}

static void gen(string n,int a,int b){
  if(n=="sqrt"){
  for(int x=a;x<=b;x++){
  cout<<"√"<<x<<" = "<<pow(x,0.5)<<endl;
  }}
  else if(n=="log"){
  for(int x=a;x<=b;x++){
  cout<<"log "<<x<<" = "<<log(x)<<endl;
  }}
  else if(n=="cuberoot"){
  for(int x=a;x<=b;x++){
  cout<<"³√"<<x<<" = "<<pow(x,1/3.0)<<endl;
  }}
  
}
    
static void genpow(double n,int a,int b){
  for(int x=a;x<=b;x++){
 cout<<x<<"^"<<n<<" = "<<pow(x,n)<<endl;
     }
  }

static void dcheck(int C,int a,int b){
  for(int x=a;x<=b;x++){
    if(C%x==0){
        cout << x << " ";
    }
  }
  cout << endl;
}

static void tobin(int W){
int b[15],c=15;
  for(int x=0;x<15;x++){
    b[x]=W%2;
    W = W/2;
  }
  while(c-->0){
    cout << b[c];
  }
  cout << endl;  
}

static void reduce(int n,int m){
  int g = __gcd(n,m);
  int a=n/g,b=m/g;
  cout << n << "/" << m <<" = ";
  cout << a << "/" << b << endl;
  }

int main(){
cout << "   ===[ Maths-Shell ]=== \n";
cout << "      By : Nasir Ali\n";
double n,m;
string cmd,history;
string usage = " ADDITION : add 2 5 or + 2 5\n SUBTRACTION : sub 2 5 or - 2 5\n MULTIPLICATION : mul 2 5 or x 2 5\n DIVISION : div 2 5 or / 2 5\n POWER : pow 2 5 or ^ 2 5\n";
while(cout<<">> "&&cin>>cmd){
  history+=cmd+"\n";
  if(cmd=="pow"||cmd=="^"){
    cin >> n;cin >> m;
    cout << pow(n,m) << endl;
   }
  else if(cmd=="add"||cmd=="+"){
    cin >> n;cin >> m;
    cout << ">> " << n+m << endl;
   }
  else if(cmd=="sub"||cmd=="-"){
    cin >> n;cin >> m;
    cout << ">> " << n-m << endl;
   }
  else if(cmd=="mul"||cmd=="x"){
    cin >> n;cin >> m;
    cout << ">> " << n*m << endl;
   }
  else if(cmd=="div"||cmd=="/"){
    cin >> n;cin >> m;
    cout << ">> " << n/m << endl;
   }
  else if(cmd=="even"){
    cin >> n;cin >> m;
    even((int)n,(int)m);
   }
  else if(cmd=="odd"){
    cin >> n;cin >> m;
    odd((int)n,(int)m);
   }
  else if(cmd=="sum"){
    cin >> n;cin >> m;
    sum((int)n,(int)m);
   }
   else if(cmd=="reduce"){
    cin >> n;cin >> m;
    reduce((int)n,(int)m);
   }  
  else if(cmd=="gen"){
    string C;cin>>C;
    cin >> n;cin >> m;
    gen(C,(int)n,(int)m);
   }
  else if(cmd=="genpow"){
    double C;cin>>C;
    cin >> n;cin >> m;
    genpow(C,(int)n,(int)m);
   }
  else if(cmd=="hex"){
  long W;cin >>W;         
  cout << hex << W << endl;        
  }   
  else if(cmd=="binary"){
  int W;cin >>W;         
  tobin(W);
  }    
  else if(cmd=="dcheck"){
    int C;cin>>C;
    cin >> n;cin >> m;
    dcheck(C,(int)n,(int)m);
   }
  
  else if(cmd=="history"){
      cout << history;
  }          
  else if(cmd=="usage"){
    cout << "\n ===[ USAGE ]==="<<endl;
    cout << usage << endl; 
  }
  else {cout << ">> Invalid Input\n";}
        
  }
}