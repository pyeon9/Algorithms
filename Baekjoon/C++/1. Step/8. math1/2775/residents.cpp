#include <iostream>

using namespace std;

/*
k층의 n호에 사는 사람의 수는
(k-1 층의 n호 + k층의 n-1 호)와 같음
왜냐하면 k층의 n-1호가 k-1층의 1~n-1호의 합이기 때문
따라서 재귀함수로 (k-1층의 n호 + k층의 n-1호)를 구함

0층은 호수 대로 살고 있으니 n을 return하고
1호는 무조건 1명이니 1을 return함
*/

int find(int m, int n){
    if (m == 0){
        return n;
    }
    if (n == 1){
        return 1;
    }
    else{
        return (find(m-1, n) + find(m, n-1));
    }
}

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        int k, n;
        cin >> k;
        cin >> n;

        int number = find(k, n);
        cout << number << '\n';
    }

    return 0;
}