#include <stdio.h>

extern User[20];
//�ܺο��� list ������ ��, ũ����� �����;���!!

int add_two(int a, int b)
{
	printf("load add function\n\n %d + %d = %d\n", a, b, a + b);
	return a + b;
}

int print_name(char* names)
{// �迭�� �Ű������� �������� �����ͷ� �ްų� ���ȣ ������
	printf("Dev's name is");
	puts(User);//\0'�� ���ö������� ���ڵ��� ǥ�����(output)�� �� ���
	printf("User name is ");
	puts(names);
	printf(" second character is %c or %c", *(names+1), names[1]);
	//�׳� pointer�� �޾Ƽ�, names[0] indexing�� �ȵǴµ�
	return 0;
}

//int main()
//{
//	printf("�ܺ� main is compiled.");
//	print_name(User);
//}

//�Լ��� ���� �κ��� �ִ´�.