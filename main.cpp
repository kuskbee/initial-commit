#include <iostream>

using namespace std;

// 자료형 메모리 공간 일정 크기 사용한다.
// 숫자를 저장하고 사용할 때 용도가 바뀜.
// [1][][][] [][][][]
// [0][][][] [][][][]
// int => CPU, 컴파일러 마다 크기가 다르다.
// 0 ~ 255, 8bit -> 7bit -128 ~ 0 ~ 127
// bit -> 8bit -> byte eascii 
// add comment
int main()
{
	char Letter = 'A';
	int Number1 = 5;
	int Number2 = 4;

	float A = -5.5f;
	int B = (int)A;

	return 0;
}