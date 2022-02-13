#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int m, n;
    cin >> m >> n;

    vector <int> v;         // 소수를 담는 벡터
    for (int i = m; i <= n; i++){
        if (i == 1){        // 1은 소수 아님
            continue;
        }
        if (i == 2){        // 2는 소수니까 벡터에 담고 continue
            v.push_back(i);
            continue;
        }

        // 숫자 x에 대해서 x-1까지 나눌 필요 없고
        // x/2 까지만 나눠보면 됨
        int half = i/2;
        bool prime = true;
        for (int j = 2; j <= half; j++){
            // 나누어 떨어지면 prime은 false
            if (i % j == 0){
                prime = false;
                continue;
            }
        }
        // prime이 true면 소수란 얘기이므로 벡터에 push_back
        if (prime){
            v.push_back(i);
        }
    }

    // 벡터가 비어있으면 -1 출력
    if (v.size() == 0){
        cout << -1;
    }
    // 벡터에 원소가 있다면 합과 최솟값 출력
    // 합은 <numeric>의 accumulate로 구함
    // 마지막 인자는 sum의 init 값
    // 작은 수부터 구했으므로 최솟값은 첫번째원소
    else{
        cout << accumulate(v.begin(), v.end(), 0) << '\n';
        cout << v[0];
    }

    return 0;
}