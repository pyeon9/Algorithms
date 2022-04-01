#include <iostream>
#define MAX 10001

using namespace std;

// int는 4byte, 10,000,000개 저장하면 40MB이다.
// 문제의 8MB 메모리를 초기화 하므로 다 저장할 수는 없고
// 개수만 count했다가 출력해준다.
// 각 수는 최대 10,000이므로 40KB로 해결 가능 
int main(){
    cin.tie(NULL); 
    cout.tie(NULL);
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int count[MAX];
    fill(count, count + MAX, 0);

    for (int i = 0; i < n; i++){
        int a;
        cin >> a;       // 수를 입력받고
        count[a]++;     // 카운트
    }

    // i 1부터 시작해서 count된 만큼 출력
    for(int i = 1 ; i < MAX; i++){
        for (int j = 0; j < count[i]; j++){
            cout << i << "\n";
        }
    }

    return 0;
}