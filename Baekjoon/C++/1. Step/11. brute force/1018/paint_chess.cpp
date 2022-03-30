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

    char refColor = board[0][0];
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

    vector<int> answer;
    for (int i = 0; i <= n-8; i++){
        for (int j = 0; j <= m-8; j++){
            int sum = 0;
            for (int x = i; x < i+8; x++){
                for (int y = j; y < j+8; y++){
                    sum += count[x][y];
                }
            }
            answer.push_back(min(sum, 64-sum));     // 8x8의 첫 값에 따라 다른 줄 알아, 첫 값을 기준으로 색칠하는 것으로 생각했지만 -> 첫 값이 0이면 sum, 1이면 64-sum
                                                    // 첫 값을 바꾸는 것이 더 최소가 될 수도 있음. 따라서 그냥 둘 중에 최솟값을 구하면 됨.
        }
    }

    // min_element는 주소값을 리턴하므로 *로 값을 받음
    // 따라서 min값의 인덱스를 구하는 것도 가능 -> 방법은 생각해보기
    cout << *min_element(answer.begin(), answer.end());

    return 0;
}