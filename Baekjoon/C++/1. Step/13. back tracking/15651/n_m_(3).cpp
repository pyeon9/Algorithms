#include <iostream>
#define MAX 8

using namespace std;

int n, m;
int arr[MAX];
bool visited[MAX];

void dfs(int cnt){
    if (cnt == m){
        for (int i = 0; i < m; i++)
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = 1; i <= n; i++){           // 중복허용이므로 n_m_(1).cpp에서 if (!visited) 조건만 빼주면 됨 -> 방문했더라도 또 할 수 있게
        visited[i] = true;
        arr[cnt] = i;
        dfs(cnt+1);
        visited[i] = false;
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    dfs(0);
}