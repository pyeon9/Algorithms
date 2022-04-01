#include <iostream>

using namespace std;

void swap(int *arr, int i, int j){
    arr[i] ^= arr[j];
    arr[j] ^= arr[i];
    arr[i] ^= arr[j];
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int arr[n] = {0,};
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // 버블 정렬
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < n-1; j++){
            if (arr[j] > arr[j+1]) swap(arr, j, j+1);
        }
    }

    for (int i : arr){
        cout << i << '\n';
    }

    return 0;
}