#include <iostream>
using namespace std;

int solution(int A, int B, int K) {
    return ((B / K) - (A / K)) + (1 * (A % K == 0));
}

int main() {
    int A, B, K;
    cin >> A >> B >> K;

    cout << solution(A, B, K) << endl;
    return 0;
}