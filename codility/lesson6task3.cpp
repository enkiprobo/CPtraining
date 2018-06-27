#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int solution(vector<int> &A) {
    size_t size = A.size();
    sort(A.begin(), A.end());

    int idx = size-1;
    while(idx > 1 && A[idx-1] > 0 && A[idx-2] > 0) {
        if (A[idx] - A[idx-1] - A[idx-2] < 0){
            return 1;
        }
        idx--;
    }
    return 0;
}

int main() {
    vector<int> A({10,50,5,1});

    cout << solution(A) << endl;
    return 0;
}