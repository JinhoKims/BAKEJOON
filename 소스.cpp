#include<iostream>
using namespace std;
int main() {
	int a[5];
	int result = 0;
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
		if (a[i] < 40)
			a[i] = 40;
		result += a[i];
	}

	cout << result / 5 << endl;

	
}