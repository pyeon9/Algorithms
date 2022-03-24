#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    // 숫자 자리수 세기
    int count = 0;
    int m = n;
    while(true){
        m = m / 10;
        count++;
        if (m == 0){
            break;
        }
    }

    int generator = -1;     // 생성자 -1로 초기화
    int lower = n - 9*count;    // 가장 작은 생성자 찾기 위해 1까지 갈 필요가 없음
                                // 각 자리에 최대 숫자가 9이므로 lower까지만 체크해보면 됨
    for (int i = n; i >= lower; i--){
        int sum = i;
        int j = i;
        while (true){
            sum += j % 10;
            j /= 10;
            if (j==0){
                break;
            }
        }

        // 원래 수 + 각자릿수 해서 n과 같으면 생성자
        if (sum == n){
            generator = i;
        }
    }

    if (generator == -1){       // 생성자 없었으면 0 출력
        cout << 0;
    }
    else{
        cout << generator;
    }


    return 0;
}