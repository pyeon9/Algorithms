#include <iostream>
#include <string>
#include <algorithm>        // reverse

using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    // 두 string 길이가 다르면 앞에 0 채워서 길이 맞춰주기
    // for문 돌 때 편하라고
    if (A.size() < B.size()){
        A.insert(0, B.size()-A.size(), '0');            // insert(1, 2, 3) - 1: 인덱스, 2: 개수, 3: 삽입할 char
    }
    else if (A.size() > B.size()){
        B.insert(0, A.size()-B.size(), '0');
    }

    string result = "";
    int carry = 0;
    int index = A.size() - 1;                           // A.size()에서 1 빼서 가장 끝 인덱스 구하기  
    for (int i = 0; i < A.size(); i++){
        int aLast = A[index] - '0';                     // 마지막거 가져와서 숫자로 
        int bLast = B[index] - '0';                     
        index--;                                        // 인덱스 -1

        int sum = carry + aLast + bLast;                // 캐리 포함 더하고
        carry = sum / 10;                               // 캐리 재계산
        sum = sum % 10;

        result += (char)(sum + '0');                    // char로 변환해서 result에 더함
    }

    reverse(result.begin(), result.end());              // 나중에 더한 값이 뒤로 가있으므로 reverse

    if (carry == 1){                                    // 마지막에 carry 남아 있으면 맨 앞에 1 더해줘야 함
        result.insert(0, 1, '1');
    }

    cout << result;
    
    return 0;
}