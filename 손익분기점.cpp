#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	// a=�������, b(x)=�������, c(x)=����(�Ǹź��.����) // x = ��Ʈ�� ����(�Ǹ�) ���
	// ���ͺб��� : �� ���� �Ǹŵ� ���? c > a + b
	cin >> a >> b >> c;
	int i = 1;
	int s = 0;
	int v = a / (c - b) + 1;
	s = v > 0 ? v : -1;
	cout << s << endl;


}