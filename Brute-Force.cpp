#include<iostream>
using namespace std;

template<int n=90>
 int func(int a, int b) {
	 static_assert(n > 60, "asaaskdmkldas");
	 b = a + b;
	a = a + 1;
	return b + 45;
}
 class aos {
 public:
	 int fas() {
		 return 244;
	 }
	 int operator()() {
		 cout << "hjjello" << endl;
		 return 32;
	 }
 };

 void tempfunc(int&& num) {
	 cout << &num << endl;
 }
 
 void Foo(int& i)
 {
	 std::cout << "Passed Value: " << i << std::endl;
 }

 void Foo(const int& i)
 {
	 std::cout << "Passed Value: " << i << std::endl;
 }

 //void ForwardThis(int& i)
 //{
 //  Foo(i);
 //}
 //
 //void ForwardThis(const int& i)
 //{
 //  Foo(i);
 //}

 void ForwardThis(int&& i)
 {
	 Foo(i);
 }

 
int main() {

	int a = 99;
	func(231, 31);
	
	int (aos::* ptr)();
	ptr = &aos::operator();
	
	aos as;
	cout << (as.*ptr)() << endl;

	int (*iptr)() = []()->int {  return 21; };
	a = 880;
	
	int abc = 21;
	int& res = abc;
	int&& num = move(abc);
	tempfunc(move(res)); // 레퍼런스 res도 일반 int 변수로 취급한다. 
	int ga = 1;
	ForwardThis(std::move(ga));      // No
	ForwardThis(1);     // OK
	return 0;

	
	
}

