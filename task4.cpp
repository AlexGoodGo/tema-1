#include <iostream>
#include <cmath>

using namespace std;

int minO(int A, int B) {
    int operations = 0;
    
    while (A > B) {
        if (A % 2 == 0 && A / 2 >= B) {
            
            A /= 2;
            operations=operations+1;
        } 
        else {
            A = A-1;
            operations = operations + 1;
        }
    }
    
    return operations;
}

int main() {
    int A, B;
    
    cout << "Введите число A (большее число): ";
    cin >> A;
    cout << "Введите число B (меньшее число): ";
    cin >> B;
    
    if (A <= B) {
        cout << "Ошибка: A должно быть больше B!" << endl;
        return 1;
    }
    
    
    int result = minO(A, B);
    cout << "Минимальное количество операций: " << result << endl;
    
    cout << endl;
    
   
    
    
    return 0;
}
