#include<iostream>
#include<string>

using namespace std;
int main() {



    string str;
    int count = 0;
    getline(cin, str);

    for (int i = 0; i != str.length(); i++) {
        if (str[i] != ' ') { // �ܾ� ù ���� ����
            for (int j = i; (str[j] != ' ') & (j != str.length()); j++) { // �ܾ� ��迡�� ����
                i = j;
            }
            count++;
        }

    }
    cout << count << endl;



}