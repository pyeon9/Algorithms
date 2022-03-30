#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    int n;
    cin >> n;
    
    vector <pair<int, int>> v;
    vector <int> idx;
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
        idx.push_back(i);
    }

    for (int i = 1; i < n; i++){
        int j = i;
        while(true){
            if ((v[j].first > v[j-1].first) && (v[j].second > v[j-1].second)){
                v[j].first ^= v[j-1].first;
                v[j-1].first ^= v[j].first;
                v[j].first ^= v[j-1].first;

                v[j].second ^= v[j-1].second;
                v[j-1].second ^= v[j].second;
                v[j].second ^= v[j-1].second;

                idx[j] ^= idx[j-1];
                idx[j-1] ^= idx[j];
                idx[j] ^= idx[j-1];

                j--;
                if (j < 0){
                    break;
                }
            }
            else{
                break;
            }
        }
        
    }

    // cout << "ANSWER \n";
    // for (int i = 0; i < n; i++){
    //     cout << idx[i] << ' ' << v[i].first << ' ' << v[i].second << '\n';
    // }

    vector <int> order;
    order.push_back(1);
    for (int i = 1; i < n; i++){
        if ((v[i].first < v[i-1].first) && (v[i].second < v[i-1].second)){
            order.push_back(i+1);
        }
        else {
            order.push_back(order[i-1]);
        }
    }

    // for (int i = 0; i < n; i++){
    //     cout << order[i] << ' ';
    // }

    int answer[n];
    for (int i = 0; i < n; i++){
        answer[idx[i]] = order[i];
    }

    for (int i = 0; i < n; i++){
        cout << answer[i] << ' ';
    }


    return 0;
}