#include <stdio.h>

int main(){
    int A, B;
    scanf("%d", &A);
    scanf("%d", &B);

    int B1 = B / 100;
    int B2 = (B % 100) / 10;
    int B3 = B % 10; 

    printf("%d\n", A*B3);
    printf("%d\n", A*B2);
    printf("%d\n", A*B1);
    printf("%d\n", A*B);

    return 0;
}


// 다른 방법 1
#include <stdio.h>
#include <stdlib.h>  // atoi 함수가 선언된 헤더파일
 
int main(int argc, char const *argv[]) {
    int A;
    char B[4];
 
    scanf("%d", &A);
    scanf("%s", B);  // 배열은 주소를 가리키므로 & 안 붙여도됨
 
    // 배열에서 []로 인덱싱하면 값은 문자이므로 ascii코드에 맞는 값이 들어옴
    // ex) '3' > 3이 아니라 51
    // 그래서 문자 '0'을 빼주면 실제 우리가 읽는 숫자 값이 담기게 됨
    printf("%d\n", A * (B[2] - '0'));
    printf("%d\n", A * (B[1] - '0'));
    printf("%d\n", A * (B[0] - '0'));
    printf("%d\n", A * atoi(B));        // atoi()는 문자를 숫자로 바꿔주는 함수
    return 0;
}


// 다른 방법 2
// C++은 std::string 클래스로 문자 배열이 아닌 문자열로 다룰 수 있음
// C++에서만 제공하므로 atoi() 함수를 못쓰고 대신 stoi() 함수를 씀. 헷갈리니 주의!
#include <iostream>
#include <string>   // string, stoi()을 쓰기 위한 헤더파일
 
using namespace std;
 
int main(int argc, char const *argv[]) {
    int A;
    string B;
 
    cin >> A;
    cin >> B;
 
    cout << A * (B[2] - '0') << "\n";
    cout << A * (B[1] - '0') << "\n";
    cout << A * (B[0] - '0') << "\n";
    cout << A * stoi(B) << "\n";    // string -> int(10진수) 로 변환
    return 0;
}