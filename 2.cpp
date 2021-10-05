#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
int main()
{
int liczba,ilosc_dzialan,licznik,x,z,m,a_1,a_10,a;




  cin>>ilosc_dzialan;
  x=1;
  a_10=0;
  licznik=0;

   //if(ilosc_dzialan>30) return 0;

  while  (ilosc_dzialan>a_10){
        x=1;
  cin>>liczba;
  a_10++;
  a=liczba;



z=a;

 if (a<10&&a!=0){
  while(liczba>1){

  x=x*liczba;
  liczba--;

            }
          //  if (a>10) cout<<"0 0"<<endl;
            //if (a==0) cout<<"0 1"<<endl;

cout<<(x%100-x%10)/10<<" "<<x%10<<endl;
}
 if(a>=10) cout<<"0 0"<<endl;
 if (a==0) cout<<"0 1"<<endl;
z=15;
  }

    return 0;

  }
