#include <iostream>
#define MAX 9

using namespace std;

int n, m;
int arr[MAX] = {0,};
bool visited[MAX] = {0,};

void dfs(int cnt, int now){
    if (cnt == m){
        for(int i = 0; i < m; i++)      // cnt는 최대 m이므로 0부터 m-1까지 차례로 출력하면 됨
            cout << arr[i] << ' ';
        cout << '\n';
        return;
    }
    for (int i = now; i <= n; i++){     // 현재 방문한 수부터 for문 돌면 더 작은 수는 갈 일 없음 -> 오름차순
        if (!visited[i]){               // 아직 방문하지 않았다면
            visited[i] = true;
            arr[cnt] = i;               // cnt는 0, 1, ... 이렇게 가니까 순서대로 방문한 i 삽입하고 나중에 출력하면 됨
            dfs(cnt+1, i);              // 현재 방문한 수까지 함께 전달
            visited[i] = false;
        }        
    }
}

int main(){
    ios_base::sync_with_stdio(false);

    cin >> n >> m;
    dfs(0, 1);                          // 시작은 now=1

    return 0;
}