#include<iostream>
#include<vector>
using namespace std;
bool _Setptr(int i);
int main() {
	int num; 
	cin >> num;
	bool* arr = new bool[num];
	int result = 0;

	for (int i = 1; i <= num; i++) { // 1 ~ �Է°����� �������� ���
		if (_Setptr(i))
			result++;
	}

	cout << result << endl;
}


bool _Setptr(int i) {
	int tmp = i; // �Է°�
	int count = 1; // �ڸ� ����(���� ��)
	vector<int> vec;
	
	while (tmp / 10 != 0) {
		vec.push_back(tmp % 10);
		tmp = tmp / 10;
		count++;
	}
	vec.push_back(tmp % 10); // 1�� �ڸ� ��

	vector<int>::iterator iter = vec.begin();
	int i_count = 0;
	int* arr = new int[count -= 1];
	for (iter += 1; iter != vec.end(); iter++) {
		arr[i_count++] = *(iter - 1) - *iter; // ���� ���� ���� ���� �������� ���(������ ����)
	}
	
	for (int i = 1; i < i_count; i++) { // �� �������� ������ �� ���, �ϳ��� Ʋ���� false
		if (arr[i - 1] != arr[i])
			return false;
	}

	return true;
}