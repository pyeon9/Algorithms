#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cout.precision(4);                  // 오차가 10^-2까지 허용되므로 넉넉히 소수 4번째 자리까지 출력

    int N;
    cin >> N;

    int scores[N];
    int max(-1);                        // 최고 점수 -1점 초기화
    for (int i = 0; i < N; i++){        // 점수 입력 받으며 최고 점수 갱신
        cin >> scores[i];
        if (scores[i] > max){
            max = scores[i];
        }
    }

    double sum = 0;                     // 새로운 점수의 합을 담을 변수
    for (double s : scores){            // 모든 점수에 대해 새로운 점수로 변환하여 더하기. s를 double로 받아와 나누었을 때 몫만 남지 않도록!
        sum += (s / max) * 100;
    }

    cout << (sum / N);                  // 새로운 점수의 합을 N으로 나누어 평균 출력


    return 0;
}