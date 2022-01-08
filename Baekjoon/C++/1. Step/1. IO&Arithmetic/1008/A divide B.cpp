#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);

    // int / int는 int 이므로 둘 중 하나 이상을 float로 바꿔줌
    // 그냥 나누면 소수점 버린 결과가 출력됨
    printf("%.10f", float(A)/B);

    return 0;
}