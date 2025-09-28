#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int A, B, N;
    cin >> A >> B >> N;
    
    
    if (N>A+B) {
        cout << "mission impossible 2" << endl;
        return 0;
    }
    
    int a = 0, b = 0;
    
    
    for (int step = 0; step < 1000; step++) {
        
        if (a == N || b == N) {
            return 0;
        }
        
        
        if (a == 0) {
            a = A;
            cout << ">A" << endl;
            continue;
        }
        
        
        if (b == B) {
            b = 0;
            cout << "B>" << endl;
            continue;
        }
        
        
        int pour = min(a, B - b);
        a -= pour;
        b += pour;
        cout << "A>B" << endl;
        
        
        if (a == N || b == N) {
            return 0;
        }
    }
    
    
    cout << "mission impossible 2" << endl;
    return 0;
}
