#include <iostream>
#include <string>
#include <algorithm>        // reverse

using namespace std;

int main(){
    string A, B;
    cin >> A >> B;

    cout << A.size() << ' ' << B.size() << '\n';

    // 두 string 길이가 다르면 앞에 0 채워서 길이 맞춰주기
    // for문 돌 때 편하라고
    if (A.size() < B.size()){
        A.insert(0, B.size()-A.size(), '0');            // insert(1, 2, 3) - 1: 인덱스, 2: 개수, 3: 삽입할 char
    }
    else if (A.size() > B.size()){
        B.insert(0, A.size()-B.size(), '0');
    }

    // cout << A << '\n' << B << '\n';

    string result = "";
    int carry = 0;
    int index = A.size() - 1;

    // for (int i = 0; i < A.size(); i++){ 
    //     cout << index << ' ' << A[index] << ' ' << B[index] << '\n';
    //     index--;
    // }

    for (int i = 0; i < A.size(); i++){
        // char aLast = A.back();
        // char bLast = B.back();
        // A.pop_back();
        // B.pop_back();

        int aLast = A[index] - '0';
        int bLast = B[index] - '0';
        index--;

        // cout << aLast << ' ' << bLast << '\n';

        int sum = carry + aLast + bLast;
        // cout << carry << ' ' << aLast << ' ' << bLast << '\n';
        // cout << "@@@ " << sum << '\n'; 
        carry = sum / 10;
        sum = sum % 10;

        cout << carry << ' ' << sum << ' ' << (char)(sum + '0') << '\n';

        result += (char)(sum + '0');
        // cout << i << ' ' << sum << ' ' << (char)(sum + '0') << '\n';

        // cout << i << '@' << aLast << '@' << bLast << '\n';
    }

    reverse(result.begin(), result.end());

    if (carry == 1){
        result.insert(0, 1, '1');
    }

    cout << result;
    
    return 0;
}