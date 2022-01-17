#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);

    int number(1);
    int A;
    for (int i = 0; i < 3; i++){
        cin >> A;
        number *= A;
    }
    string str_number = to_string(number);              // 곱한 값을 string으로 변경

    int count[10] = {};                                 // 내용 없이 brace만 쓰면 0으로 초기화 // {0} 해도 0으로 초기화
    for (char ch : str_number){                         // foreach문
        count[ch - '0']++;                              // ch는 ASCII 코드 값 > '0'을 빼면 '0' 기준 상대 위치이므로 원하는 인덱스 값을 얻을 수 있음
    }

    for (int v : count){                                // foreach문
        cout << v << '\n';
    }

    return 0;
}