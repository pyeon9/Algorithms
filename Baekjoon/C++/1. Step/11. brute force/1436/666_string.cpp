#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool overflow(int n, int number, int increse){
    if (number + increse > n){
        return true;
    }
    return false;
}

int jump(int n, int count, int loc){
    int step = round(pow(10, loc-3));      // 4일때 10, 5일때 100
    if (count + step == n){
        return --step;
    }
    while (overflow(n, count, step)){
        step /= 10;
    }
    return step ;
}


int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;

    int count(0), i(1);
    int idx(-1), step(0);
    string title;

    // cout << jump(n, 1, 4) << '\n';

    while (count != n){
        title = to_string(i);
        idx = title.find("666");
        if (idx > -1){
            if (idx == title.length() - 4){         // 6660으로 끝난 경우
                step = jump(n, count, 4);
            }

            else if (idx == title.length() - 5){         
                step = jump(n, count, 5);
            }

            else if (idx == title.length() - 6){         
                step = jump(n, count, 6);
            }

            else if (idx == title.length() - 7){         
                step = jump(n, count, 7);                
            }
            else{
                step = 1;
            }

            // cout << count << ' ' << i << ' ' << step << '\n';
            count += step;
            i += step;
            continue;    
        }

        i++;
    }

    cout << stoi(title);

    return 0;
}