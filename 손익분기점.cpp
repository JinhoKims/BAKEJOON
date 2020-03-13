#include<iostream>
using namespace std;
int main() {
	int a, b, c;
	// a=고정비용, b(x)=가변비용, c(x)=수익(판매비용.가격) // x = 노트북 생산(판매) 대수
	// 손익분기점 : 몇 개가 판매될 경우? c > a + b
	cin >> a >> b >> c;
	int i = 1;
	int s = 0;
	int v = a / (c - b) + 1;
	s = v > 0 ? v : -1;
	cout << s << endl;


}