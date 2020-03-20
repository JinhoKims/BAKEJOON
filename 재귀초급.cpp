#include<iostream>
using namespace std;
int func(int);
int main() {
	int a;
	cin >> a;
	cout << func(a) << endl;
}

int func(int num) {
	if (num == 1)
		return 1;
	else
		return num * func(num - 1);


}