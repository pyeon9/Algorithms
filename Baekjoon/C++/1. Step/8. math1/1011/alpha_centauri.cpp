#include <iostream>
#include <cmath>

using namespace std;

// 1 -> 2 -> 3 -> 2 -> 1 과 같은 꼴로 이동 해야함
// 이런 경우 3이 최대 이동 속도(N)
// 위와 같은 경우 이동 횟수는 (2*N - 1)임
// 3 미만의 남는 거리는 규칙에 맞도록 사이에 '하나' 끼워 넣으면 됨
// 남은 거리가 3 이상인 경우 '하나 이상' 끼워 넣어야 하는데, 
// 이는 ceil(남은 거리 / N)으로 구할 수 있음
// 즉, 총 이동 횟수는 주석 3번째줄과 주석 6번째줄을 합하면 됨

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        long long x, y;
        cin >> x >> y;
        long long distance = y - x;
        long long N = 1;
        while (N*N <= distance){
            N++;
        }
        N--;

        long long left = distance - (N*N);

        long long move = (2*N - 1) + ceil((double)left / (double)N);

        cout << move << '\n';        
    }

    return 0;
}