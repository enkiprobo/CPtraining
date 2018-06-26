#include <iostream>
#include <vector> 
using namespace std;

int solution(int X, vector<int> &A){
    vector<int> idx_present(X, -1);
    size_t size = A.size();

    for (int i = 0; i < size; i++) {
        if (idx_present[A[i]-1] == -1){
            idx_present[A[i]-1] = i;
        }
    }

    int best = -1;
    for (int i = 0; i < X; i++){
        if (idx_present[i] == -1){
            return -1;
        }
        if (idx_present[i] > best) {
            best = idx_present[i];
        }
    }
    return best;
}

int main() {
    vector<int> vec({5,3,1,4,2,3,5,4});
    int X = 5;
    cout << solution(X, vec) << endl;
    return 0;
}