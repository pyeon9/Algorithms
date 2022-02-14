#include <iostream>
#include <cmath>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;
    
    bool arr[n+1] = {0};            // 편의상 0포함 ~ n 까지의 인덱스를 가지는 bool 배열 생성
    fill_n(arr, n+1, 1);            // 전부 true를 의미하는 1로 초기화
    arr[0] = false;                 // 0은 false
    arr[1] = false;                 // 1도 소수가 아니므로 false

    for (int i = 2; i <= sqrt(n); i++){         // 2부터 시작, sqrt(n)까지 1씩 증가
        if (arr[i] == true){                    // i번째가 true면, i * 2부터 배수는 전부 false로 
            for (int j = i*2; j <= n; j += i){  // i * 2부터 i씩 증가 
                arr[j] = false;
            }
        }
    }

    for (int i = m; i <= n; i++){       // 출력은 m 부터 n 까지만
        if (arr[i] == true){            // true로 남아있는 것들만 출력
            cout << i << '\n';
        }
    }

    return 0;
}