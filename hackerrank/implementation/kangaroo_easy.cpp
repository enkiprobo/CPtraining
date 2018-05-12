/**
 * Created By: Enki Probo S.
 * Level: Easy
 * Description:
 *  Predict if two kangoroos will
 *  meet with their own start position
 *  and speed
 **/
#include <iostream>
using namespace std;

int main() {
  int x1,v1,x2,v2;
  const int cst = 10000;
  cin >> x1 >> v1 >> x2 >> v2;
  while (x1 != x2 && x1 <= cst && x2 <= cst){
    x1 += v1;
    cout << x1 << " ";
    x2 += v2;
    cout << x2 << endl;
  }
  cout << ((x1 <= cst && x2 <= cst)? "YES":"NO");
  return 0;
}
