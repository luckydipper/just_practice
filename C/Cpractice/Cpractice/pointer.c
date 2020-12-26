#include <stdio.h>
//function prototype 함수 원형
int function();
int how_to_use();
int def_pointer();
int function_pointer(int, int);



int main()
{
	def_pointer();
	how_to_use();
	function();
	int(*get_function_pointer) (int, int);//function_pointer라는 변수를 선언.
	//함수 포인터를 설정하는 법임.
	get_function_pointer = &function_pointer; //funcion_pointer만 써도 똑같다. function_pointer 주소값을 formating 함.
	printf("The size of int is %d \nIndexing refence %p,\nWhat is next index", (int)sizeof(get_function_pointer),&get_function_pointer);
	printf("%d", get_function_pointer(5, 8));
	return 0;
}

int function_pointer(int arg1, int arg2)
{
	printf("the sum of %d and %d is %d\n", arg1, arg2, arg1 + arg2);
	return 9;
}


int sum(int* par1,int* par2, int* result) //옆에 타입을 지정해서 받자.
{//pointer 객체를 받으므로, asterisk를 사용해서 받아야함.
	*result = *par1 + *par2;
	return 0;
}

int function()
{
	//인수 전달하는 2가지 방법
	int arg1 = 5, arg2 = 2, result = 0;
	printf("argument를 전달하는 2가지 방법\n");
	printf("1. call by value 값에 의한 전달 \n\
-> python때 했던 것 처럼 그냥 값을 전달\n\n");
	printf("2. call by reference 참조에 의한 전달 \n\
-> 변수의 주소값을 전달함 asterisk를 붙힌 연산자에 직접");
	sum(&arg1, &arg2, &result);
	printf("%d+%d=%d", arg1, arg2, result);
	return 0;
}

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
	printf("local의 size는 %d \n", (int)sizeof(local));
	printf("local_point의 size는 %d 값은 %p\n", (int)sizeof(local_point), local_point);
	printf("asterisk를 이용하여 가져올 수 있음. alike %d \n", *local_point);
	printf("p_hello의 size는 %d 값은 %p\n", (int)sizeof(p_hello), p_hello);
	printf("포인터변수의 크기는 cpu에 따라 다름. 64bit인 우리집 컴은 %dbyte의 size를 가지고 메모리주소 1byte를 표현", (int)sizeof(local_point));
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
	printf("& empercent, reference operator, 주소 연산자 <화살표가 나간다고 생각, address를 가져오는 연산자// 피연산자는 변수 >\n");
	printf("* asterisk, derefernce operator, 참조 연산자 <화실표가 박힌다고 생각, address를 받는 연산자// 피연산자는 pointer\
포인터에서 데이터 값에 접근할 때 쓰임. 포인터 변수를 정의하거나 받을 때 쓰임>\n");
	printf("같은 타입으로 주고 받기!\n\n");
	return 0;
}


