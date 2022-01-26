#include <iostream>
#include <algorithm>            // max_element() 쓰려면

using namespace std;

int main(){
    string S;
    cin >> S;

    int num[26] = {0};          // 알파벳 26문자 대소문자 구분 x 카운팅 배열
    for (char s : S){
        s = tolower(s);         // 대소문자 구분 안하니 소문자로 통일
        int loc = s - 'a';      // 해당 문자가 무엇인지 인덱스로 
        num[loc]++;             // 카운트 업
    }

    // // max_element 함수는 주소값을 리턴하므로 값을 참고하기 위해 * 사용
    // int maxNum = *max_element(num, num + sizeof(num)/sizeof(num[0]));

    int maxValue = -1;
    int maxLoc = -1;
    int check = 0;
    for (int i = 0; i < 26; i++){
        if (num[i] > maxValue){
            maxValue = num[i];
            maxLoc = i;
            check = 0;
        }
        else if (num[i] == maxValue){
            check++;
        }
    }

    if (check > 0){
        cout << '?';
    }
    else{
        char maxAlphabet = maxLoc + 'A';
        cout << maxAlphabet;
    }
   

    return 0;
}