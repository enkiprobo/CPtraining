#include <iostream> 
#include <vector>
using namespace std;

int solution(vector<int> &A){
    size_t size = A.size();
    vector<bool> present(size);

    for (int i = 0; i < size; i++){
        if (A[i] <= size && A[i] > 0){
            present[A[i]-1] = true;
        }
    }

    for (int i = 0; i < size; i++){
        if (present[i] == false){
            return i+1;
        }
    }
    return size+1;
}

int main() {
    vector<int> A({1,2,3});

    cout << solution(A) << endl;

    return 0;
}