#include <iostream>
#include <vector>
using namespace std;

vector<int> solution(int N, vector<int> &A){
    int best_temp = 0, best_note = 0, best_when = -1;
    vector<int> when(N, -1);
    vector<int> counter(N);
    size_t size = A.size();

    for (int i = 0; i < size; i++) {
        if (A[i] == N+1){
            best_note = best_temp;
            best_when = i;
        } else {
            if (when[A[i]-1] < best_when){
                counter[A[i]-1] = best_note + 1;
            } else {
                counter[A[i]-1] += 1;
            }
            when[A[i]-1] = i;

            if (counter[A[i]-1] > best_temp){
                best_temp = counter[A[i]-1];
            }
        }
    }
    size_t size_c = counter.size();
    for (int i = 0; i < size_c; i++){
        if (when[i] < best_when) {
            counter[i] = best_note;
        }
    }

    return counter;

}

int main() {
    vector<int> A({2,3,2,4,1,1,4,1});
    int N = 3;

    vector<int> result = solution(N, A);
    for (int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}