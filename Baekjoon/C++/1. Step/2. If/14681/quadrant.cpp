#include <iostream>

using namespace std;
int main(){
    int x, y;
    cin >> x;
    cin >> y;
    /*
    if (x > 0){
        cout << ("%d", ((y > 0) ? 1 : 4));
    }
    else{
        cout << ("%d", ((y > 0) ? 2 : 3));
    }
    */
    // 한 줄로
    cout << (x > 0 ? (y > 0 ? 1 : 4) : (y > 0 ? 2 : 3));

    return 0;
}