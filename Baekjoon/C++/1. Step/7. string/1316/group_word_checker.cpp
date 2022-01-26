#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int count = 0;
    for (int i = 0; i < N; i++){
        string word;                                // 단어 받아서
        cin >> word;

        vector<char> checker;
        char temp = '1';
        for (char c : word){
            if (temp != c){                         // 연속된 문자가 아닌 새로운 문자가 나오면 
                checker.push_back(c);               // vector에 삽입
                temp = c;
            }
            else{                                   // 연속된 문자는 pass
                continue;
            }
        }

        set<char> s;                                // set 생성 (중복 자동 제거)
        for (char c : checker){                     // vector에 있는 원소 set에 삽입
            s.insert(c);
        }

        if (s.size() == checker.size()){            // vector와 set의 size가 같으면 중복이 없었다는 뜻
            count++;
        }
    }

    cout << count;

    return 0;
}