#include<iostream>
using namespace std;
int main() {

	int cost = 0;
	int n;
	cin >> n;

	if (n % 5 != n) { // 5로 나눠젔을 경우
		cost += n / 5;
		n %= 5;
	}

	if (n % 3 != 0) { // 3으로 안나눠질 겨우
		if (cost) { // 미리 5로 나눠났을 경우
			cost -= 1;
			n += 5; // 5만큼 반환
		}
		if (n % 3 != 0) { // 그래도 안나눠질 경우
			cost = -1;
		}
		else { // 다시 3으로 나눠질 경우
			cost += n / 3;
		}
	}
	else { // 3으로 나눠질 경우
		cost += n /= 3;
	}

	cout << cost << endl;
	
}