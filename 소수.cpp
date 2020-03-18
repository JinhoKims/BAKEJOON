#include<iostream>
using namespace std;
int main() {
	int a;
	
	cin >> a;
	int* num = new int[a];
	int sum = a;
	for (int i = 0; i < a; i++) {
		cin >> num[i];
		if (num[i] == 1)
			sum--;
	}


	for (int i = 0; i < a; i++) {
		for (int j = 1; j < num[i]; j++) {
			if ((num[i] % j == 0) && (j > 1)) {
				sum--;
				break;
			}
		}
	}

	cout << sum << endl;
}