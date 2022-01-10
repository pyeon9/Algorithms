/*
#include <stdio.h>

int main(){

    printf("hello world\n");

    return 0;

}
*/


#include <stdio.h>

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
        printf("=");
    }

    return 0;
}