#include <stdio.h>

extern User[20];
//외부에서 list 가져올 때, 크기까지 가져와야지!!

int add_two(int a, int b)
{
	printf("load add function\n\n %d + %d = %d\n", a, b, a + b);
	return a + b;
}

int print_name(char* names)
{// 배열을 매개변수로 받으려면 포인터로 받거나 대괄호 붙히기
	printf("Dev's name is");
	puts(User);//\0'이 나올때까지의 문자들을 표준출력(output)에 쭉 출력
	printf("User name is ");
	puts(names);
	printf(" second character is %c or %c", *(names+1), names[1]);
	//그냥 pointer로 받아서, names[0] indexing이 안되는듯
	return 0;
}

//int main()
//{
//	printf("외부 main is compiled.");
//	print_name(User);
//}

//함수의 구현 부분을 넣는다.