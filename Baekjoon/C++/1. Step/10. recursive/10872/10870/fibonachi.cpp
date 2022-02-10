#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n == 0){
        return 0;
    }
    if (n == 1){
        return 1;
    }
    else{
        return (fibonacci(n-2) + fibonacci(n-1));
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    cout << fibonacci(n);

    return 0;
}