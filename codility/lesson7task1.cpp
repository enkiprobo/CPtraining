#include <iostream>
using namespace std;

int solution(string &S) {
    int proper = 0;
    size_t size = S.length();

    for (int i = 0; i < size; i++) {
        if (S[i] == '(') {
            proper += 1;
        } else if (S[i] == ')') {
            proper -= 1;
        }

        if (proper < 0) {
            return 0;
        }
    }

    return (proper == 0)  * 1;
}

int main() {
    string s = "())";

    cout << solution(s) << endl;

    return 0;
}