#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool compare(pair<int, string> a, pair<int, string> b){
    return a.first < b.first;     // 나이 증가 순   나이 같은 경우는 stable_sort에 의해 정렬 전 순서대로 정렬됨
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, string>> v;    // <인덱스, <나이, 이름>>
    for (int i = 0; i < n; i++){
        int age;
        string name;
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }

    stable_sort(v.begin(), v.end(), compare);

    for (int i = 0; i < n; i++){
        cout << v[i].first << ' ' << v[i].second << '\n';
    }

    return 0;
}