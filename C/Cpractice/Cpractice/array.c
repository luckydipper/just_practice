#include <stdio.h>

int add_array()
{
	int oneDemension[] = { 7,5,3,6 };
	printf("\nThe size of array is %d\n", sizeof(oneDemension));
	printf("The size of element is %d\n", sizeof(oneDemension[0]));
	return oneDemension;
	//�Լ����� array�� return �ϴ� ��
}

void main()
{
	int grade[5];
	unsigned length = 3;
	for (size_t i = 0; i < length; i++)
	{
		grade[i] = i;
	}
	int arr[][5] =
	{
		{4,2,5,6,5},
		{6},
		{4,5,747,2},
	};
	printf("%d\n", sizeof(int));
	printf("the size of arr[0] is %d\n", sizeof(arr[0]));
	printf("the size of arr[0][0] is %d\n", sizeof(arr[0][0]));
	printf("the size of arr is %d\n", sizeof(arr));
	printf("arr�� arr[0]�̳� arr[0][0]�̳� ���� �ּҰ��� ������, �޸� �������� ���� ũ�Ⱑ �ٸ�.");
	//���� �޸� part�������� �����Ӱ� list �� �� ���� ��
	printf("The result is %d", add_array());
}