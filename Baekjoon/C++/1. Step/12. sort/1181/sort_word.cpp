#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool compare(string a, string b){
    if (a.size() == b.size()){                  // 길이가 같으면 사전순으로 하는데
        for (int i = 0; i < a.size(); i++){     // 앞부터 시작해서 문자가 같으면 그냥 넘어가고 다르면 사전순으로
            if (a[i] != b[i]){
                return a[i] < b[i];
            }
        }
    }
    else    return a.size() < b.size();         // 길이 다르면 길이 짧은 순으로
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++){
        string s;
        cin >> s;
        // find(비긴, 엔드, 대상) : 대상이 존재하지 않으면 v.end() 리턴, 있으면 주소 리턴 -> v.bigin() 빼면 인덱스
        if (find(v.begin(), v.end(), s) == v.end()){        // 중복이면 애초에 받지를 않음으로써 중복 출력 안함
            v.push_back(s);
        }
    }

    sort(v.begin(), v.end(), compare);

    for (string s : v){
        cout << s << '\n';
    }


    return 0;
}