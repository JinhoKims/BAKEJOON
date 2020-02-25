#include<iostream>
using namespace std;
int main() {
	int a;
	int p = 0;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		for (int j = i; j < a; j++) {
			cout << " ";
		}
		p++;
		for (int k = 0; k < p; k++) {
			cout << '*';
		}
		cout << endl;
	}

}