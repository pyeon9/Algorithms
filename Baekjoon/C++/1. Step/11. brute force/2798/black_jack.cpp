#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    int card[n];    // n개 카드 저장할 배열
    for (int i = 0; i < n; i++){    // 하나씩 채우기
        cin >> card[i];
    }
    sort(card, card+n);     // 오름차순 정렬

    int answer = 0;         // 정답값 담을 변수
    // 첫 수부터 세개를 고름
    // 순서는 abc, abd, abe ... abz, bcd, bce, ... 이런 식으로
    for (int i = 0; i <= n-2; i++){
        int max = 0;    // max 초기화 후
        for (int j = i+1; j <= n-1; j++){
            for (int k = j+1; k<=n; k++){
                max = card[i] + card[j] + card[k];      // 세 숫자를 더해서
                if (max > m){       // m을 초과하면 종료
                    break;
                }
                else if (max > answer){     // m보다 작은 경우 현재까지의 최댓값인 answer보다 크면 업데이트
                    answer = max;
                }
            }
        }
    }

    cout << answer;     // 위 loop 종료 시 answer의 값이 가장 m에 가까운 값

    return 0;
}