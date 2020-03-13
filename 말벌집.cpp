#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	
	int a = 0, b = 0, c = 0; // a : 값, b : 임시값, c : 회전 횟수

	while (1)
	{
		if (a >= n)
			break;
		b = 6 * c++;
		a = a + b;


	}

	cout << c << endl;
}