#include<iostream>
using namespace std;


int main() {
	int a, * b;
	cin >> a;
	b = new int[a];
	string* str = new string[a];
	for (int i = 0; i < a; i++) {
		cin >> b[i];
		cin >> str[i];
	}
	string* n_str = new string[a];


	for (int i = 0; i < a; i++) { // case 수
		for (int j = 0; j < str[i].size(); j++) { // 문자열[i] 크기
			for (int k = 0; k < b[i]; k++) { // 각 문자열[i]의 인덱스 중복 출력 횟수
				n_str[i] += str[i][j];
			}
		}
	}

	for(int i=0; i<a; i++)
		cout << n_str[i] << endl;

}