#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;


bool comp(const pair<int, int>& p1, const pair<int, int>& p2) {

	if (p1.second == p2.second) {     // �󵵼��� ������ 
		return p1.first < p2.first; //����(key)������ ������ 
	}
	return p1.second > p2.second;    //�ٸ��� �󵵼��� ū�� ������ 

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	vector<int> vec;
	int n;
	cin >> n;
	int x;
	double temp = 0;
	for (int i = 0; i < n; i++) {
		cin >> x;
		temp += x;
		vec.push_back(x);
	}
	cout << round(temp / n) << endl; // ��հ� round�� ��� �ݿø��� ��. (int)�� ���� ������ ��.
	sort(vec.begin(), vec.end());
	
	cout << vec[n / 2] << endl; // �߾Ӱ�
		
	// �ֺ�

	vector<pair<int, int>> st;
	vector<int>::size_type i;

	for (int i = 0; i < vec.size(); i++) {
		if (st.empty()) {
			st.push_back(pair<int, int>(vec[i], 1));
			continue;
		}

		if (st.back().first == vec[i]) {
			pair<int, int>tmp = st.back();
			tmp.second++;
			st.pop_back();
			st.push_back(tmp);
		}
		else {
			st.push_back(pair<int, int>(vec[i], 1));
		}
	}

	sort(st.begin(), st.end(), comp);

	if (st[0].second == st[1].second) {
		cout << st[1].first << endl; // ������ 2��°�� ���� �� ���
	}
	else {
		cout << st[0].first << endl;
	}
	// ����
	cout << vec.back() - vec.front() << endl;
}