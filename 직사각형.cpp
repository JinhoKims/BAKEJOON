#include<iostream>
#include<algorithm>
using namespace std;



int main() {
	int x, y;
	int w, h;

	int x1, x2, y1, y2;
	cin >> x >> y >> w >> h;
	
	x1 = x; // y��� x��ǥ���� �Ÿ�
	y1 = y; // x��� y��ǥ���� �Ÿ�
	x2 = w - x; // �簢���� ������ ���� x�ణ�� �Ÿ�
	y2 = h - y; // �簢���� ���� ���� y��ǥ���� �Ÿ�

	cout << min(min(x1, y1), min(x2, y2)) << endl;

}