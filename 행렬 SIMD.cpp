#include<iostream>
using namespace std;
int main() {
	float* MatrixA = new float[4]{ 12.2f, 21.2f, 12.4f, 21.9f };
	float* MatrixB = new float[4]{ 10.5f, 65.1f, 44.1f, 11.1f };
	float* MatrixDes = new float[4];
	_asm {
		
		pushad

		movaps xmm0, MatrixA
		movaps xmm1, MatrixB
		addps xmm0, xmm1

		movaps MatrixDes, xmm0
		popad
	}

	cout << MatrixDes[0] << endl;
}