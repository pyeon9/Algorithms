#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int A, B, C;
    cin >> A >> B >> C;

    if ((C - B) <= 0){              // (C - B)가 0 이하면 손익분기점 도달 불가
        cout << -1;
    }
    else{
        int n = (A / (C - B)) + 1;       // 방정식 정리 +1 해서 올림으로 하면 '이상' 조건 구현 가능
        cout << n;
    }

    return 0;
}