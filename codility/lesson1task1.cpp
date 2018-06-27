#include <iostream>
using namespace std;

int solution(int N){
    int best = 0, temp = 0, n1 = 0;
    while(N > 0) {
        if ( N % 2 == 0 ) {
            temp++;
        } else {
            n1++;
            if ( temp > best && n1 > 1 ){
                best = temp;
            } 
            temp = 0;
        }
        N /= 2;
    }
    return best;
}

int main() {
    int N;
    cin >> N;
    cout << solution(N) << endl;
    return 0;
}
