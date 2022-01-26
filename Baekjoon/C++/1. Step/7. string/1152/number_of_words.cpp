#include <iostream>
#include <string>
#include <vector>
#include <sstream>          // istringsteam 클래스 쓰기 위해서

using namespace std;

vector<string> splitText(string sentence, char delimiter){
    vector<string> result;

    string word;
    istringstream s(sentence);                      // 문자열을 담는 istringstream 클래스 생성

    while(getline(s, word, delimiter)){             // getline(istringstream 클래스, 파싱한 단어를 담을 string, 구분자)
                                                    // 끝나면 false 리턴됨
        if (word.empty()){                          // 맨 앞에 공백 들어오면 하나 추가되므로 조건문 처리
                                                    // 공백이 ' '일 수도 있고 '\t'일 수도 있고 다양함. /*string*/.empty() 함수 사용하면 알아서 체크
                                                    // .size() == 0으로 할 수도 있음
            continue;
        }
        result.push_back(word);
    }

    return result;
}


int main (){
    string sentence;
    getline(cin, sentence);                         // 그냥 cin은 공백 받으면 끝남. getline(cin, /*string*/)으로 받으면 다 받을 수 있다.

    vector<string> words = splitText(sentence, ' ');


    cout << words.size();


    return 0;
}
