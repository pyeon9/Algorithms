#include <iostream>

using namespace std;

// 'A' -> 65 (ASCII)

int main(){
    ios_base::sync_with_stdio(false);

    string word;
    cin >> word;

    int time = 0;                       // 시간
    int order = 0;                      // 알파벳이 다이얼 몇 번인지 
    for(char c : word){
        int alpha = c - 'A';            // 'A'를 기준으로 몇 번째 알파벳인지
        order = alpha / 3;              // 예외를 제외하고 3개씩 한 칸 차지하므로 3으로 나눈 몫으로 순서 계산
        if (c >= 'S'){                  // PQRS는 4개가 한 칸. S부터 1 빼기
            order = (alpha - 1) / 3;
        }
        if (c >= 'Z'){                  // WXYZ도 4개가 한 칸. Z는 2 빼기
            order = (alpha - 2) / 3;
        }
        time += order + 3;              // A가 0으로 계산되는데 다이얼은 2이며, n까지 가는데 n+1초가 걸리므로 +3 해주기
    }

    cout << time << '\n';

    return 0;
}