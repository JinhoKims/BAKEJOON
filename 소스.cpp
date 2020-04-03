#include<iostream>
#include<memory>
using namespace std;

class Point {
public:
	int abc;
public:
	Point() { abc = 7; };
	int Get_abc() { return abc; }
};


int main() {

	shared_ptr<Point> sp(new Point());
	
	weak_ptr<Point> wp = sp;
	sp.reset(); // sp�� ���µǸ� wp�� ���µǴ�, sp2�� null�� ����Ŵ
	shared_ptr<Point> sp2 = wp.lock();

	cout << sp2->Get_abc() << endl;
}