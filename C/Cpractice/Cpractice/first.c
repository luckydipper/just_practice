#include <stdio.h>



int two_num() {
	int num1, num2;
	printf("\n\nGive me first and second variable\n");
	scanf_s("%d %d", &num1, &num2); // Two type scan 2���� % ���� ������ (format specifier), 
	//�ּ� ������(address opperator) ���ۻ���ampersand
	printf("the sum of two number is %d \n", num1 + num2);
	printf("")
	return num1 + num2;
}

int main() {
	int numbers, lo;
	printf("chet int ok? \n");
	scanf_s("%d", &numbers);
	printf("hello %d world \n\n", numbers);
	scanf_s("%d", &lo);
	printf("hi, %d \n\n", lo);
	printf("The sum of two number is %d", numbers + lo);
	two_num();
	return 0;
}

/*���� �� �ּ�*/
//�� �� �ּ�