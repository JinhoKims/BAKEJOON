#include<iostream>
using namespace std;
void main() {
	int a, b, c, d;
	int n;
	cin >> n;
	a = n / 100;
	b = (n / 10) % 10;
	c = n % 10;
	if (a + c == 2 * b) {
		cout << a + c << " :: " << 2 * b << endl;
	}
}