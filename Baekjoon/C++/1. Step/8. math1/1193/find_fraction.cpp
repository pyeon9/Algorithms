#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int X;
    cin >> X;

    int iter = 1;
    int remainder = 0;
    while (true){                           // 이 문제는 1, 2, 3, 4 ... 로 증가
        X -= iter;                          // iter++ 해가며 X에서 빼서 몇 번째 대각선인지 파악
        if (X <= 0){                        // X가 0 또는 음수가 되면 끝
            remainder = X + iter;           // 마지막 대각선에 몇 번째인지 알기 위해 remainder 저장
            break;
        }

        iter++;
    }

                                            // 우상향 방향인 홀수 번째 줄 기준
    int numerator = iter;                   // 분자는 iter, 분모는 1로 초기화
    int denominator = 1;
    while (true){
        if (remainder == 1){                // remainder가 1이면 처음 값 -> 종료
            break;
        }

        numerator--;                        // 남은 remainder 크기 만큼 분자는 감소, 분모는 증가시키기
        denominator++;

        remainder--;   
    }

    if ((iter % 2) == 0){                   // 짝수 번째 줄은 반대 방향(좌하향)이므로 분모 분자 바꿔주기
        numerator ^= denominator;           // 비트 연산 활용 두 값 바꾸기
        denominator ^= numerator;
        numerator ^= denominator;
    }

    cout << numerator << '/' << denominator;

    return 0;
}