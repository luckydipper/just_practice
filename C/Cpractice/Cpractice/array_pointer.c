#include <stdio.h>

int pointer();


int main()
{
	//pointer();
	//array_of_pointers();
	pointer_to_an_array();
}

int pointer()
{
	int arr[3] = {10, 20, 30}; // �迭 ����

	int* ptr_arr = arr;        // �����Ϳ� �迭�� �̸��� ������  
	printf("�迭�� �̸��� �̿��Ͽ� �迭 ��ҿ� ���� : %d %d %d\n", arr[0], arr[1], arr[2]);

	printf("�����͸� �̿��Ͽ� �迭 ��ҿ� ���� : %d %d %d\n", *ptr_arr, ptr_arr[1], ptr_arr[2]);
	//*(ptr_arr + n) = ptr_arr[n]
	printf("�迭�� �̸��� �̿��� �迭�� ũ�� ��� : %d\n", (int)sizeof(arr));

	printf("�����͸� �̿��� �迭�� ũ�� ��� : %d\n", (int)sizeof(ptr_arr));
}

int pointer_to_an_array()
{
	printf("-- pointer to an array --\n");
	printf("�迭������\n");
	int metrix[4][4] =
	{
		{0,1,2,3},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int length = sizeof(metrix) / sizeof(int);
	printf("%d\n", metrix[3][2]);
	metrix[3][2] = 5; // formating �Ǵµ�?
	printf("%d �׳� python ó���� formating �ȴ�.\n", metrix[3][2]);
	printf("pointer�� �̿��� indexing %d �ʿ��Ѱ�?\n", *metrix[1]);
	//*metrix�� �� �ȵ�? �ǿ����ڰ� �������ε� -> list�� ����Ű�� �����Ͷ�
	printf("�̷��� �ǳ�?%d\n", **metrix);
	printf("��� : �迭�̸� []������ �����ص� �ǰ�, �迭�����ͷ� �����ص� ��.");
	int(*ptr_metrix)[4] = metrix;
	//���� ũ�� ��ŭ�� ũ���� pointer array
	printf("%d \n", ptr_metrix[3][2]);
	//1.int (*ptr)[3]�� 2.int* ptr[3]�� �ٸ�.
	//1�� int�� �����ϴ� 2���� �迭 ����Ű�� ������
	//2�� int�� ����ų �� �ִ� ������ 3���� ��Ƴ���.
}

int array_of_pointers()
{
	printf("-- array of pointers --\n");
	printf("�����͹迭\n �迭 ��Ұ� pointer��");
	int arr_len;
	int num1 = 10, num2 = 20, num3 = 30;
	int* array_of_ptr[3] = { &num1, &num2, &num3 };// array �� ��ҵ��� pointer 
	arr_len = sizeof(array_of_ptr) / sizeof(array_of_ptr[0]);
	printf("[");
	for (size_t i = 0; i < arr_len; i++)
	{
		printf("%d, ", *array_of_ptr[i]);
	}
	printf("]");

	printf("[");
	for (size_t i = 0; i < arr_len; i++)
	{
		printf("%p, ", array_of_ptr[i]);
	}
	printf("]");
}

int extra()
{
	int a = 6;
	printf("%d", *&a); // ���뺯���� �ּҰ��� ����Ŵ
	return 0;
}
