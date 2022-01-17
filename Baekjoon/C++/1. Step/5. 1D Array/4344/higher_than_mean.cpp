#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cout << fixed;                      // 소수점 고정
    cout.precision(3);                  // 3자리로. 위에 거 안하면 정수부 합쳐서 n자리 나옴

    int C;
    cin >> C;

    for (int i = 0; i < C; i++){
        int N;
        cin >> N;

        int scores[N];
        float sum(0), mean(0);
        for (int j = 0; j < N; j++){
            cin >> scores[j];
            sum += scores[j];
        }
        mean = sum / N;

        int count(0);
        for (int s : scores){
            if (s > mean){
                count++;
            }
        }

        float ratio = ((float)count / N) * 100;
         cout << ratio << '%' << '\n';

    }

    return 0;
}