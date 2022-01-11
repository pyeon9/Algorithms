#include <iostream>

using namespace std;
int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    
    int A, B;
    int S[T];

    for (int i = 0; i < T; i++){
        cin >> A >> B;
        S[i] = A + B;
    }

    for (int i = 0; i < T; i++){
        cout << S[i] << '\n';
    }


    return 0;
}