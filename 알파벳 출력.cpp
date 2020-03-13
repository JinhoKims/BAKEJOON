#include<iostream>
#include<cstring>
#include<string>

using namespace std;
int main() {
	string str;
	cin >> str;

	int alphaBet[26];
	memset(alphaBet, -1, sizeof(alphaBet));

	for (int i = 0; i < str.size(); i++) {
		if (alphaBet[str[i] - 97] == -1)
			alphaBet[str[i] - 97] = i;
	}

	for (int i = 0; i < 26; i++) {
		cout << alphaBet[i] << " ";
	}
}