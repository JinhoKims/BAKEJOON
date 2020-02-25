#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f = 0, g = 0, h = 0;
	cin >> a;
	f = a;
	if (a == 0) {
		h = a;
		g++;
	}
	while (a != h) {
		b = f % 10;
		c = f / 10;
		d = c + b;
		d %= 10;
		e = b * 10;
		f = e + d;
		h = f;
		g++;
	}
	cout << g << endl;

}