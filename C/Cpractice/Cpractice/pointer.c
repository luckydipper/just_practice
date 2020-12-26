#include <stdio.h>
//function prototype �Լ� ����
int function();
int how_to_use();
int def_pointer();
int function_pointer(int, int);



int main()
{
	def_pointer();
	how_to_use();
	function();
	int(*get_function_pointer) (int, int);//function_pointer��� ������ ����.
	//�Լ� �����͸� �����ϴ� ����.
	get_function_pointer = &function_pointer; //funcion_pointer�� �ᵵ �Ȱ���. function_pointer �ּҰ��� formating ��.
	printf("The size of int is %d \nIndexing refence %p,\nWhat is next index", (int)sizeof(get_function_pointer),&get_function_pointer);
	printf("%d", get_function_pointer(5, 8));
	return 0;
}

int function_pointer(int arg1, int arg2)
{
	printf("the sum of %d and %d is %d\n", arg1, arg2, arg1 + arg2);
	return 9;
}


int sum(int* par1,int* par2, int* result) //���� Ÿ���� �����ؼ� ����.
{//pointer ��ü�� �����Ƿ�, asterisk�� ����ؼ� �޾ƾ���.
	*result = *par1 + *par2;
	return 0;
}

int function()
{
	//�μ� �����ϴ� 2���� ���
	int arg1 = 5, arg2 = 2, result = 0;
	printf("argument�� �����ϴ� 2���� ���\n");
	printf("1. call by value ���� ���� ���� \n\
-> python�� �ߴ� �� ó�� �׳� ���� ����\n\n");
	printf("2. call by reference ������ ���� ���� \n\
-> ������ �ּҰ��� ������ asterisk�� ���� �����ڿ� ����");
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
	printf("local�� size�� %d \n", (int)sizeof(local));
	printf("local_point�� size�� %d ���� %p\n", (int)sizeof(local_point), local_point);
	printf("asterisk�� �̿��Ͽ� ������ �� ����. alike %d \n", *local_point);
	printf("p_hello�� size�� %d ���� %p\n", (int)sizeof(p_hello), p_hello);
	printf("�����ͺ����� ũ��� cpu�� ���� �ٸ�. 64bit�� �츮�� ���� %dbyte�� size�� ������ �޸��ּ� 1byte�� ǥ��", (int)sizeof(local_point));
	//16������ ���� �����ڴ� %#x ������ ���ڿ� �������� %p
	return 0;
}

int def_pointer()
{
	printf("The pointer means memory space that contain address data\n\n");
	printf("pointer should be defined and format simulteniously\n");
	printf("�����ʹ� �޸𸮰����̴�.\n\
			�� �޸� ������(1Byte, 8bit 16������ 0xAB AB-> ���� 2������ ����� ��ġ�� ��)\n\
			�ּҰ� �����͸� �����ϱ� ���� ���ȴ�.\n");
	printf("�����ʹ� ���ǵʰ� ���ÿ� �ʱ�ȭ�Ǿ���Ѵ�. �ȱ׷��� �޸𸮰� ����Ǽ� ������ ����.\n\n\n");
	printf("& empercent, reference operator, �ּ� ������ <ȭ��ǥ�� �����ٰ� ����, address�� �������� ������// �ǿ����ڴ� ���� >\n");
	printf("* asterisk, derefernce operator, ���� ������ <ȭ��ǥ�� �����ٰ� ����, address�� �޴� ������// �ǿ����ڴ� pointer\
�����Ϳ��� ������ ���� ������ �� ����. ������ ������ �����ϰų� ���� �� ����>\n");
	printf("���� Ÿ������ �ְ� �ޱ�!\n\n");
	return 0;
}


