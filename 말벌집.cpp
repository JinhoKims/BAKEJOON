#include<iostream>
using namespace std;
int main() {

	int n;
	cin >> n;
	
	int a = 0, b = 0, c = 0; // a : ��, b : �ӽð�, c : ȸ�� Ƚ��

	while (1)
	{
		if (a >= n)
			break;
		b = 6 * c++;
		a = a + b;


	}

	cout << c << endl;
}