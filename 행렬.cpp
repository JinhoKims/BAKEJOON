#include<iostream>
using namespace std;
int main() {
	int change = 120;
	int way = 0;
	int min = change;

	for(int i=0; i*50<=change; i++)
		for (int j = 0; j * 10 <= change; j++) {
			if ((i * 50) + (j * 10) == change) {
				way++;
				if (min > i + j) {
					cout << i*50 << " " << j*10 << endl;
					min = i + j;
				}
			}
		}

	cout << "경우의 수 " << way << endl << "최소 해 " << min << endl;
}