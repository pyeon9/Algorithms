#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);

	int n;
	cin >> n;
    int arrx[n];
    int arry[n];
    int rank[n];

	for (int i = 0; i < n; i++)
	{
		rank[i] = 1;    // 전부 1등으로 초기화
		cin >> arrx[i] >> arry[i];
	}

	for (int i = 0; i < n; i++)	{
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (arrx[i] < arrx[j] && arry[i] < arry[j])	{   // i 기준 나보다 큰 놈 있으면 rank++
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < n; i++)	{
		cout << rank[i] << " ";
	}
}