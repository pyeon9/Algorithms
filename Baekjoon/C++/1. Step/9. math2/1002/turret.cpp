#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        // x, y 좌표는 음수일 수도 있으므로 절댓값 취해야 함
        float dist = sqrt(abs(x2-x1)*abs(x2-x1) + abs(y2-y1)*abs(y2-y1));
        float rr = r1 + r2;

        // 원의 중심이 같을 때
        if ((x1 == x2) && (y1 == y2)){
            // 반지름도 같다면 같은 원이므로 개수는 무한대
            if (r1 == r2){
                cout << -1 << '\n';
            }
            // 반지름이 다르다면 안 겹치므로 개수는 0
            else{
                cout << 0 << '\n';
            }
        }

        // 작은 원의 중심이 큰 원 안에 있을 때
        else if ((dist < r1) || (dist < r2)){
            int maxR = max({r1, r2});
            int minR = min({r1, r2});
            // 큰 원 안에 작은 원
            if (maxR > (dist + minR)){
                cout << 0 << '\n';
            }
            // 내접
            else if (maxR == (dist + minR)){
                cout << 1 << '\n';
            }
            else{
                cout << 2 << '\n';
            }

        }

        // 두 원의 중심이 서로의 밖에 있을 때
        else{
            // 닿지 않음
            if (dist > rr){
                cout << 0 << '\n';
            }
            // 외접
            else if (dist == rr){
                cout << 1 << '\n';
            }
            // 두 점에서 교접
            else{
                cout << 2 << '\n';
            }
        }
        
    }

    return 0;
}