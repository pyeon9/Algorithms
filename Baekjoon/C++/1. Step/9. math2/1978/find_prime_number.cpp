#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int numbers[n];
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }

    int count = 0;
    for (int i = 0; i < n; i++){
        // 1은 소수가 아님
        if (numbers[i] == 1){
            continue;
        }
        // 2는 소수
        if (numbers[i] == 2){
            count++;
        }
        // 2가 아닌 짝수는 소수가 아님
        else if ((numbers[i] != 2) && (numbers[i] % 2 == 0)){
            continue;
        }
        // 홀수에 대해서
        else{
            // x-1 까지 할 필요 없고 x/2 까지만 하면됨
            // x/2보다 크면 나누어 떨어질리가 없음 (몫이 1과 2 사이)
            int half = numbers[i] / 2;
            bool prime = true;
            // 2부터 x/2까지 1씩 증가하면서 나누어보고
            // 나누어 떨어지면 소수가 아님 prime = false 처리
            for (int d = 2; d < half; d++){
                if (numbers[i] % d == 0){
                    prime = false;
                    continue;
                }
            }            

            // prime이 아직 true면 count 증가
            if (prime){
                count++;
            }
        }
    }

    cout << count;

    return 0;
}