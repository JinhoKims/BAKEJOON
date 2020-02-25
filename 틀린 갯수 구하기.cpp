#include<iostream>
using namespace std;

int main() {
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] = arr[i] % 42;
	}
	int count = 0;
	bool carr[10] = { 0,0,0,0,0,0,0,0,0,0 };

	for (int i = 0; i < 10; i++) {
		if (carr[i] != true) {
			for (int j = i + 1; j < 10; j++) {

				if (arr[i] == arr[j]) {
					carr[j] = true;
				}
			}
			count++;
		}
	}	
	cout << count << endl;
}
