#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#define MAX 8001

using namespace std;

void printNewLine(int x){
    cout << x << '\n';
}

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    int arr[n];
    int count[MAX];             // -4000 ~ 0 ~ 4000 까지 가능한 8,001개의 수를 count하는 배열
    int sum = 0;
    fill(count, count + MAX, 0);        // 최빈값 카운트 용, 0으로 초기화
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;               // 값 입력받고
        arr[i] = a;             // arr에 값 저장
        count[a + 4000]++;      // 해당하는 인덱스++ 하는데, -4000~4000을 0~8000 인덱스에 담을 것이므로 +4000 해줘야 함
        sum += arr[i];          // 합 누적
    }

    sort(arr, arr + n);         // 배열 정렬

    int mean = round((double)sum / (double)n);  // 평균 계산, 반올림 -> 소수점에서 반올림하기 위해 double로 형변환 후 나누기 수행
    int median = arr[n/2];      // n이 홀수이므로 n/2하면 중앙값 인덱스

    int mode;
    int max(1);                 // count가 0인 경우 제외하고 시작하므로 1로 초기화
    vector<int> v;
    for (int i = 0; i < MAX; i++){
        if (count[i] > max){            // 새로운 max 값이 나오면 max 업데이트, v 초기화 후 추가
            max = count[i];
            v.clear();
            v.push_back(i);
        }
        else if (count[i] == max){      // 이미 max인 값이 또 있으면 v에 추가
            v.push_back(i);
        }

    }
    if (v.size() > 1){                  // 최빈값이 두 개 이상이면 두번 째 값 사용
        mode = v[1] - 4000;             // 0~8000 인덱스이므로 -4000 해줘야 실제 값
    }
    else{
        mode =  v[0] - 4000;
    }

    int range = arr[n-1] - arr[0];

    printNewLine(mean);
    printNewLine(median);
    printNewLine(mode);
    printNewLine(range);

    return 0;
}