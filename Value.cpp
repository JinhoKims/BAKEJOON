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
		cout << "호출" << endl;
		num = n;
		ptr = new int[n] {};
	}
	Point(Point&& p) noexcept{
		cout << "이동생성자" << endl;
		num = p.num;
		this->ptr = p.ptr; // 포인터가 가리키는 주소 이동
		p.ptr = nullptr;
	}
	
/*	Point & operator+(Point & p) {
		cout << p.num << endl;
		Point temp(this->num + p.num);
		return temp; // temp의 참조(&)를 반환하기에, operator+()함수 영역이 끝나서, 자동으로 <temp>가 삭제되면 <반환 값>도 삭제된다!!!(복사가 아니기 때문)
	}
*/

	Point operator+(Point & p) {
		cout << p.num << endl;
		Point temp(this->num + p.num);
		return temp; // &가 없을 경우, temp 객체의 참조를 그대로 반환하는 것이 아니라, 객체를 새로 만들어 복사되어 복사생성자가 호출되어야하지만, (컴파일러가 복사생략)을 통해 이동생성자만 호출한다. 
	}


	Point(Point& sp) {
		cout << "복사생성자" << endl;
		this->num = sp.num;
		this->ptr = new int[num] {};
	}
	
};


int main() {
	

	
	Point* p3 = new Point(11);
	Point ps(1);
	Point p2(*p3 + ps); // 이동생성자가 두 번 호출됨. ps3+ps의 리턴값(임시객체) and move() 함수로 인해

	cout << p2.num << endl;
}