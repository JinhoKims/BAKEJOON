#include<iostream>
#include<string>
using namespace std;

int main() {
	
	int sum = 1;
	string str;
	cin >> str;

	for (int i = 1; i < str.length(); i++) {
		if (str[i] == '=') { // 뒷자리가 '='일 경우 조사
			switch (str[i - 1])
			{
			case 'c':
				sum -= 1;
				break;
			case 's':
				sum -= 1;
				break;
			case 'z':
				if (i >= 2) {
					if (str[i - 2] == 'd')  // 그 뒷자리가 'd'일 경우 조사 'dz='
						sum -= 2;
					else
						sum -= 1;
				}
				else // 'z='일 경우
					sum -= 1;
				break;
			default:
				break;
			}
		}
		else if (str[i] == '-') {  // 뒷자리가 '-'일 경우 조사
			switch (str[i - 1])
			{
			case 'c':
				sum -= 1;
				break;
			case 'd':
				sum -= 1;
				break;
			default:
				break;
			}
		}
		else if (str[i] == 'j') {  // 뒷자리가 'j'일 경우 조사
			switch (str[i - 1])
			{
			case 'l':
				sum -= 1;
				break;
			case 'n':
				sum -= 1;
				break;
			default:
				break;
			}
		}
		sum += 1;
	}

	cout << sum << endl;
}