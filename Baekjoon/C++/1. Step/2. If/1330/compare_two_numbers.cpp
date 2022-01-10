#include <stdio.h>

/*
int main(){
    int A, B;
    scanf("%d %d", &A, &B);

    if (A > B){
        printf(">");
    }
    else if (A < B){
        printf("<");
    }
    else{
        printf("==");
    }

    return 0;
}
*/

// 삼항연산자 응용
// (조건식) ? [실행코드 True] : [실행코드 B]
// (조건식 1) ? [실행코드 True] : ( (조건식 2) ? [실행코드 True] : [실행코드 False] )

int main(){
    int A, B;
    scanf("%d %d", &A, &B);

    //(A > B) ? printf(">") : ( (A < B) ? printf("<") : printf("=="));
    printf("%s", (A > B) ? ">" : (A < B) ? "<" : "==");

    return 0;
}