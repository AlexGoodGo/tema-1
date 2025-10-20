#include <iostream>

using namespace std;

bool mena(int numberOfCigaretts){
    int numberOfKotlyGeneralskie;
    cout<<"введите число numberOfKotlyGeneralskie";
    cin>> numberOfKotlyGeneralskie;
    if (numberOfKotlyGeneralskie==numberOfCigaretts){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int numberOfCigaretts;
    cout<<"введите число numberOfCigaretts ";
    cin>>numberOfCigaretts;
    cout<<  mena(numberOfCigaretts);
    return 0;
}
