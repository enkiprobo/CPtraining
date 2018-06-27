#include <iostream>
#include <vector>
using namespace std;

int solution(vector<int> &A, vector<int> &B) {
    size_t size = A.size();
    vector<int> stack;

    for (int i = 0; i < size; i++) {
        if (stack.empty()) {
            stack.push_back(i);
        } else {
            if (B[i] == 0) {
                while (!stack.empty() && B[stack.back()] == 1 && A[stack.back()] < A[i]){
                    stack.pop_back();
                }

                if (stack.empty() || B[stack.back()] == 0) {
                    stack.push_back(i);
                }
            } else {
                stack.push_back(i);
            }
        }
    }

    return stack.size();
}

int main() {
    vector<int> A({4,6,2,1,5,7});
    vector<int> B({1,0,1,1,1,0});

    cout << solution(A, B) << endl;
    return 0;
}