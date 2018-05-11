/**
 * Created By: Enki Probo S.
 * Description:
 * 	find a biggest and smallest 
 * 	value that calculated by
 * 	4 per 5 element from the
 * 	input
 **/
#include <iostream>
using namespace std;

int main() {
  long long int input[5];
  for ( int i = 0; i < 5; i++ ) {
    cin>>input[i];
  }
  for ( int i = 0; i < 4; i++ ) {
    int max = i;
    for ( int j = i+1; j<5; j++ ) {
      if (input[j] > input[max]){
        max = j;
      }
    }
    long long int temp = input[max];
    input[max] = input[i];
    input[i] = temp;
  }

  long long int min=0,max=0;
  for(int i = 0; i < 4; i++ ) {
    min += input[i+1];
    max += input[i];
  }
  cout << min << " " << max;
}
