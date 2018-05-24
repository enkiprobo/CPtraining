/**
 * Created By: Enki Probo S.
 * Level: Easy
 * Description:
 *   
 **/
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ar[5]={0,0,0,0,0}, max=0;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    ar[input-1] += 1;
    if (ar[input-1] > max) {
      max = ar[input-1];
    }
  }
  int id=0;
  while (ar[id] != max) {
    id++;
  }
  cout << (id+1);
  return 0;
}
