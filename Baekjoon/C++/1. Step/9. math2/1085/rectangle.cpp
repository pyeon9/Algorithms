#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int distLeft = x;
    int distRight = w-x;
    int distBottom = y;
    int distTop = h-y;

    cout << min({distLeft, distRight, distBottom, distTop});

    return 0;
}