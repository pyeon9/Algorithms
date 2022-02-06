#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    int countFive(0), countThree(0);
    while (true){
        if (N < 0){                     // 남은 개수가 음수가 되면 -1 출력하고 종료
            cout << -1;
            return 0;
        }

        if ((N % 5) == 0){              // 남은 개수가 5로 나누어 떨어지면 개수 계산하고 break
            countFive = (N / 5);
            break;
        }

        N -= 3;                         // 남은 개수가 5로 나누어 떨어지지 않으면 3을 빼고 count
        countThree++;
    }

    cout << countFive + countThree;

    return 0;
}