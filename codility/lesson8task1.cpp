#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A){
    int candidate, candidate_count = 0, candidate_idx;
    size_t size = A.size();

    for (int i = 0; i < size; i++){
        if (candidate_count == 0){
            candidate = A[i];
            candidate_idx = i;
            candidate_count++;
        } else {
            if (A[i] == candidate){
                candidate_count++;
            } else {
                candidate_count--;
            }
        }
    }
    if (candidate_count == 0){
        return -1;
    }

    int counter = 0;
    for (int i = 0; i < size; i++){
        counter += (A[i] == candidate);
    }
    if (counter <= size/2){
        return -1;
    }

    return candidate_idx;
}

int main() {
    vector<int> A({1,2,3,3,3,3});

    cout << solution(A) << endl;

    return 0;
}