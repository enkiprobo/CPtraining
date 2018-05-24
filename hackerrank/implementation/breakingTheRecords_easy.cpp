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
  int input, min, max, countMin=0, countMax=0;
  cin >> input;
  min = max = input;
  for (int i = 1; i < n; i++) {
    cin >> input;
    if (input > max) {
      max = input;
      countMax +=1;
    }
    if (input < min) {
      min = input;
      countMin +=1;
    }
  }
  cout << countMax << " " << countMin;
  return 0;
}
