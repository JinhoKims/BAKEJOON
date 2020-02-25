#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int r = a * b * c;
	int arr[10]{ 0,0,0,0,0,0,0,0,0,0 };



	while (r > 0) {
		for (int i = 0; i <= 9; i++) {
			if (i == r % 10) {
				arr[i] += 1;
				r = r / 10;
				break;
			}
		}
	}
	
	for (int i = 0; i <= 9; i++) {
		cout << arr[i] << endl;
	}

}