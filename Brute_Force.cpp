#include<iostream>
using namespace std;
int main() {
	int num;
	int max;
	int result = 0;
	cin >> num >> max;
	int* cards = new int[num];
	for (int i = 0; i < num; i++)
		cin >> cards[i];

	for (int i = 0; i < num - 2; i++) {
		for (int j = i + 1; j < num - 1; j++) {
			for (int k = j + 1; k < num; k++) {
				if (cards[i] + cards[j] + cards[k] <= max && cards[i] + cards[j] + cards[k] > result)
					result = cards[i] + cards[j] + cards[k];
			}
		}
	}
	cout << result << endl;


}