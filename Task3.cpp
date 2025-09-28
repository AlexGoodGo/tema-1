#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    int a;
    cout << "введите число от 1 до 1000: ";
    cin >> a;
    if ((a>1000) or (a<1)){
        cout<<"ошибка число введено не верно";
    }
    else{
        string th[] = {"", "M"};
        string hun[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string te[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string on[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        
        string r="";

        r += th[a/1000];
        r += hun[(a%1000)/100];
        r += te[(a%100)/10];
        r += on[a%10];

        cout << r;
    }
}
