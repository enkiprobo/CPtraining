#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A){
    size_t size = A.size();
    vector<int> present(size);

    for (int i = 0; i < size; i++){
        if (A[i] > 0 && A[i] <= size) {
            present[A[i]-1] = 1;
        }
    }

    int prod = 1;
    for (int i = 0; i < size; i++){
        prod *= present[i];
    }

    return prod;
}

int main() {
    vector<int> A({2,2,2});

    cout << solution(A) << endl;
    return 0;
}