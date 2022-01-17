#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    string ox;
    for (int i = 0; i < N; i++){
        cin >> ox;

        int score(0);                           // 점수 계산
        int consecutive(0);                     // 몇 번 연속으로 나왔는지 계산
        for (char c : ox){
            if (c == 'O'){                      // 해당 문제를 맞췄다면 consecutive++ 하여 score에 더하기. 연속으로 맞추면 반영되어 score 오름
                consecutive++;
                score += consecutive;
            }
            else{                               // 틀린 문제 나오면 consecutive를 0으로 초기화하여 다시 1점부터
                consecutive = 0;
            }

        }

        cout << score << '\n';
    }

    return 0;
}