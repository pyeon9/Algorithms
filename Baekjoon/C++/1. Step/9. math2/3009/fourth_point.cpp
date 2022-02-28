#include <iostream>

using namespace std;

int main(){
    int A[3] = {0};
    int B[3] = {0};

    for (int i = 0; i < 3; i++){
        cin >> A[i] >> B[i];
    }

    // 네 번째 점의 x, y 좌표를 찾기 위해서는
    // 이미 입력 받은 세 좌표 중 한 번만 나타난 숫자를 찾으면 됨
    // 같은 숫자를 XOR 연산하면 0이 되므로, 세 숫자를 XOR 연산하면 
    // 한 번만 나타난 숫자가 남음
    // 0과 XOR하면 자기 자신이 나오므로 초기화는 0으로
    int x = 0;
    for (int a : A){
        x ^= a;
    }
    int y = 0;
    for (int b : B){
        y ^= b;
    }

    cout << x << ' ' << y;

    return 0;
}