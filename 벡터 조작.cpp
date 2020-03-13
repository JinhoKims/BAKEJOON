#include<iostream>
#include<vector>

using namespace std;

long long sum(std::vector<int>& a) {
	vector<int>::iterator iter = a.begin(); // !!
	long long sum = 0;
	for (iter; iter != a.end(); iter++) {
		sum += *iter;
	}
	return sum;
}

int main() {
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);


	cout << sum(a);
}