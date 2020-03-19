#include<iostream>
#include<algorithm>
using namespace std;



int main() {
	int x, y;
	int w, h;

	int x1, x2, y1, y2;
	cin >> x >> y >> w >> h;
	
	x1 = x; // y축과 x좌표간의 거리
	y1 = y; // x축과 y좌표간의 거리
	x2 = w - x; // 사각형의 오른쪽 경계와 x축간의 거리
	y2 = h - y; // 사각형의 위쪽 경계와 y좌표간의 거리

	cout << min(min(x1, y1), min(x2, y2)) << endl;

}