#include <iostream>

using namespace std;
int main(){
    int H, M;
    cin >> H >> M;

    cout << ((M-45 < 0) ? ((H-1 < 0) ? H+23 : H-1) : H);
    cout << ' ';
    cout << ((M-45 < 0) ? (M+15) : M-45);    
    
    return 0;
}