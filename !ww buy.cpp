#include <iostream>
#include <cmath>
#include <math.h>
#include <cstdlib>
using namespace std;
const int ile_max=10000;
string dane[ile_max];
int ile_p;
int liczniki[ile_max];
int ost;
int i;
string s;
bool jest;
int ile_w=0;
void czytaj(){
    ost=-1;
    i=0;
    for(i;i<ile_max;i++)liczniki[i]=0;
    while(cin>>s){
        jest=false;
        for(i=0;(i<=ost)&&!jest;i++)jest=s==dane[i];
        if(jest){
            i--;
            liczniki[i]++;
        }else{dane[++ost]=s;liczniki[ost]=1;}
    }
    return;
}
int main()
{
    czytaj();
   // cout<<"ost to "<<ost;
    //for(i=0;i<=ost;i++)cout<<dane[i]<<"-"<<liczniki[i]<<endl;
    for (i=0;i<ost;i++){
        if(liczniki[i]>1){ile_w++;}


    }
   int maxi=0;
    //int maxi;
int imaxi=0;
for(i=1;i<=ost;i++){

    if(liczniki[i]>maxi){maxi=liczniki[i]; imaxi=i;}
}

    cout<<"slow wielo jest"<<ile_w<<endl;
    cout<<"maxi to "<<maxi<<endl;
    cout<<dane[imaxi];
    return 0;
}
