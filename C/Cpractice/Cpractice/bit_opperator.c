#include <stdio.h>


int ternary_operator() {
	int result, num1, num2;
	printf("Give me first value\n");
	scanf_s("%d", &num1);
	printf("Give me second value\n");
	scanf_s("%d", &num2);
	printf("If num1 is bigger than num2 I will print num1 else num2\n");
	result = (num1 > num2) ? num1 : num2;
	printf("%d\n\n", result);
	return result;
}

int main() {
	printf("ampersand '&' is AND opperator\n");
	printf("| is OR opperator\n");
	printf("^ is  XOR opperator\n");
	printf("~ is NOT opperator\n");
	printf("<< is left shift ������ ����ŭ ��Ʈ�� �������� �̵���Ŵ\n");
	printf("<< is right shift ������ ����ŭ ��Ʈ�� �������� �̵���Ŵ\n");
	int get_result = ternary_operator();
	printf("%d", get_result); // c���� ������ �ٷ� ��µ��� �ʱ���
}