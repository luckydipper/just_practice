//#include <stdio.h> �ι� ���Խ�Ű�� �ȵ�.
//HEADER ã��, HEADER�� ���� �̸��� C ������ �ʿ��� �� �ƴѰ�?
//header���� ����. headerfile���� function body�� ���� �ʴ� ���� ����.
#include "my.h"
#include <stdio.h>
//<>�� �̸� ������ ��ο��� �������. ""�� �ش� ������ ���
#define name "kimHeeSung"

//��������
char User[20] = name;
char User2[20] = "khatch";

int main()
{
	puts(User2);
	puts(name);
	printf("%c",User[2]);
	printf("--- Main file start ---\n");
	int sums = add_two(5, 6);

	char User_name[20];
	gets_s(User_name, 20);
	print_name(User_name);//string �ּҰ��� ũ�⸦
	//int sizeof_name ���� ������ �ʿ䰡 ���°���, �������� \0����.
	//call by value call by reference
	printf("-- Main file end ---\n");
}