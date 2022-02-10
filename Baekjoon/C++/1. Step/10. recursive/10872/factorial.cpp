#include <iostream>

using namespace std;

int factorial(int number){
    if ((number == 0) or (number == 1)){
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
}

int main(){
    int N;
    cin >> N;

    cout << factorial(N);

    return 0;
}