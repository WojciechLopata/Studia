#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
long long powt,sztuk,czas,grub,pom_1,pud_test,suma,pom_2;
double pom_3;
double pud,suma_2;
int czasy[10000];
pom_1=0;
pud=0;
suma=0;
suma_2=0;
cin>>powt;
while(powt>0){
        suma_2=0;
        suma=0;
    cin>>grub;
    cin>>sztuk;
    while(grub>0){
    cin>>czas;
    pud=(((86400)/czas));
    pud_test=(((86400)/czas)/sztuk);
    pud=pud/sztuk;
    //cout<<"pud test to"<<pud_test<<endl;
    //cout<<"pud to "<<pud<<endl;


//   if(pud!=pud_test){pud_test=pud_test+1;}
    //cout<<pud_test<<endl;
    suma=suma+pud_test;
     suma_2=suma_2+pud;
    grub--;
    suma=suma_2;
    //cout<<suma;
    }
    //cout<<"pom 3 to  "<<pom_3<<endl;
   // cout<<"suma 2 to"<<suma_2<<endl;
    if(suma_2!=suma){suma=suma_2;suma=suma+1;}
cout<<suma;


   powt--;
}
return 0;
}

