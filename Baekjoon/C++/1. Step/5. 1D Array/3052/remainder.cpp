#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int A;
    int numInput = 10;
    int remainders[numInput] = {};                      // 0으로 초기화
    for (int i = 0; i < numInput; i++){
        cin >> A;
        remainders[i] = A % 42;
    }

    int unique[numInput];
    std::fill(unique, unique+numInput, -1);             // 특정 값으로 배열 초기화하는 함수. 범위는 [first, last) 즉, last는 포함하지 않으므로 길이를 더해줌
    int count(0);
    for (int j = 0; j < numInput; j++){
        bool EXIST(false);
        for (int k = 0; k <= j; k++){
            if (remainders[j] == unique[k]){
                EXIST = true;
                break;
            }
        }

        if (!EXIST){
            unique[j] = remainders[j];
            count++;
        }
    }

    cout << count;

    return 0;
}