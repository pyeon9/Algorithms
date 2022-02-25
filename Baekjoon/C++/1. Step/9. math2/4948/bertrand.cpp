#include <iostream>
#include <cmath>
#include <numeric>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true){
        int n;
        cin >> n;
        if (n == 0){            // 0은 입력의 마지막
            break;
        }
        
        int size = 2*n + 1;         // 0~2n 까지 bool 정보를 담을 배열 생성
        bool arr[size] = {0};       
        fill_n(arr, size, 1);       // 모두 true로 초기화 후
        arr[0] = false;             // 0과 1은 소수가 아니므로 0으로 (나중에 n~2n 사이에서 합을 구할 것이므로 안해도 무방)
        arr[1] = false;
        for (int i = 2; i <= sqrt(2*n); i++){               // 소수를 판단할 땐 root(N)까지의 수로 나눠보면 됨
            for (int j = 2*i; j <= 2*n; j += i){            // 에라토스테네스의 체의 원리 활용
                if (arr[j] != 0){                           // true로 되어 있다면 false로 변경
                    arr[j] = 0;
                }
            }
        }
        // 'n보다 크고 2n보다 작거나 같은' 이므로 n+1부터이며, 
        // end 조건은 배열의 끝 다음 값을 가리켜야 하므로 2*n+1
        int arrSum = accumulate(arr + n+1, arr + 2*n+1, 0);    
        cout << arrSum << '\n';
    }

    return 0;
}