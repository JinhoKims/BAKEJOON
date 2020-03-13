#include<iostream>
using namespace std;

int main() {
	
	int sun, moon, height;
	cin >> sun >> moon >> height;

	
	cout << ((height - moon) / (sun - moon)) << endl;
}