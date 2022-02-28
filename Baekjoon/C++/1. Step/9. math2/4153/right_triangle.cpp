#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    while (true){
        vector <int> v;
        int x, y, z;
        cin >> x >> y >> z;
        if ((x == 0) && (y == 0) && (z == 0)){
            break;
        }

        // 값들을 vector에 넣고 sort하면 오름차순으로 정렬됨
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
        sort(v.begin(), v.end());

        // 오름차순 정렬이므로 대각선은 3번째인 v[2]의 값
        int a = v[0]*v[0] + v[1]*v[1];
        int b = v[2]*v[2];
        bool right = (a == b);

        if (right){
            cout << "right" << '\n';
        }
        else{
            cout << "wrong" << '\n';
        }

        /*
        // max_element의 결과로 최댓값을 가리키는 반복자를 반환함. 따라서 *연산자로 값을 구할 수 있음
        // 또한, vector는 일련의 반복자로 구성되어 있으므로 최댓값을 가리키는 반복자를
        // 맨 처음을 가리키는 v.begin()만큼 빼준다면 인덱스 값을 구할 수 있음!
        int max = *max_element(v.begin(), v.end());
        int maxIndex = max_element(v.begin(), v.end()) - v.begin();
        */
    }

    return 0;
}