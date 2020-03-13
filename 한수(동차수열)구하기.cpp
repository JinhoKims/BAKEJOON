#include<iostream>
#include<vector>
using namespace std;
bool _Setptr(int i);
int main() {
	int num; 
	cin >> num;
	bool* arr = new bool[num];
	int result = 0;

	for (int i = 1; i <= num; i++) { // 1 ~ 입력값까지 동차수열 계산
		if (_Setptr(i))
			result++;
	}

	cout << result << endl;
}


bool _Setptr(int i) {
	int tmp = i; // 입력값
	int count = 1; // 자리 갯수(수열 수)
	vector<int> vec;
	
	while (tmp / 10 != 0) {
		vec.push_back(tmp % 10);
		tmp = tmp / 10;
		count++;
	}
	vec.push_back(tmp % 10); // 1의 자리 수

	vector<int>::iterator iter = vec.begin();
	int i_count = 0;
	int* arr = new int[count -= 1];
	for (iter += 1; iter != vec.end(); iter++) {
		arr[i_count++] = *(iter - 1) - *iter; // 수열 간의 값이 같은 일정한지 계산(동차를 구함)
	}
	
	for (int i = 1; i < i_count; i++) { // 각 동차들이 일정한 지 계산, 하나라도 틀리면 false
		if (arr[i - 1] != arr[i])
			return false;
	}

	return true;
}