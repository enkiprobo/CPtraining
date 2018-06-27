#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    size_t size = A.size();
    sort(A.begin(), A.end());

    int big = A[size-1]*A[size-2]*A[size-3], minus = A[0]*A[1]*A[size-1];
    return ( big >= minus) ? big : minus;
}

int main() {
    vector<int> A({-3, -10, 2, -2, 5, 6});

    cout << solution(A) << endl;
    return 0;
}