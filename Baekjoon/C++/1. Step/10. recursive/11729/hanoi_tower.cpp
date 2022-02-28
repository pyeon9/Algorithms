#include <iostream>
#include <vector>

using namespace std;

// vector를 그냥 전달하면 call by value, &를 붙여야 call by reference
void move(int n, int src, int dst, vector<pair<int, int>> &v){
    int other = 6 - src - dst;

    if (n == 1){                                    // 원판이 하나면 그냥 옮기면 됨
        v.push_back(make_pair(src, dst));
    }
    else if (n == 2){                               // 원판이 두개인 경우 옮기는 방법
        v.push_back(make_pair(src, other));         // 두개가 최소 단위로, 재귀적으로 해결 가능
        v.push_back(make_pair(src, dst));
        v.push_back(make_pair(other, dst));
    }
    // N이 3 이상인 경우 모든 해결책은 다음과 같음 (src: 1, dst:3, other:2)
    // 1. 1~N-1까지를 1에서 2로 이동
    // 2. 혼자 남은 N을 1에서 3으로 이동
    // 3. 1~N-1까지를 다시 2에서 3으로 이동
    // 위 과정을 N=2까지 재귀적으로 수행
    else{
        move(n-1, src, other, v);
        v.push_back(make_pair(src,dst));
        move(n-1, other, dst, v);
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;
    
    vector <pair<int, int>> record;                 // 결과를 저장할 vector 생성
    move(N, 1, 3, record);                          // 원판 개수, 출발점, 도착점, vector를 전달

    cout << record.size() << '\n';                  // vector의 크기가 옮긴 횟수 K
    for (pair<int, int> element : record){          // 수행 과정을 차례로 출력
        cout << element.first << ' ' << element.second << '\n';
    }

    return 0;
}