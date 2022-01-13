#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);

    int N, X;
    cin >> N >> X;

    int A[N];
    for(int i = 0; i < N; i++){
        cin >> A[i];
    }

    for(int j = 0; j < N; j++){
        if(A[j] < X){
            cout << A[j] << ' ';
        }
    }

    return 0;
}