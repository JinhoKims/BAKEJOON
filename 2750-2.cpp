#include<iostream>
using namespace std;
int main() {
	int arr[10001]{ 0 };

	int n, i, j, temp, max = 0;
	cin >> n;
	max = 0;
	for (i = 0; i < n; i++) {
		cin >> temp;
		arr[temp]++;
		if (temp > max)
			max = temp;
	}
	for (i = 0; i <= max; i++) {
		for (j = 0; j < arr[i]; j++) // �� max�� �ݺ��Ѵ�. (j�� arr[i]���� ���� ��� i�� ����ϰ�, j(=i)�� �� ũ��, j�� �Ź� 0���� �ʱ�ȭ��!)
			cout << i << " ";
	}
	cout << endl;
}