#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<string> arr;
	string t;
	
	for (int i = 0; i < n; i++) {
		cin >> t;
		arr.push_back(t);
	}

	sort(arr.begin(), arr.end());
	for (auto i : arr)
		cout << i << " ";
	
}