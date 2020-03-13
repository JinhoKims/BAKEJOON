#include<iostream>
#include<string>

using namespace std;
int main() {



    string str;
    int count = 0;
    getline(cin, str);

    for (int i = 0; i != str.length(); i++) {
        if (str[i] != ' ') { // 단어 첫 글자 진입
            for (int j = i; (str[j] != ' ') & (j != str.length()); j++) { // 단어 경계에서 종료
                i = j;
            }
            count++;
        }

    }
    cout << count << endl;



}