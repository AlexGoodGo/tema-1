#include <iostream>
using namespace std;

long long stepen(int a, int b){
    long long ans;
    ans=a;
    while (b!=1){
        ans *=a;
        b -=1;
    }
    return ans;

}

int main(){
    int a,b;
    cout<<"введите число и степень числа пжпж";
    cin>>a>>b;
    cout<<stepen(a,b);
    return 0;



}
