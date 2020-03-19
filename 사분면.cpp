#include<iostream>
using namespace std;
int main() {
	int x, y;
	int num;
	cin >> x >> y;

	if (x > 0) {
		if (y > 0) 
			num = 1;
		else
			num = 4;
	}
	else {
		if (y > 0)
			num = 2;
		else
			num = 3;
	}
	cout << num << endl;

}