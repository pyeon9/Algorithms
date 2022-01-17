#include <iostream>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);

    // int numbers[9];
    
    int index, N;
    int max = 0;
    for (int i = 1; i <= 9; i++){
        // cin >> numbers[i];
        // if (numbers[i] > max){
        //     max = numbers[i];
        cin >> N;
        if (N > max){
            max = N;
            index = i;
        }
    }

    cout << max << '\n' << index;

    return 0;
}