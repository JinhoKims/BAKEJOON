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


	for (int i = 0; i < a; i++) { // case ��
		for (int j = 0; j < str[i].size(); j++) { // ���ڿ�[i] ũ��
			for (int k = 0; k < b[i]; k++) { // �� ���ڿ�[i]�� �ε��� �ߺ� ��� Ƚ��
				n_str[i] += str[i][j];
			}
		}
	}

	for(int i=0; i<a; i++)
		cout << n_str[i] << endl;

}