#include<iostream>
#include<cstring>
using namespace std;

int main() {
	bool alphaBet[26]{ 0 };

	int n;
	cin >> n;
	int sum = n;
	string* words = new string[n];
	
	for (int i = 0; i < n; i++) {
		cin >> words[i];
		memset(alphaBet, 0, sizeof(alphaBet));
		alphaBet[words[i][0] - 97] = true; // 첫 번째 알파벳 활성화(비교용)
		for (int j = 1; j < words[i].size(); j++) {
			if ((alphaBet[words[i][j] - 97]) & (words[i][j - 1] != words[i][j])) { // 전 알파벳이 이미 호출(true)되었고=연속된 알파벳, 전 알파벳과 현 알파벳이 일치하지 않을 시 :
				sum--; // 그룹 단어가 아니니 sum을 -1 까고 리턴
				break;
			}
			alphaBet[words[i][j] - 97] = true;
		}
	}

	cout << sum << endl;

}