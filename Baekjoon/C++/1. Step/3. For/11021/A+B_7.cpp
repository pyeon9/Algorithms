#include <iostream>

using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    int A[T], B[T];
    for (int i = 1; i <= T; i++){
        cin >> A[i] >> B[i];
    }

    for (int i = 1; i <= T; i++){
        cout << "Case #" << i << ": " << A[i] + B[i] << '\n';
    }


    return 0;
}