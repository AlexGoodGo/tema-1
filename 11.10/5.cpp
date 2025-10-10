#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    int count = 0;
    for (int i = 0; i < a; i++) {
        int x;
        cin >> x;
        count = count^x;
    }
    
    cout << count << endl;
    
    return 0;
}
