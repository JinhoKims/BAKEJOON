#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	bool* arr = new bool[num] {};
	arr[0] = 1;
	arr[1] = 1;
	// �Ҽ� = 1
	for (int i = 2; i < num; i++) { // �������� �� i�� ����(�Ҽ�) ex :) 1, 2, 3, x, 5 ...
		if (!arr[i]) {
			for (int j = i * 2; j < num; j += i) {  // j = i * 2 : j�� i�� ù��° ���(i*2)���� ����.
													// j < num : j�� num���� Ŀ�� ������ ����
													// j += i : �� (i*2)���� i��ŭ �� ����. ��, [j]�� (i*2)���� (i*3)(�ι� ° ���)�� ��.
													// arr[j] = 1 : �׸��� �� ����� �Ҽ��� �ƴϴϱ� 1�� ����.
													// �ᱹ i�� ����� ��� �Ҽ��� �ƴϴϱ�, numũ�� ��ŭ j�� Ŀ�� ������ �� ���� ���� j=(i*n)�� ��.
				arr[j] = 1;
			}
		}
	}

	// ��޹��� : ä�� ����(i*i)���� ����Ͽ� �ߺ������ ����.
	/*for (int i = 2; i < num; i++) { 
		if (!arr[i]) {
			int p = i;
			for (int j = i * p; j < num; j = i * ++p) {  
				arr[j] = 1;
			}
	*/

	int sum = 0;
	for (int i = 0; i <= num; i++) { // i <= num �� ���� ���� : num���� ����Ѵٰ����� �� [i]�� num�� ǥ���ϱ����� num���� ������ ���Խ�Ų��. (<=)
		if (!arr[i]) { // i�� �Ҽ����
			cout << i << " ";
			sum++;
		}
	}

	cout << endl << "�� �Ҽ� : " << sum << endl;

}