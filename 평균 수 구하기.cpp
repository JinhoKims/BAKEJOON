#include<iostream>
using namespace std;
int main() {
	cout << fixed;
	cout.precision(3);

	int a, c;
	cin >> a;
	int** _case = new int* [a]; // 2���� �迭[���̽�][�л���]
	int* length = new int[a]; // �� 1���� �� �迭 ����

	for (int i = 0; i < a; i++) { // �л� ���� �Ҵ�
		cin >> length[i];
		_case[i] = new int[length[i]];
		for (int j = 0; j < length[i]; j++) {
			cin >> c;
			_case[i][j] = c;
		}
	}

	int avg, count;
	for (int i = 0; i < a; i++) { // ��� ���
		avg = 0, count = 0;
		for (int j = 0; j < length[i]; j++) { // ���� ���ϱ�
			avg += _case[i][j];
		}
		avg = avg / length[i]; // ��� ����
		for (int j = 0; j < length[i]; j++) {
			if (_case[i][j] > avg)
				count++; // ��ճѴ� �л� �� ���ϱ�
		}
		double result = (double)count / length[i] * 100; // ��� ����� ���
		cout << result << "%" << endl;
	}
	
}