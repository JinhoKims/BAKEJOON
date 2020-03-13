#include<iostream>
using namespace std;
int main() {
	cout << fixed;
	cout.precision(3);

	int a, c;
	cin >> a;
	int** _case = new int* [a]; // 2차원 배열[케이스][학생수]
	int* length = new int[a]; // 각 1차원 별 배열 길이

	for (int i = 0; i < a; i++) { // 학생 점수 할당
		cin >> length[i];
		_case[i] = new int[length[i]];
		for (int j = 0; j < length[i]; j++) {
			cin >> c;
			_case[i][j] = c;
		}
	}

	int avg, count;
	for (int i = 0; i < a; i++) { // 평균 계산
		avg = 0, count = 0;
		for (int j = 0; j < length[i]; j++) { // 점수 더하기
			avg += _case[i][j];
		}
		avg = avg / length[i]; // 평균 도출
		for (int j = 0; j < length[i]; j++) {
			if (_case[i][j] > avg)
				count++; // 평균넘는 학생 수 구하기
		}
		double result = (double)count / length[i] * 100; // 평균 백분율 계산
		cout << result << "%" << endl;
	}
	
}