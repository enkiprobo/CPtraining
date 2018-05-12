/**
 * Created By: Enki Probo S.
 * Level: Easy
 * Description:
 *  round up the input
 *  to the next multiple of 5
 *  if the value of the input is
 *  more than 37 and the difference
 *  with the next multiple of 5 is
 *  more than 3
 **/
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int input;
    cin >> input;
    if (input >=38) {
      int mod = input % 5;
      cout << ((mod > 2) ? input + 5 - mod : input )<< endl;
    } else {
      cout << input << endl;
    }
  }
  return 0;
}
