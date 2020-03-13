#include<iostream>
using namespace std;
int retn_asc(char ch);
void swap_index(int& a, int& b);
int main() {
	string str;
	cin >> str;
	int alphaBet[26]{ 0 };
	int result = 0;
	int temp = result;
	for (int i = 0; i < str.size(); i++) {
		alphaBet[retn_asc(str[i])] += 1; // 각 알파벳 수 적립
	}

	for (int i = 0; i < 26; i++) {
		if (temp < alphaBet[i]) {
			temp = alphaBet[i]; // 어느 알파벳이 가장 많은 지 비교
			result = i; // 인덱스(해시) 갱신
		}
	}
	for (int i = 0; i < 26; i++) {
		for (int j = i + 1; j < 26; j++) {
			swap_index(alphaBet[i], alphaBet[j]); // 가장 많이 사용된 알파벳이 여러개일 경우 1 (순차정렬)
		}
	}
	if (alphaBet[0] != alphaBet[1]) // 가장 많이 사용된 알파벳이 여러개일 경우 2
		cout << (char)(result + 65) << endl;
	else
		cout << '?' << endl;
}
int retn_asc(char ch) {
	if (ch >= 97) {
		ch -= 97;
	}
	else
		ch -= 65;
	return ch;
}
void swap_index(int& a, int& b) {
	int temp;
	if (a < b) {
		temp = a;
		a = b;
		b = temp;
	}
}