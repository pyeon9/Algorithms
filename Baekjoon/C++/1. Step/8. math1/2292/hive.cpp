#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    N--;                        // 처음 1 빼기
    if (N == 0){                // 입력이 1이면 1 출력, 종료
        cout << 1;
        return 0;
    }
    int iter = 0;
    while (true){
        if (N <= 0){            // N이 0 또는 음수가 되면 종료
            break;
        }
        N -= (6 * iter);        // 6각형 중심부터 6, 12, 18...이므로 iter증가해가면서 빼기
        iter++;
    }

    cout << iter;

    return 0;
}