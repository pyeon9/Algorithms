#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    if (a.first == b.first)     return a.second < b.second;     // x좌표가 같으면 y좌표가 증가하는 순
    else    return a.first < b.first;                           // 아니면 x좌표가 증가하는 순으로
}


int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> v;           // 좌표를 담을 pair 벡터
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));   // 각 좌표를 pair로 하여 벡터에 저장
    }

    sort(v.begin(), v.end(), compare);

    for (pair<int, int> p : v){
        cout << p.first << ' ' << p.second << '\n';
    }

    return 0;
}