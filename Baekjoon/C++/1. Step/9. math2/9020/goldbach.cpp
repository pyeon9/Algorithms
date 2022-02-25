#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

// 에라토스테네스의 체로 소수 찾기
vector <int> makePrimeVector(int N){
    int arr[N+1] = {0};
    fill_n(arr, N+1, 1);
    arr[0] = 0;
    arr[1] = 0;
    for (int i = 2; i <= sqrt(N+1); i++){
        for (int j = 2*i; j < N+1; j += i){
            if (arr[j] == 1){
                arr[j] = 0;
            }
        }
    }

    vector <int> v;
    for (int i = 0; i <= N; i++){
        if (arr[i] == 1){
            v.push_back(i);
        }
    }

    return v;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // 10,000 까지 소수를 구함
    vector <int> v = makePrimeVector(10000);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int n;
        cin >> n;
        
        vector <pair<int, int>> ans;            // 골드바흐 파티션 두 수를 담을 vector 생성
        for (int a : v){                        // 소수 vector의 앞에서부터 원소를 꺼냄
            if (a > n/2){                       // n의 절반을 넘어서면 앞 뒤 순서만 바뀌는 것이므로 break
                break;
            }
            int b = n - a;                      // n에서 꺼낸 소수를 빼서 남은 값을 구함

            // 벡터에서 element(b)를 찾고 찾은 첫 번째 원소에 대한 iterator를 return
            // 못 찾으면 v.end()와 같은 iterator를 return
            // 남은 값인 b를 소수 vector에서 찾고 있다면 (a, b) pair를 ans에 입력
            if(find(v.begin(), v.end(), b) != v.end()){
                ans.push_back(make_pair(a, b));
            }
        }

        // ans 벡터가 비어있지 않다면 가장 마지막 값을 출력
        // 문제 조건에 조합이 여러 개 있다면 두 수의 차이가 가장 작은 쌍을 출력
        // 한 수가 절반에 가까울 수록 다른 수도 절반에 가까워져 차이가 가장 작아짐
        // 탐색 시 가장 작은 수부터 n의 절반까지 탐색했으므로 가장 나중에 들어간 조합이 차이가 가장 작은 조합임
        if (!ans.empty()){
            pair<int, int> element = ans.back();
            cout << element.first << ' ' << element.second << '\n';
        }
    }

    return 0;
}