#include <iostream>
#include <vector> 
using namespace std;

int solution(vector<int> &H) {
    size_t size = H.size();
    vector<int> stack;
    int counter = 0;

    for (int i = 0; i < size; i++) {
        if (stack.empty()) {
            stack.push_back(H[i]);
            counter++;
        } else {
            while (!stack.empty() && stack.back() > H[i]) {
                stack.pop_back();        
            }
            if (stack.empty() || stack.back() < H[i]) {
                stack.push_back(H[i]);
                counter++;
            }
        }
    }

    return counter;
}

int main() {
    vector<int> H({2,2,2,2,2,3,2,1,2,1});

    cout << solution(H) << endl;
    return 0;
}