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
		alphaBet[words[i][0] - 97] = true; // ù ��° ���ĺ� Ȱ��ȭ(�񱳿�)
		for (int j = 1; j < words[i].size(); j++) {
			if ((alphaBet[words[i][j] - 97]) & (words[i][j - 1] != words[i][j])) { // �� ���ĺ��� �̹� ȣ��(true)�Ǿ���=���ӵ� ���ĺ�, �� ���ĺ��� �� ���ĺ��� ��ġ���� ���� �� :
				sum--; // �׷� �ܾ �ƴϴ� sum�� -1 ��� ����
				break;
			}
			alphaBet[words[i][j] - 97] = true;
		}
	}

	cout << sum << endl;

}