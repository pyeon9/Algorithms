#include <iostream>

using namespace std;
int main (){
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    int arr[N];
    int min(1000000), max(-1000000);
    for(int i = 0; i < N; i++){
        cin >> arr[i];
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << min << ' ' << max;

    return 0;
}