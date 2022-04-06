#include <iostream>
#define MAX 9

using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int cnt, int now){
    if (cnt == m){
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = now; i <= n; i++){     // if (!visited) 조건을 뺌으로써 재방문까지 허용
        visited[i] = true;
        arr[cnt] = i;
        dfs(cnt+1, i);                  // 현재 방문 위치를 함께 전달 -> 비내림차순
        visited[i] = false;
    }
}

int main(){
    ios::sync_with_stdio(false);

    cin >> n >> m;
    dfs(0, 1);           // cnt = 0부터 시작, now=1부터 시작
}