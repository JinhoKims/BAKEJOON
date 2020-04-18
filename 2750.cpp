#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void legacy_sort();
int* instert_sort();
int main() {

	instert_sort();
	
}
void vector_sort() {
	int n;
	cin >> n;
	int temp;
	vector<int> vec;

	for (int i = 0; i < n; i++) {
		cin >> temp;
		vec.push_back(temp);
	}

	sort(vec.begin(), vec.end());

	for (auto i : vec)
		cout << i << endl;
}
void legacy_sort() { // »ðÀÔÁ¤·Ä
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j]) {
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
}

int* instert_sort() {
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int temp;
	int i, j, key;
	for (i = 1; i < n; i++) {
		temp = arr[i];
		for (int j = i; j > 0; j--) {
			if (arr[j - 1] > temp) {
				arr[j] = arr[j - 1];
				if (j == 1) {
					arr[j - 1] = temp;
					break;
				}
			}
			else {
				arr[j] = temp;
				break;
			}
		}
	
	
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}

	return arr;

}