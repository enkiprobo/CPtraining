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
  int s[n];
  for (int i = 0; i < n; i++) {
    cin >> s[i];
  }
  int d, m;
  cin >> d >> m;

  int counter = 0;
  for (int i = 0; i < n-(m-1); i++) {
    int sum = 0;
    for (int j = i; j < i+m; j++) {
      sum += s[j];
    }
    if (sum == d) {
      counter += 1;
    }
  }
  cout << counter;
}
