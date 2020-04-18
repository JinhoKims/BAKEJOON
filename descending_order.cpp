#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector<int> vec;

	while (n != 0) {
		vec.push_back(n % 10);
		n /= 10;
	}

	

	sort(vec.begin(), vec.end(),greater<int>());
	for (auto i : vec) {
		cout << i;
	}
}