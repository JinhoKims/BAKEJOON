#include<iostream>
using namespace std;

int added_func(int num) { // ž�ٿ����� ~ n ���� ���ϱ� 
	if (num > 0) {
		return num + added_func(num - 1);
	}
	else
		return 0; // 0���� �ݵ�� �������ٰ� ���ù�ȯ (1+0 ...)
}

int pivo_func(int num) { // ���Ҿ� �Ǻ���ġ ����
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