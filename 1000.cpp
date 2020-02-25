#include<iostream>
#include<vector>
#include<stack>
#include<queue>
using namespace std;

class Class {
public:
	int b;
	Class(int p) { b = p; }
	Class() :b(0) {}

};

Class& Func(Class&& num) {
	return num;
}

int main() {
	Class p = Func(Class(11));
	cout << p.b << endl;
	Class q;
	cout << q.b << endl;
}