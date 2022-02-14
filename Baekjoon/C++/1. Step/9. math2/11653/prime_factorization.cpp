#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    
    if (n==1){                              // n이 1이면 아무것도 출력하지 않고 종료
        return 0;
    }

    vector <int> v;                         // 소인수를 담을 벡터
    int divisor = 2;                        // 2부터 나누기 시작
    while (true){
        if (n == 1){                        // n이 1이 되면 종료
            break;
        }
        else if (n % divisor == 0){         // 나누어 떨어지면 벡터에 담고 n 업데이트
            v.push_back(divisor);
            n /= divisor;
        }
        else{                               // 나누어 떨어지지 않으면 나누는 수 1 증가
            divisor++;
        }
    }

    for (int e : v){                        // 벡터에 담긴 원소 출력. 작은 수부터 나눴으므로 자연스럽게 오름차순
        cout << e << '\n';
    }

    return 0;
}