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
	printf("local�� size�� %d \n", sizeof(local));
	printf("local_point�� size�� %d ���� %p\n", sizeof(local_point), local_point);
	printf("asterisk�� �̿��Ͽ� ������ �� ����. alike %d \n", *local_point);
	printf("p_hello�� size�� %d ���� %p\n", sizeof(p_hello), p_hello);
	printf("�����ͺ����� ũ��� cpu�� ���� �ٸ�. 64bit�� �츮�� ���� %dbyte�� size�� ������ �޸��ּ� 1byte�� ǥ��", sizeof(local_point));
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
	printf("\& empercent, reference operator, �ּ� ������ <ȭ��ǥ�� �����ٰ� ����, address�� �������� ������// �ǿ����ڴ� ���� >\n");
	printf("* asterisk, derefernce operator, ���� ������ <ȭ��ǥ�� �����ٰ� ����, address�� �޴� ������// �ǿ����ڴ� pointer>\n");
	printf("���� Ÿ������ �ְ� �ޱ�!\n\n");
	return 0;
}


int main()
{
	def_pointer();
	how_to_use();
	return 0;

}