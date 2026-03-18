#include <iostream>

int main()
{
	/*
		cout 출력 담당 객체
		스트림 삽입 연산자 (stream insertion operator)
		'<<' 이용하여 " "안에 있는 문자열 출력함
	*/
	printf("hello world.\n");//c언어 + c++(not standard) 가능
	std::cout << "Hello World" << std::endl;//c++ standard
	//std::cin>>" 입력 받을 때";

	
	return 0; // w/o error
}