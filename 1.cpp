#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	int roaks;
	cin >> a >> b >> c;

	
	if ((a >= b) & (b >= c)) {
		cout << b << endl;
		return 0;
	}
	else if ((a >= b) & (b <= c)) {
		if (a >= c) {
			cout << c << endl;
			return 0;
		}
		else if (a <= c) {
			cout << a << endl;
			return 0;
		}
	}
	if ((b >= a) & (a >= c)){
		cout << a << endl;
		return 0;
	}
	else if ((b >= a) & (a <= c)) {
		if (b >= c) {
			cout << c << endl;
			return 0;
		}
		else if (b <= c){
			cout << b << endl;
			return 0;
		}
	}
	if ((c >= a) & (a >= b)) {
		cout << a << endl;
		return 0;
	}
	else if ((c >= a) & (a <= b)) {
		if (c >= b) {
			cout << b << endl;
			return 0;
		}
		else if (c <= b) {
			cout << c << endl;
			return 0;
		}
	}
	
}
