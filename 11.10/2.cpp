#include <iostream>

using namespace std;

int main(){
    int k,n;
    cout<<"введите n";
    cin>>n;
    int q= n*2;
    int och[q];
    cout << "vvedite poriadok ocheredi";
    for (int i = 0; i < n; i++ ){
        cin >> och[i];
    }
  cout << "Введите количество пуговиц: ";
    cin >> k;
    while (k > n){
        k -= n;
    }
    for (int i = n - k; i < n; i++ ){
        cout << och[i] << " ";
    }
    for (int i = 0; i < n - k;i ++){
        cout << och[i] << " ";
    }
}
