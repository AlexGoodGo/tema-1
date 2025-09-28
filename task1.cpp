#include <iostream>
using namespace std;

int main() {
  int x,y;
  cin >> x; 
  cin >> y ;
  if (x>y){
      cout << "блин а я играю не за викингов(" << endl;
      cout << x ;
  }
  if (x<y){
      cout << "ХА-ХА ты выбрал не ту цивилизацию" << endl;
      cout<< y ;
  }
  if (x==y){
      cout << "ого ты тоже выбрал викингов?"<< endl;
      cout << x<< "" << y ;
  }
  
  

}
