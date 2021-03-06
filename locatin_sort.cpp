#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}

int main() {
	int n;
	cin >> n;
	vector<pair<int, int>> vec;
	int x, y;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		vec.push_back(make_pair(x,y));
	}

	sort(vec.begin(), vec.end(), compare);
	for (auto i : vec) {
		cout << i.first <<" " << i.second << endl;
	}

}