#include <iostream>

using namespace std;

int findHansu(int N){
    int num = 0;

        for (int i = 1; i <= N; i++){
            if (i < 100){
                num++;
            }
            else if ((i >= 100) && (i < 1000)){
                int a = i / 100;
                int b = (i / 10) % 10;
                int c = i % 10;

                if ((a-b) == (b-c)){    // 등차수열인지
                    num++;
                }
            }
            else{                       // 1000은 한수가 아님
                continue;
            }
        }

    return num;
}


int main(){
    int N;
    cin >> N;

    int ans = findHansu(N);

    cout << ans;

    return 0;
}
