/**
 * Created By: Enki Probo S.
 * Description:
 *	Counting the biggest number
 *	from the input
 **/
#include <iostream>
using namespace std;

int main() {
  int n, max=0, counter=0, input;
  cin >> n;
  for ( int i = 0; i < n; i++ ) {
    cin >> input;
    if (input > max ) {
      max = input;
      counter = 1;
    }else if (input == max){
      counter++;
    }
  }
  cout << counter;
  return 0;
}
