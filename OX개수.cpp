#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	string* arr = new string[a];
	int* score = new int[a] {0};
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	int c = 0;
	for (int i = 0; i < a; i++) {
		for (unsigned int j = 0; j < arr[i].size(); j++)
		{
			
			if (arr[i].at(j) == 'O') {
				score[i] += ++c;
			}
			else {
				c = 0;
			}
		}
		c = 0;
	}

	for (int i = 0; i < a; i++) {
		cout << score[i] << endl;
	}


}