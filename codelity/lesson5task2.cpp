#include <iostream>
#include <vector> 
using namespace std;

int solution(vector<int> &A){
    int n_pairs = 0, same = 0;
    size_t size = A.size();

    for (int i = 0; i < size; i++) {
        if (A[i] == 0){
            same++;
        } else {
            n_pairs += same;
        }
        if (n_pairs > 1000000000){
            return -1;
        }
    }
    return n_pairs;
}

int main() {
    vector<int> A({0,1,0,1,1});

    cout << solution(A) << endl;
    return 0;
}