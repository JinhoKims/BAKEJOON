#include<iostream>
using namespace std;
int main() {

	int cost = 0;
	int n;
	cin >> n;

	if (n % 5 != n) { // 5�� �������� ���
		cost += n / 5;
		n %= 5;
	}

	if (n % 3 != 0) { // 3���� �ȳ����� �ܿ�
		if (cost) { // �̸� 5�� �������� ���
			cost -= 1;
			n += 5; // 5��ŭ ��ȯ
		}
		if (n % 3 != 0) { // �׷��� �ȳ����� ���
			cost = -1;
		}
		else { // �ٽ� 3���� ������ ���
			cost += n / 3;
		}
	}
	else { // 3���� ������ ���
		cost += n /= 3;
	}

	cout << cost << endl;
	
}