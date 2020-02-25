#include<iostream>
using namespace std;
enum s { abc=404, def=128, dsg=7707, };
union os {
	char a;
	double b;
	int cf;
	int arr[2][3] = { def,dsg,def,abc,dsg };
};

void main(){
	
	os a;
	cout << a.cf << endl;
	
}