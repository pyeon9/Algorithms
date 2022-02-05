#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    for (int i = 0; i < T; i++){
        int H, W, N;
        cin >> H >> W >> N;

        int stair = (N % H);                            // 위로 우선 배정되므로 층 수는 나머지
        int room = (N / H) + 1;                         // 방 번호는 몫으로 계산하고 1부터 시작하도록 +1
        if (stair == 0){                                // 나머지가 0인 경우 예외 처리
            stair = H;                                  // 층 수는 건물 전체 높이
            room--;                                     // 방 번호는 -1
        }
        int roomNumber = (stair * 100) + room;          // 번호 규칙에 따라 층 수에 *100 하여 앞 두자리, 번호는 뒷자리로
        cout << roomNumber << '\n';  
    }

    return 0;
}