#include <iostream>
#include <cmath>

using namespace std;

bool prime(int x){
    if (x < 2){
        return false;
    }

    else{
        for (int i = 2; i <= sqrt(x); i++){
            if (x % i == 0){
                return false;
            }
        }

        return true;
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;

    int size = n - m + 1;
    bool arr[size] = {0};
    fill_n(arr, size + 1, 1);

    for (int i = m; i <= n; i++){
        if (prime(i)){
            cout << i << '\n';
        }
    }


    return 0;
}