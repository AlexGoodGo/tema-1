#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
    double S,a,v,d,t,ta,tb;
  cin>>  S;
  cin >>  a; 
  cin >>  v ;
  if (a!=0){
      d=v*v-4*a/2*(S*(-1));
      if (d==0){
          t=-1*v/a; 
      }
        if (d>0){
            ta=(-1*v+pow(d,0.5));
            tb=(-1*v-pow(d,0.5));
        
        }
        if ((d<0) or (v==0)){
            cout<< "нет ответа";
        }
  }
  if (t!=0){
      cout<< t ;
  }
  if (((ta!=0) and ta>0) or ((tb!=0) and (tb>0))){
      cout<< ta<< "    " << tb ;
  }
}
