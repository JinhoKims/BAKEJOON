#include<iostream>
using namespace std;

int func(int && abc) {

	return abc;
}

class Point {
public:
	int num;
	int* ptr;
	Point(int n) {
		cout << "ȣ��" << endl;
		num = n;
		ptr = new int[n] {};
	}
	Point(Point&& p) noexcept{
		cout << "�̵�������" << endl;
		num = p.num;
		this->ptr = p.ptr; // �����Ͱ� ����Ű�� �ּ� �̵�
		p.ptr = nullptr;
	}
	
/*	Point & operator+(Point & p) {
		cout << p.num << endl;
		Point temp(this->num + p.num);
		return temp; // temp�� ����(&)�� ��ȯ�ϱ⿡, operator+()�Լ� ������ ������, �ڵ����� <temp>�� �����Ǹ� <��ȯ ��>�� �����ȴ�!!!(���簡 �ƴϱ� ����)
	}
*/

	Point operator+(Point & p) {
		cout << p.num << endl;
		Point temp(this->num + p.num);
		return temp; // &�� ���� ���, temp ��ü�� ������ �״�� ��ȯ�ϴ� ���� �ƴ϶�, ��ü�� ���� ����� ����Ǿ� ��������ڰ� ȣ��Ǿ��������, (�����Ϸ��� �������)�� ���� �̵������ڸ� ȣ���Ѵ�. 
	}


	Point(Point& sp) {
		cout << "���������" << endl;
		this->num = sp.num;
		this->ptr = new int[num] {};
	}
	
};


int main() {
	

	
	Point* p3 = new Point(11);
	Point ps(1);
	Point p2(*p3 + ps); // �̵������ڰ� �� �� ȣ���. ps3+ps�� ���ϰ�(�ӽð�ü) and move() �Լ��� ����

	cout << p2.num << endl;
}