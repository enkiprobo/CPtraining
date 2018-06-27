#include <vector>
#include <iostream>
using namespace std;

vector<int> solution(vector<int> &A, int K){
    size_t size = A.size();
    vector<int> result(size);
    for (int i = 0; i < size; i++) {
        result[(i+K) % size] = A[i];
    }
    return result;
}

int main() {
    vector<int> vec({1,2,3,4,5});
    int K = 3;

    vector<int> result = solution(vec, K);
    size_t size_r = result.size();
    for (int i = 0; i < size_r; i++) {
        cout << result[i] << ", ";
    }
    cout << endl;
    return 0;
}