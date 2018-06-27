#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> &A) {
    int now = 1000001, counter = 0;
    size_t size = A.size();

    sort(A.begin(), A.end());

    for (int i = 0; i < size; i++){
        if(A[i] != now) {
            counter++;
            now = A[i];
        }
    }

    return counter;
}

int main() {
    vector<int> A({});

    cout << solution(A) << endl;
    return 0;
}