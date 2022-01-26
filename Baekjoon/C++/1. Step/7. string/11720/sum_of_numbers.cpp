#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    string numbers;
    cin >> numbers;

    // 위 두 줄은 아래 두 줄과 같음
    // char numbers[N];
    // cin >> numbers;

    int sum = 0;
    for (char s : numbers){
        sum += (int)(s - '0');
    }

    cout << sum;

    return 0;
}