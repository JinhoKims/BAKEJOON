#include<iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	int min = 0, sum = 0;
	bool* arr = new bool[b - a]{0,};
	int k;
	
	for (int i = a, k = 0; i < b; i++, k++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				arr[k] = true; // 소수가 아님
				break;
			}
		}
	}	
	
		for (int i = 0; i < b - a; i++) {
			if (arr[i] == false) { // 소수라면
				sum += a + i;
				cout << a + i << endl;
				if (min == 0)
					min = sum;
			}
		}

}