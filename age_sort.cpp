#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int, string> a, pair<int, string> b) {
	if (a.first == b.first)
		return a.second < b.second;
	else
		return a.first < b.first;
}


int main() {

	int n;
	cin >> n;
	vector<pair<int, string>> vec;
	int age;
	string name;
	for (int i = 0; i < n; i++) {
		cin >> age >> name;
		vec.push_back(make_pair(age, name));
	}
	sort(vec.begin(), vec.end(), compare);
	for (auto i : vec) {
		cout << i.first << " " << i.second << endl;
	}
}