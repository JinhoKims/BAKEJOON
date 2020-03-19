#include<iostream>
using namespace std;
int main() {
	int n;
	int in;
	const int max = 100001;
	cin >> n;

	for (int abc = 0; abc < n; abc++) {
		int num[max]{ 0 }; // false : 소수
	for (int i = 2; i < max; i++) { // 채(소수가 아닌 것) 구하기
		if (!num[i]) {
			for (int j = i * 2; j < max; j += i) {
				num[j] = true; // true :: 소수가 아님 
			}
		}
	}

	
		cin >> in;
		int i, j, mid = in >> 1;
		for (i = j = mid; i <= in; i--, j++) {
			if (!num[i] && !num[j]) {
				cout << i << " " << j << endl;
				break;
			}
		}
	}

}