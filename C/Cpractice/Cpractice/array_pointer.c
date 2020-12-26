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
	int arr[3] = {10, 20, 30}; // 배열 선언

	int* ptr_arr = arr;        // 포인터에 배열의 이름을 대입함  
	printf("배열의 이름을 이용하여 배열 요소에 접근 : %d %d %d\n", arr[0], arr[1], arr[2]);

	printf("포인터를 이용하여 배열 요소에 접근 : %d %d %d\n", *ptr_arr, ptr_arr[1], ptr_arr[2]);
	//*(ptr_arr + n) = ptr_arr[n]
	printf("배열의 이름을 이용한 배열의 크기 계산 : %d\n", (int)sizeof(arr));

	printf("포인터를 이용한 배열의 크기 계산 : %d\n", (int)sizeof(ptr_arr));
}

int pointer_to_an_array()
{
	printf("-- pointer to an array --\n");
	printf("배열포인터\n");
	int metrix[4][4] =
	{
		{0,1,2,3},
		{5,6,7,8},
		{9,10,11,12},
		{13,14,15,16}
	};
	int length = sizeof(metrix) / sizeof(int);
	printf("%d\n", metrix[3][2]);
	metrix[3][2] = 5; // formating 되는데?
	printf("%d 그냥 python 처럼도 formating 된다.\n", metrix[3][2]);
	printf("pointer를 이용한 indexing %d 필요한가?\n", *metrix[1]);
	//*metrix는 왜 안되? 피연산자가 포인터인데 -> list를 가르키는 포인터라서
	printf("이러면 되네?%d\n", **metrix);
	printf("결론 : 배열이름 []만으로 참조해도 되고, 배열포인터로 참조해도 됨.");
	int(*ptr_metrix)[4] = metrix;
	//열의 크기 만큼의 크기의 pointer array
	printf("%d \n", ptr_metrix[3][2]);
	//1.int (*ptr)[3]과 2.int* ptr[3]은 다름.
	//1은 int를 저장하는 2차원 배열 가르키는 포인터
	//2는 int를 가르킬 수 있는 포인터 3개를 모아놓음.
}

int array_of_pointers()
{
	printf("-- array of pointers --\n");
	printf("포인터배열\n 배열 요소가 pointer임");
	int arr_len;
	int num1 = 10, num2 = 20, num3 = 30;
	int* array_of_ptr[3] = { &num1, &num2, &num3 };// array 안 요소들이 pointer 
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
	printf("%d", *&a); // 보통변수는 주소값을 가르킴
	return 0;
}
