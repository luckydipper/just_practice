#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int buffers()
{// ǥ�� ����� �Լ��� ���۶�� �ӽ� �޸� ������ ���ļ� ���α׷��� ���޵�
	//\n ��, ���Ͱ� ���ö�, ��� ������ ����
	//buffering : ����� ���ۿ� �����͸� �����ϴ� �ൿ
	//but game ���� �������� �ﰢ�� ������ �ʿ�.
	//line buffered, � ���ڰ� ��Ÿ�� �� ���� ����
	//fully buffered, ���۰� ���� ����,
	//fflush & setvbuf 
	puts("--- buffer start ---\n");
	char sex[3];
	puts("����� ������ �Է��Ͻʽÿ�.\n");
	scanf_s("%s", &sex, 3);// Enter) Ű�� �Է� ���ۿ� �����ֱ� ������ ����,
	//getchar ���
	//"m" -> m\0
	if ((*sex == 'M') | (*sex == 'm')) { printf("you are mail\n"); }
	else if((*sex == 'F') | (*sex == 'f')) { printf("you are femail\n"); }
	else { printf("error\n"); }

	puts("--- buffer end ---\n");
	return 0;
}

int book()
{
	char str[20];

	char chars;
	puts("����� �̸��� �����ּ��� : ");

	gets_s(str, 20);
	//scanf_s("%s", &str, 20);
	//���� scanf�� �Է¹����� ���ۿ� \n�� ���ͱ��� ���� �ڿ� �ѱ��ڸ� �Է¹޴� 
	//scanfchar ����.
	//fflush(stdin); // ǥ�� �Է� ��Ʈ���� �Է� ���۸� ���  

	puts("����� ������ ���ڷ� �����ּ��� : ");

	puts("(����=M, ����=F)");
	scanf_s("%c", &chars, 1);
	return 0;
}

int file_read_write()
{
	//fopen ���� ����ü ������ �����͸� ������. �� �� ������ null
	//fscan
	//fclose���������� ������ 0
	return 0;
}

int main()
{
	book();
	buffers();
}