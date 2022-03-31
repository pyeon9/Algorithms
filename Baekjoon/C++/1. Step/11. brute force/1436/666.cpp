#include <iostream>

using namespace std;

// n을 10씩 나눠가며 1000으로 나눴을 때 666이 되면 true 리턴
// n이 0 될때까지 666 안되면 없는것이므로 false 리턴
bool check(int n){
    while (n != 0){
        int remainder = n % 1000;
        if (remainder == 666){
            return true;
        }
        n /= 10;
    }
    return false;
}


int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int count = 0, i = 666;     // 첫 값인 666부터 시작
    while (count != n){
        bool found = check(i);  // 체크해보고
        if (found) count++;     // 666 있으면 count++
        i++;
    }
    
    cout << i-1;        // 마지막에 i++하고 끝나니까 i-1 출력

    return 0;
}