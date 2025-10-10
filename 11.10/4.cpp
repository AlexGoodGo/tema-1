#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    int count = 0;
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < a; j++) {
            if (i + j == a - 1) {
                cout << 1;
                count += 1;
            } else if (i + j > a - 1) {
                cout << 2;
                count += 2;
            } else {
                cout << 0;
            }
        }
        cout << endl;
    }
    
    cout << count << endl;    
    return 0;
}
