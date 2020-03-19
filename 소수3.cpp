#include<iostream>
using namespace std;
int main() {
	// n+1 ~ 2n 까지의 소수 구하기
	int arr[1234]{};
	arr[0] = arr[1] = 1;
	int n;
	int sum = 0;
	for (int i = 2; i < 1234; i++) {
		if (!arr[i]) {
			for (int j = i + i; j < 1234; j += i) {
				arr[j] = 1;
			}
		}
	}



	cin >> n;
	while (n != 0) {
		sum = 0;
		for (int i = n + 1; i <= n * 2; i++) {
			if (!arr[i])
				sum++;
		}
		cout << sum << endl;
		
		
		cin >> n;
	}
}