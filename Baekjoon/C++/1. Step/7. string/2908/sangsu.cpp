#include <iostream>
#include <algorithm>        // reverse()

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    string A, B;
    cin >> A >> B;

    reverse(A.begin(), A.end());
    reverse(B.begin(), B.end());

    if (stoi(A) > stoi(B)){
        cout << A;
    }
    else{
        cout << B;
    }


    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);

    string A, B;
    cin >> A >> B;

    char reverseA[A.size()];
    char reverseB[B.size()];
    for (int i = 0; i < A.size(); i++){
        reverseA[A.size() - (i+1)] = A[i];
    }
    for (int i = 0; i < B.size(); i++){
        reverseB[B.size() - (i+1)] = B[i];
    }

    if (stoi(reverseA) > stoi(reverseB)){
        cout << reverseA;
    }
    else{
        cout << reverseB;
    }


    return 0;
}