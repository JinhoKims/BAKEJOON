#include<iostream>
using namespace std;

int func(int && abc) {

	return abc;
}

class Point {
public:
	int num;
	int* ptr;
	~Point() {
		//	cout << "�Ҹ��� " << this << endl;
		num = 0;
		if (ptr != nullptr) {
			delete[] ptr;
		}
	};
	Point(int n) {
		num = n;
		ptr = new int[n] {};
	}
	Point(Point&& p) noexcept {
		cout << "�̵������� " << &p << endl;
		num = p.num;
		this->ptr = p.ptr; // �����Ͱ� ����Ű�� �ּ� �̵�
		p.ptr = nullptr;
	}

	Point& operator+(Point& p) {
		Point temp(this->num + p.num);
		cout << "�ӽð�ü " << &temp << endl; // �� && ������ ���۷����� �������� ���, �ӽð�ü�� �Ҹ���� �ʰ� ����ش�!!!
		return temp; // temp�� ����(&)�� ��ȯ�ϱ⿡, operator+()�Լ� ������ ������, �ڵ����� <temp>�� �����Ǹ� <��ȯ ��>�� �����ȴ�!!!(���簡 �ƴϱ� ����)
	}


	/*	Point operator+(Point & p) { // (Point && p)�� �� ��, ���� �� ���۷���(����) ����.(Point(n))
			Point temp(this->num + p.num);
			cout << "�ӽð�ü " << &temp << endl;
			return temp; // &�� ���� ���, temp ��ü�� ������ �״�� ��ȯ�ϴ� ���� �ƴ϶�, ��ü�� ���� ����� ����Ǿ� ��������ڰ� ȣ��Ǿ��������, (�����Ϸ��� �������)�� ���� �̵������ڸ� ȣ���Ѵ�.
		}
		*/

	Point(const Point& sp) { // �� const�� ����� ������ ���۷����� �Ǵ�, R-value �������� ���� ����!! 
		cout << "���������" << endl;
		this->num = sp.num;
		this->ptr = new int[num] {};
	}

	void FAA(Point k) {
		k.num = 12;
	}
	void fa(){}

};

void fua(int*&);
int main() {
	
	Point q(22);
	Point v(32);
	q.fa();
	q.FAA(v);
	/*
	Point* p3 = new Point(11);
	Point ps(1);
	Point && p2(move(*p3 + ps)); // �̵� �����ڰ� �� �� ȣ���. ps3+ps�� ���ϰ�(�ӽð�ü) and move() �Լ��� ���Ͽ�. �������� ���۷���(&,&&)��, (�̵�)������ ȣ�� x.
	cout << "P2 : " << &p2 << endl; // && ���� �� ���۷����� �ӽð�ü ����
	cout << p2.ptr[4] << endl;
	*/

	
	/*int aa = 112;
	int* ff = &aa;
	int** fff = &ff;
	int **& qq = fff;
	int b = 4;
	int * pb = &b;
	int** ppb = &pb;
	qq = ppb;
	int**& c = ppb;
	*c = &aa;
	**c = 54555;
	*pb = 111;
	*fff = &b;
	*qq = &b;
	ppb = fff;
	**ppb = 77777;
	cout << **fff << endl;*/


	int num = 0;
	int* ptr = &num;
	int** dptr = &ptr;
	int*& ref = ptr;
	int**& dref = dptr;
	
	int num2 = 1;
	int* ptr2 = &num2;
	int** dptr2 = &ptr2;
	int*& ref2 = ptr2;
	int**& dref2 = dptr2;

/*
	*dptr2 = ptr; // ptr2 �� ptr�ǰ�(&num)�� ����Ŵ, **dptr�� ���� ����
	*dptr2 = &num; // ���� �ǹ�

	dptr2 = &ptr;
	// ���� dptr2 != ptr2�� ��(���谡 �и���)
	*dptr2 = ptr; // �谰�� �ǹ� // ptr = ptr �� ���� ����! �̹� *dptr2�� ptr�� ����Ǿ�, ptr2(������)�� ������ �� ����!
	*ptr2 = 779;
*/	
// ���� : �������� <��������>�� ���� �� <��������>�� ���������, �����Ϳ� ������ �����̻��� �ٸ� �����Ͱ� ��ȯ �ô� �ƹ����� ����!
	/* �ؿ� �� ���� �ٲ㰡�鼭 �����Ͱ����� ��������. (�ּҿ� �����͸� ȥ�� ����)
	�����ڵ� �����Ϳ� �Ȱ���.(�н�) */

	
/*	dptr2 = dptr;  dptr�� ��(= &ptr)�� ����. �� dptr�� �����ϴ°� �ƴϴ�!(����)
	*dptr2 = ptr;  �ٽ�! <���� dptr>�� ����(&ptr)�� dptr�� ��, �Ŀ� dptr���� �ٲ���� dptr2�� ������ �ٲ��� ����!!! (�� ���ο� ���븸 ���⿡) */


	*dptr = ptr2; // ptr = ptr2
	fua(*dptr); // ptr1
	cout << *ptr << endl;

	dptr = &ptr2; // *dptr �ּ� ��ü�� ptr2�� �ٲ�
	fua(*dptr); // &ptr <- &ptr2
	cout << *ptr2 << endl;

	ptr = &num;
	ptr2 = &num2;

	dptr = dptr2; // ptr2 = ptr2
	*dptr2 = ptr; // ptr2 = ptr 
	**dptr2 = 777;
	cout << num << endl;

	/* dptr = &ptr , *dptr = &num, **dptr = num */

	*dptr = *dptr2; // ptr2 = ptr
	ptr = ptr2; // ptr2 = ptr
	**dptr = 999; // num = 999
	cout << num << endl;

}

void fua(int*& ref) {
	ref = new int(70);
}