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
		alphaBet[retn_asc(str[i])] += 1; // �� ���ĺ� �� ����
	}

	for (int i = 0; i < 26; i++) {
		if (temp < alphaBet[i]) {
			temp = alphaBet[i]; // ��� ���ĺ��� ���� ���� �� ��
			result = i; // �ε���(�ؽ�) ����
		}
	}
	for (int i = 0; i < 26; i++) {
		for (int j = i + 1; j < 26; j++) {
			swap_index(alphaBet[i], alphaBet[j]); // ���� ���� ���� ���ĺ��� �������� ��� 1 (��������)
		}
	}
	if (alphaBet[0] != alphaBet[1]) // ���� ���� ���� ���ĺ��� �������� ��� 2
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