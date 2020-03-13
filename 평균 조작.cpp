#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int * arr = new int[a];

	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	int max = 0;
	for (int i = 0; i < a; i++) {
		if (max < arr[i])
			max = arr[i];
	}
	
	float* farr = new float[a];
	for (int i = 0; i < a; i++) {
		farr[i] = (float)arr[i] / max * 100;
	}
	float r = 0.0f;
	for (int i = 0; i < a; i++) {
		r += farr[i];
	}
	cout << r / a << endl;

}
