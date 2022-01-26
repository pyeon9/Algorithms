#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    string word;
    cin >> word;

    int count = 0;
    int skip = 0;
    for (int i = 0; i < word.size(); i++){
        if (skip > 0){
            skip--;
            continue;
        }

        if (word[i] == 'c'){
            if ((word[i+1] == '-') or (word[i+1] == '=')){
                count++;
                skip = 1;
                cout << "CASE 1" << '\n';
            }
            else{
                count++;
                cout << "CASE 2" << '\n';
            }
        }

        else if (word[i] == 'd'){
            if (word[i+1] == '-'){
                count++;
                skip = 1;
                cout << "CASE 3" << '\n';

            }
            else if ((word[i+1] == 'z') and (word[i+2] == '=')){
                count++;
                skip = 2;
                cout << "CASE 4" << '\n';

            }
            else{
                count++;
                cout << "CASE 5" << '\n';

            }
        }

        else if ((word[i] == 'l') and (word[i+1] == 'j')){
            count++;
            skip = 1;
            cout << "CASE 6" << '\n';

        }

        else if ((word[i] == 'n') and (word[i+1] == 'j')){
            count++;
            skip = 1;
            cout << "CASE 7" << '\n';

        }

        else if ((word[i] == 's') and (word[i+1] == '=')){
            count++;
            skip = 1;
            cout << "CASE 8" << '\n';

        }

        else if ((word[i] == 'z') and (word[i+1] == '=')){
            count++;
            skip = 1;
            cout << "CASE 9" << '\n';

        }

        else{
            count++;
            cout << "CASE 10" << '\n';

        }
    }

    cout << count;

    return 0;
}