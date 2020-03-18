#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int i, j, k;
	for (i = 0; i < a; i++) {
		for (j = 0; j < i; j++)
			cout << " ";
		for (j = (a - i - 1) * 2; j >= 0; j--)
			cout << "*";
		cout << endl;
	}

	for (i = 2; i <= a; i++) {
		for (j = 1; j <= a - i; j++)
			cout << " ";
		for (k = 0; k <= 2 * (i - 1); k++)
			cout << "*";
		cout << endl;
	}
}