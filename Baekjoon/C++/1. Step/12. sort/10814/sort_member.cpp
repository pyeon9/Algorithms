#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<int, pair<int, string>> a, pair<int, pair<int, string>> b){
    if (a.second.first == b.second.first){        // 나이가 같으면
        return a.first < b.first;                 // 가입순으로. 인덱스 오름차순
    }
    else    return a.second.first < b.second.first;     // 나이 증가 순
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, pair<int, string>>> v;    // <인덱스, <나이, 이름>>
    for (int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        v.push_back(make_pair(i, make_pair(age, name)));
    }

    sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++){
        cout << v[i].second.first << ' ' << v[i].second.second << '\n';
    }

    return 0;
}