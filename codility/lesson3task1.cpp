#include <iostream>
using namespace std;

int solution(int X, int Y, int D){
    return ((Y - X) / D) + (1 * ((Y - X) % D > 0));
}

int main() {
    int X, Y, D;
    cin >> X >> Y >> D;
    cout << solution(X, Y, D) << endl;
}