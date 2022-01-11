#include <iostream>

using namespace std;
int main(){
    int n;
    int S(0);
    
    cin >> n;
    for (int i = 1; i <= n; i++){
        S += i;
    }
    cout << S;

    return 0;
}