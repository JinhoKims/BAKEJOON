#include<iostream>
using namespace std;

int added_func(int num) { // 탑다운으로 ~ n 까지 더하기 
	if (num > 0) {
		return num + added_func(num - 1);
	}
	else
		return 0; // 0까지 반드시 내려갔다가 스택반환 (1+0 ...)
}

int pivo_func(int num) { // 바텀업 피보나치 수열
	if (num == 1)
		return 1;
	else if (num == 0)
		return 0;
	else
		return pivo_func(num - 1) + pivo_func(num - 2);

}


int main() {
	int n;
	cin >> n;

	cout << pivo_func(n) << endl;


}