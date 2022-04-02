#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>   // greater

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    vector<int> v;
    while (true){               // 10으로 나눠가며 10으로 나눈 나머지를 하나씩 추가 0이 되면 종료
        v.push_back(n%10);
        n /= 10;
        if (n == 0)   break;
    }     

    // greater를 사용하여서 내림차순. less는 오름차순
	// sort(v.begin(), v.end(), greater<int>());
    // reverse 반복자 사용해도 됨
	sort(v.rbegin(), v.rend());

    for (int i : v){
        cout << i;
    }

    return 0;
}