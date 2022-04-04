#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b){
    return a.second < b.second;     // 좌표값 오름 차순 정렬
}

bool sortVector(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<pair<int, int>> v;           // 인덱스, 좌표값
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(make_pair(i, x));
    }

    sort(v.begin(), v.end(), compare);      // v 정렬

    int order = 0;
    vector<pair<int, int>> comp;
    comp.push_back(make_pair(v[0].first, order));       // 정렬된 v의 첫 번째 원소는 압축하면 0이됨
    for (int i = 1; i < n; i++){                        // 두번째값부터 시행
        if (v[i].second != v[i-1].second)   order++;    // 같은 값이 아니면 order++
        comp.push_back(make_pair(v[i].first, order));   // 인덱스와 order 저장
    }

    sort(comp.begin(), comp.end(), sortVector);         // 인덱스에 따라 재정렬

    for (int i = 0; i < n; i++){
        cout << comp[i].second << ' ';
    }


    return 0;
}