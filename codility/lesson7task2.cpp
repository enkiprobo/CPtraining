#include <iostream>
#include <vector>
using namespace std;

int solution(string &S) {
    vector<char> stack;
    size_t size = S.length();

    for (int i = 0; i < size; i++) {
        if (S[i] == ')' || S[i] == '}' || S[i] == ']') {
            if (stack.empty()) {
                return 0;
            }
            if (S[i] == ')' && stack.back() != '(' ) {
                return 0;
            } 
            if (S[i] == '}' && stack.back() != '{' ) {
                return 0;
            }
            if (S[i] == ']' && stack.back() != '[' ) {
                return 0;
            }

            stack.pop_back();
        } else {
            stack.push_back(S[i]);
        }
    }

    return stack.empty();
}

int main() {
    string S = "([)()]";

    cout << solution(S) << endl;

    return 0;
}