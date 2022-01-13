# include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);                           // C와 C++ 버퍼 분리. 속도 빠르게

    int N;
    cin >> N;                                                   // 첫 숫자 입력 받음

    int L = 0;      
    int prevNumber = N;                                         // 길이는 0으로 초기화, 입력은 prevNumber에 할당
    while(true){
        int prevR, nextR;
        if (prevNumber < 10){                                   // 이전(현재) 숫자가 10이하면 오른쪽 수는 prevNumber
            prevR = prevNumber;
        }
        else{   
            prevR = prevNumber % 10;                            // 아니면 10으로 나눈 나머지가 오른쪽 수
        }
        int sum = (prevNumber / 10) + (prevNumber % 10);        // 10으로 나눈 몫과 나머지를 더하면 각 자릿수의 합
        nextR = sum % 10;                                       // 다음수의 오른쪽 수는 합을 10으로 나눈 나머지
        int nextNumber = prevR * 10 + nextR;                    // (이전 오른쪽 수 x 10) + 다음 오른쪽 수 하면 다음 숫자
        L = L + 1;                                              // 계산 한 번 했으니 L 하나 증가

        if (nextNumber == N){                                   // 다음 수가 처음 입력과 같다면 출력하고 종료
            cout << L;
            break;
        }
        prevNumber = nextNumber;                                // 아니라면 다음 계산을 위해 nextNumber를 prevNumber에 대입
    }
    
    return 0;
}