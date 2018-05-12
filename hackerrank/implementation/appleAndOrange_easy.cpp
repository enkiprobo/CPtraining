/**
 * Created By: Enki Probo S.
 * Level: Easy
 * Description:
 *  calculate the number of apple or
 *  orange that fall into sam's house
 **/
#include <iostream>
using namespace std;

int main() {
  int s,t,a,b,m,n,d;
  cin >> s >> t >> a >> b >> m >> n;
  int countA=0, countO=0;
  for (int i = 0; i < m; i++) {
    cin >> d;
    int dist = a + d;
    countA += (s <= dist && dist <= t);
  }
  for (int i = 0; i < n; i++) {
    cin >> d;
    int dist = b + d;
    countO += (s <= dist && dist <= t);
  }

  cout << countA << endl;
  cout << countO << endl;
  return 0;
}
