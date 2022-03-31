#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n, m;
    cin >> n >> m;
    char board[n][m];
    int count[n][m] = {0,};
    fill(&count[0][0], &count[n][m], 0);        // 위 줄에서 전체가 0으로 초기화되지 않아서 수행. 사용법 유의할 것
    for (int i = 0; i < n; i++){
        cin >> board[i];
    }

    char refColor = board[0][0];        // 맨 첫값을 기준으로 삼고 체스판에 와야하는 색이 아니면 count++
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if ((i+j) % 2 == 0){      // 짝수
                if (board[i][j] != refColor){
                    count[i][j]++;
                }
            }
            else{
                if (board[i][j] == refColor){
                    count[i][j]++;
                }
            }
        }
    }

    int sum = 0;
    vector<int> answer;
    for (int i = 0; i <= n-8; i++){     // 8x8만 보면서 다른 부분을 찾아 sum을 계산하고 answer 벡터에 하나씩 저장
        for (int j = 0; j <= m-8; j++){
            for (int x = i; x < i+8; x++){
                for (int y = j; y < j+8; y++){
                    sum += count[x][y];
                }
            }
            answer.push_back(min(sum, 64-sum));     // 8x8의 첫 값에 따라 다른 줄 알아, 첫 값을 기준으로 색칠하는 것으로 생각했지만 -> 첫 값이 0이면 sum, 1이면 64-sum
                                                    // 첫 값을 바꾸는 것이 더 최소가 될 수도 있음. 따라서 그냥 둘 중에 최솟값을 구하면 됨.
            sum = 0;        // 초기화
        }
    }

    // min_element는 주소값을 리턴하므로 *로 값을 받음
    // 따라서 min값의 인덱스를 구하는 것도 가능 -> 방법은 생각해보기
    cout << *min_element(answer.begin(), answer.end());     // 여러 값 중 최소를 출력

    return 0;
}