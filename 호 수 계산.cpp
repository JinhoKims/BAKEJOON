#include<iostream>
using namespace std;
int main() {
	int arr[15][15]{};

	for (int i = 1; i < 15; i++) {
		arr[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 1; j < 15; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1]; //  = �� ���� -1 ȣ ��(���� ȣ�� ����) + ���� ȣ�� -1ȣ(������ ��� ȣ) [0][1] + [1][0]
		}
	}

	int n;
	cin >> n;
	int* a = new int[n];
	int* b = new int[n];
	int c, d;

	for (int i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < n; i++) {
		cout << arr[a[i]][b[i]] << endl;
	}

}