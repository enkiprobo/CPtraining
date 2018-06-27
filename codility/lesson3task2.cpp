#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A){
    size_t size = A.size()+1;
    vector<bool> present(size);

    for (int i = 0; i < size-1; i++){
        present[A[i]-1] = true;
    }

    int idx = 0;
    while (present[idx] != false) {
        idx++;
    }
    return idx+1;
}

int main() {
    vector<int> quest({5,3,4,1});

    cout << solution(quest) << endl;

    return 0;
}