#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	//vector<string> arr;
	string * arr = new string[n];
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i].length() > arr[j].length()) {
					auto temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (arr[i].length() == arr[j].length() && arr[i] > arr[j]) {
				auto temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}


	for (int i = 0; i < n; i++) {
		if (arr[i] != arr[i + 1])
			cout << arr[i] << " ";
	}
}