#include<iostream>
using namespace std;

int dn(int i) {
	int res = i;
	if (i >= 10000) { res += i / 10000; i %= 10000; }
	if (i >= 1000) { res += i / 1000; i %= 1000; }
	if (i >= 100) { res += i / 100; i %= 100; } // 수혈 구하기 : i / 100 = 좌변값(1), i % 10 = 우변값(42) if(142) = 142+1+42=185
	if (i >= 10) { res += i / 10; i %= 10; }
	
	return res += i;
}


int main() {
	bool arr[10001]{ 0 };
	
	for (int i = 0; i < 10000; i++) {
		arr[dn(i)] = 1; // 반환값을 인덱스로 줘서 셀프넘버가 아닐 경우 1을 입력
		if (!arr[i])
			cout << i << endl; // 중요! i가 셀프넘버(0)일 경우 출력한다. 즉, dn(i)(i=생성자)의 반환값이 차기 i를 가리킬 경우 [i]는 셀프넘버가 아닌 것이 된다.
	}

}