#include <iostream>
#include <cmath>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    cout << fixed;
    cout.precision(7);

    int r;
    cin >> r;

    cout << M_PI * r * r << '\n';
    cout << r * r * 2 << '\n';

    // 택시 기하학에서 두 점 사이의 거리는 D(T1,T2) = |x1-x2| + |y1-y2|이므로, 다이아몬드의 형태가 원이 된다. 
    // 따라서, 택시 기하학에서의 원의 넓이는 (2r) * (2r) * (1/2)이다.

    return 0;
}