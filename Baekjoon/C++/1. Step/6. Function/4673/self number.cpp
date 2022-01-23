#include <iostream>
#define N 10001
using namespace std;


int calculateDn(int n){
    int dn = n;                     // 1. dn을 n으로 초기화

    while (true){
        if (n == 0){                // 0이 되면 종료
            break;
        }
        dn += n % 10;               // 1의 자리수 더하고
        n /= 10;                    // 끝자리수 없애기
    }

    return dn;
}

bool* findSelfNumber(){
    static bool candidate[N];                   // 함수에서 return해서 main에서 쓰려면 static으로 선언해야 함
    fill(candidate, candidate + sizeof(candidate)/sizeof(bool), true);       // 0~10000의 자리를 갖는 배열 생성, true 초기화 
    for (int i = 0; i < N; i++){                // 0~10000 돌면서 계산된 dn은 false으로 변경
        int dn = calculateDn(i);

        if (dn < N){                            // dn이 10000보다 클 수도 있으니
            candidate[dn] = false;
        }
    }
    
    return candidate;
}


int main (){
    ios_base::sync_with_stdio(false);

    bool *ans = findSelfNumber();
    for (int i = 0; i < N; i++){                // 돌면서 true인 숫자 출력
        if (ans[i] == true){
            cout << i << '\n';
        }
    }

    return 0;
}