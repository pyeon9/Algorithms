# include <iostream>

using namespace std;

int main (){
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++){
        int R;
        string S;
        cin >> R >> S;

        string P = "";
        for (char s : S){
            for (int k = 0; k < R; k++){
                P += s;
            }
        }

        cout << P << '\n';
    }


    return 0;
}