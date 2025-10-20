#include <iostream>

using namespace std;

void uxtispisok(){
    int num;
    cin>>num;
    if (num!=0){
        uxtispisok();

    }
    cout<<num<<endl;
}

int main(){
    uxtispisok();
    return 0;
}
