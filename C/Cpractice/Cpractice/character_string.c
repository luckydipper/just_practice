//stream : �������� �̻�ȭ�� �帧�� �ǹ�
//EOF(End Of File) : ������ ���� ���� ���� ��, ������ ��ȯ �Ǵ� ��
//window : Control z 
//UNIX : Control D
//�ϳ��� ���ڸ� �Է��� ������ getchar() �Լ��� fgetc() �Լ��� <���� ����>
//�ϳ��� ���ڸ� ����� ������ putchar() �Լ��� fputc() �Լ��� <���� ����>
//puts() �ڵ� �ٹٲ�

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//char str1[] = "This is ũ�� �������� ���� string";
	//char str2[7] = "string"; ���������� null ���� ������ �� ũ�� ��Ƴ��ٸ�, �������� null ���� �� ����.
	//printf("str1���� %s�� ���� ��\n\n", str1);
	//int Nulls = '\0';
	//printf("���ڿ��� �������� %d", Nulls);
	//strcpy�� null���� ������.

	char name[] = "This";
	//ũ�⸦ �������� ������ �ڵ����� 5 ������ \0���� ����.
	puts(name);
	puts("���ڿ��� �Է��ϼ���"); //ó���� 5ĭ���� �����߱⿡, 4�� �̻��� ���ڿ��� null
	fgets(name, sizeof(name), stdin);
	printf("size of name is %d\n", sizeof(name)); // size of name return int, put�� ���ڿ���
	//���ڿ� �Է� �޾Ƽ� �ֱ�
	printf("3��° ���ڿ��� ���� %c", name[2]);
	fputs("�Է� ���� ���ڿ���", stdout);
	puts(name);
}