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
		for (j = 0; j < arr[i]; j++) // 매 max번 반복한다. (j가 arr[i]보다 작을 경우 i를 출력하고, j(=i)가 더 크면, j는 매번 0으로 초기화됨!)
			cout << i << " ";
	}
	cout << endl;
}