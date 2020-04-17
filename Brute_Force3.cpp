#include<iostream>
#include<vector>
using namespace std;
int main() {
	vector <pair<pair<int, int>, int>> vec;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		vec.push_back(make_pair(make_pair(x, y), 1));
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j)
				continue; // Å°.¸ö¹«°Ô
			else if (vec[i].first.first < vec[j].first.first && vec[i].first.second < vec[j].first.second)
				vec[i].second++; // ¼øÀ§ »ó½Â

		}
	}
	for (int i = 0; i < n; i++)
		cout << vec[i].second << " ";
	cout << endl;

	
}