#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A){
    int sum = 0;
    size_t size = A.size();

    for (int i = 0; i < size; i++) {
        sum += A[i];
    }

    int minus = A[0], min = 100000001;
    for (int P = 1; P < size; P++) {
        int diff = abs(minus - (sum - minus));
        if (diff < min) {
            min = diff;
        }
        minus += A[P];
    }
    return min;
}

int main() {
    vector<int> vec({3,1,2,4,3});

    cout << solution(vec) << endl;
    return 0;
}