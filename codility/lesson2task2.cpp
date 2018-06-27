#include <iostream> 
#include <vector>
using namespace std;

int solution(vector<int> &A){
    size_t size = A.size();
    int xor_result = 0;

    for (int i = 0; i < size; i++){
        xor_result ^= A[i];    
    }

    return xor_result;
}

int main() {
    vector<int> A({9,3,9,3,9,7,9});

    cout << solution(A) << endl;
    return 0;
}