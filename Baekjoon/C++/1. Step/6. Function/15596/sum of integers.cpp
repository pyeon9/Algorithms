#include <iostream>

using namespace std;

long long sum(int *a, int n){
    long long sum = 0;

    for (int i = 0; i < n; i++){
        sum += a[i];
    }

    return sum;
}

#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;

    for (int i : a){
        ans += i;
    }

	return ans;
}
