#include <iostream>

using namespace std;

int main() {
    
    int c;
    cin >> c;
    int numbers[c];
    for (int i = 0; i<c ; i++) {
        double a;
        cin >> a;
        numbers[i] = a;
    }
    cout << "это те кто не прошли("<< endl;
    for (int i=0; i<c ; i++){
        
        if (numbers[i]>16){
            
            cout <<numbers[i]<< endl;
        }
    }














    
}
