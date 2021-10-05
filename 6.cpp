#include <iostream>
#include <math.h>

using namespace std;

int main(){
 unsigned long long a,b,c,d,e,f,g,h;
f=1;
cin>>a;
while (a>0){
    cin>>c;
    cin>>b;
    c=c%10;
    if(b==0){b=4;}
    if(b!=4){b=b%4;}
    d=pow(c,b);
   // cout<<d;
    f=d%10;
    //cout<<f;
    cout<<f<<endl;
    a--;

}



return 0;
}
