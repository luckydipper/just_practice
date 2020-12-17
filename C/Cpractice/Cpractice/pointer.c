#include <stdio.h>


int how_to_use()
{
	int local[4][2] =
	{
		{3,6},
		{1,5},
		{6,20},
		{4,7}
	};
	int hello = 9;
	int* p_hello = &hello;
	int* local_point = &local;
	printf("local의 size는 %d \n", sizeof(local));
	printf("local_point의 size는 %d 값은 %p\n", sizeof(local_point), local_point);
	printf("asterisk를 이용하여 가져올 수 있음. alike %d \n", *local_point);
	printf("p_hello의 size는 %d 값은 %p\n", sizeof(p_hello), p_hello);
	printf("포인터변수의 크기는 cpu에 따라 다름. 64bit인 우리집 컴은 %dbyte의 size를 가지고 메모리주소 1byte를 표현", sizeof(local_point));
	//16진수의 서식 지정자는 %#x 포인터 문자열 포멧팅은 %p
	return 0;
}

int def_pointer()
{
	printf("The pointer means memory space that contain address data\n\n");
	printf("pointer should be defined and format simulteniously\n");
	printf("포인터는 메모리공간이다.\n\
			이 메모리 공간은(1Byte, 8bit 16진수로 0xAB AB-> 각각 2진수로 만들어 겹치면 됨)\n\
			주소값 데이터를 저장하기 위해 사용된다.\n");
	printf("포인터는 정의됨과 동시에 초기화되어야한다. 안그러면 메모리가 변경되서 오류가 난다.\n\n\n");
	printf("\& empercent, reference operator, 주소 연산자 <화살표가 나간다고 생각, address를 가져오는 연산자// 피연산자는 변수 >\n");
	printf("* asterisk, derefernce operator, 참조 연산자 <화실표가 박힌다고 생각, address를 받는 연산자// 피연산자는 pointer>\n");
	printf("같은 타입으로 주고 받기!\n\n");
	return 0;
}


int main()
{
	def_pointer();
	how_to_use();
	return 0;

}