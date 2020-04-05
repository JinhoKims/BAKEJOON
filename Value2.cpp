#include<iostream>
using namespace std;

int& func1(int& a) { return a; }
int func2(int b) { return b; }

int main() {
    int a = 3;
    func1(a) = 45; // 리턴 값을 45로 해라.
    std::cout << func1(a) << std::endl;
    
    int b = 2;
    a = func2(b);               // 가능
  //  func2(b) = 5;               // 오류 1
  // std::cout << &func2(b) << std::endl;  // 오류 2
}