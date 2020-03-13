#include<iostream>
using namespace std;

template<typename T>
class Wrapper {
	T data;
public:

	Wrapper(T aa);
	template<typename S> T ShowData();

};
template<typename T>
Wrapper<T>::Wrapper(T aa) { cout << "T" << endl; }

template<typename T>
template<typename S>
T Wrapper<T>::ShowData()
{
	return T();
}

template<>
class Wrapper<int> {
public:
	Wrapper(int abc);
};

Wrapper<int>::Wrapper(int a) // 특수화된 클래스의 클래스 밖 정의는 템플릿이 따로 필요없음!! 
							 // 이미 위에서 특수화<>가 진행됬기 때문.
{
	cout << "hi im Int" << endl;
}

// class template definition
template <typename T>
class Stack
{
public:
	void Push(T a);
	template <typename U> T foo(U a);
};


// 1. 클래스 템플릿 멤버함수의 외부구현
template <typename T>
void Stack<T>::Push(T a) {}

template<>
void Stack<int>::Push(int z) {
	cout << "int" << endl;
}


// 2. 멤버함수 템플릿의 외부구현
template <>
template <>
int Stack<int>::foo(double a) {
	cout << "double"<< endl; return a;
}

template<class T>
class Wrappers {
	T wData;
public:
	Wrappers(T t) :wData(t) { cout << "T" << endl; }
	void ShowData();
};

template<>
class Wrappers<char*> {
	char* pus;
public:
	Wrappers(char* q);
	void ShowData();
};

Wrappers<int*>::Wrappers(int* s) {
	cout << "s" << endl;
}
void Wrappers<char*>::ShowData() {
	cout << "char" << endl;
}






int main() {
	double a = 2;
	int p = 1;
	Stack<int> f;
	f.foo<>((double)p);

}

