#include <stdio.h>
#define ARRAY_SIZE 10
#define PRINT_NUM(x) printf("\n������� %d\n",x);\
					printf("��ũ�θ� ������ �Ϸ���,excape sequence �ʿ�\n");\
					printf("�մϴ�.");

					// ��ũ���� �ڷ��� ����, ���ڿ� �̸���, �ڿ��� ȣ��� �Լ�,
//preprocessor
//������ �ɼ��̳� ���Ǻ� �����ϵ� ����
//������ �������ϱ� ��, �۾��� ������.
//�ݺ��Ǵ� �۾��̳� ���� �̸� ���� ����.

int mecro()
{//���� �Ǵ� ���� ��� ��� �� ��, ���.
	//s1�� ũ��� 10�� ��� ��ũ�� �̸��� �빮��.
	//ġȯ �ȴٰ� ���°� ����.
	char s1[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		s1[i] = 97 + i;
	}
	//#undef�� ���� ���� �� ����.
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%c ", s1[i]);
	}
	return 0;
} 

int function_mecro()
{
	PRINT_NUM('a');// �ƽ�Ű �ڵ� ������ a�� 97��.
	PRINT_NUM(4);

	return 0;
}

int main()
{	
	//�տ� # ���� ����ó�� ������.
	//#include ,#define ...

	//#include
	//��������� ���� ���Ͽ� ������ ��
	//����ڰ� ���� �ۼ��� ��� ������ ������ ��, ū����ǥ("")�� ���
	//""����ϸ�, ���� ���丮�� ���� ã��, ǥ�� �ý��� ���丮�� �˻�,


	//#define
	//�Լ��� ����� �ܼ�ȭ �����ִ� ��ũ�θ� ����
	mecro();
	function_mecro();
	return 0;
}