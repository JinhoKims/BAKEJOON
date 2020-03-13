#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count = 0;

	if (n >= 5) {
		count = n / 5;
		n %= 5;
		if (n % 3 != 0) {
			count -= 1;
			n += 5;
			if (n % 3 != 0)
				count = -1;
			else
				count += n / 3;
		}
		else {
			count += n / 3;
		}
	}
	else {
		if (n % 3 != 0)
			count = -1;
		else
			count = n / 3;
	}

	cout << count << endl;




}