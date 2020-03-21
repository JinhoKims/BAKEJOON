#include<iostream>
using namespace std;
int func(int);
int main() {
	int a;
	a = 21;
	int b;
	cin >> a;

	_asm {
		mov ecx, b
		mov eax, ecx
		paddd xmm0, xmm1
	}

	cout << func(a) << endl;
}

int func(int num) {
	if (num == 1)
		return 1;
	else
		return num * func(num - 1);
}