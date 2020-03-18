#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	bool* arr = new bool[num] {};
	arr[0] = 1;
	arr[1] = 1;
	// 소수 = 1
	for (int i = 2; i < num; i++) { // 기준점이 될 i가 들어옴(소수) ex :) 1, 2, 3, x, 5 ...
		if (!arr[i]) {
			for (int j = i * 2; j < num; j += i) {  // j = i * 2 : j는 i의 첫번째 배수(i*2)부터 시작.
													// j < num : j가 num보다 커질 때까지 진행
													// j += i : 전 (i*2)에다 i만큼 또 더함. 즉, [j]는 (i*2)에서 (i*3)(두번 째 배수)가 됨.
													// arr[j] = 1 : 그리고 이 배수는 소수가 아니니깐 1을 넣음.
													// 결국 i의 배수는 모두 소수가 아니니깐, num크기 만큼 j가 커질 때까지 매 루프 마다 j=(i*n)을 함.
				arr[j] = 1;
			}
		}
	}

	// 고급버전 : 채를 제곱(i*i)으로 계산하여 중복계산을 줄임.
	/*for (int i = 2; i < num; i++) { 
		if (!arr[i]) {
			int p = i;
			for (int j = i * p; j < num; j = i * ++p) {  
				arr[j] = 1;
			}
	*/

	int sum = 0;
	for (int i = 0; i <= num; i++) { // i <= num 을 쓰는 이유 : num까지 계산한다고했을 때 [i]로 num을 표현하기위해 num까지 범위를 포함시킨다. (<=)
		if (!arr[i]) { // i가 소수라면
			cout << i << " ";
			sum++;
		}
	}

	cout << endl << "총 소수 : " << sum << endl;

}