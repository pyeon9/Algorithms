#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int A, B, V;
    cin >> A >> B >> V;

    int target = V - A;                         // 마지막 날 올라갈 거 미리 빼기
    int travel = A - B;                         // 하루 이동 거리
    int day = 0;
    if ((target % travel) == 0){                // 남은 거리가 하루 이동 거리로 나누어 떨어지면
        day = (target / travel) + 1;            // 마지막 날 더하기
    }
    else{                                       // 아닌 경우 하루 더해줘야 함
        day = ((target / travel) + 1) + 1; 
    }

    cout << day;

    return 0;
}