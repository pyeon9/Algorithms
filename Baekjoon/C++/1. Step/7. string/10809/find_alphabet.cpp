#include <iostream>

using namespace std;

int main(){
    string S;
    cin >> S;

    int location[26];                   // 알파벳 개수는 26개
    fill(location, location + sizeof(location)/sizeof(int), -1);      // -1로 초기화

    for (int i = 0; i < S.size(); i++){
        int order = S[i] - 'a';         // 소문자 a 기준으로 몇 번 째 위치에 있는지 정수로 받음
        if (location[order] == -1){     // 아직 업데이트 안되었으면
            location[order] = i;        // 해당 문자가 나온 순서
        }
    }

    for (int loc : location){
        cout << loc << ' ';
    }

    return 0;
}