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
		//	cout << "소멸자 " << this << endl;
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
		cout << "이동생성자 " << &p << endl;
		num = p.num;
		this->ptr = p.ptr; // 포인터가 가리키는 주소 이동
		p.ptr = nullptr;
	}

	Point& operator+(Point& p) {
		Point temp(this->num + p.num);
		cout << "임시객체 " << &temp << endl; // ☆ && 우측값 레퍼런스로 선언했을 경우, 임시객체가 소멸되지 않게 잡아준다!!!
		return temp; // temp의 참조(&)를 반환하기에, operator+()함수 영역이 끝나서, 자동으로 <temp>가 삭제되면 <반환 값>도 삭제된다!!!(복사가 아니기 때문)
	}


	/*	Point operator+(Point & p) { // (Point && p)로 할 시, 우측 값 레퍼런스(참조) 가능.(Point(n))
			Point temp(this->num + p.num);
			cout << "임시객체 " << &temp << endl;
			return temp; // &가 없을 경우, temp 객체의 참조를 그대로 반환하는 것이 아니라, 객체를 새로 만들어 복사되어 복사생성자가 호출되어야하지만, (컴파일러가 복사생략)을 통해 이동생성자만 호출한다.
		}
		*/

	Point(const Point& sp) { // ★ const를 지우면 좌측값 레퍼런스가 되니, R-value 우측값을 받지 못함!! 
		cout << "복사생성자" << endl;
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
	Point && p2(move(*p3 + ps)); // 이동 생성자가 두 번 호출됨. ps3+ps의 리턴값(임시객체) and move() 함수로 인하여. 좌측값이 레퍼런스(&,&&)면, (이동)생성자 호출 x.
	cout << "P2 : " << &p2 << endl; // && 우측 값 레퍼런스시 임시객체 유지
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
	*dptr2 = ptr; // ptr2 는 ptr의값(&num)을 가리킴, **dptr로 접근 가능
	*dptr2 = &num; // 같은 의미

	dptr2 = &ptr;
	// 이제 dptr2 != ptr2이 됨(관계가 분리됨)
	*dptr2 = ptr; // ↑같은 의미 // ptr = ptr ※ 서순 주의! 이미 *dptr2은 ptr로 변경되어, ptr2(좌측값)를 제어할 수 없다!
	*ptr2 = 779;
*/	
// 정리 : 포인터의 <하위계층>은 변경 시 <상위계층>도 영향받지만, 포인터와 동등한 차원이상의 다른 포인터가 변환 시는 아무영향 없다!
	/* 밑에 두 줄을 바꿔가면서 포인터개념을 습득하자. (주소와 데이터를 혼동 주의)
	참조자도 포인터와 똑같다.(분신) */

	
/*	dptr2 = dptr;  dptr의 값(= &ptr)만 복사. ※ dptr을 참조하는게 아니다!(주의)
	*dptr2 = ptr;  핵심! <이전 dptr>의 내용(&ptr)가 dptr에 들어감, 후에 dptr값이 바뀌더라도 dptr2의 내용은 바뀌지 않음!!! (그 라인에 내용만 들어가기에) */


	*dptr = ptr2; // ptr = ptr2
	fua(*dptr); // ptr1
	cout << *ptr << endl;

	dptr = &ptr2; // *dptr 주소 자체를 ptr2로 바꿈
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