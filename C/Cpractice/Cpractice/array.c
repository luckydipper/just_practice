#include <stdio.h>

int add_array()
{
	int oneDemension[] = { 7,5,3,6 };
	printf("\nThe size of array is %d\n", sizeof(oneDemension));
	printf("The size of element is %d\n", sizeof(oneDemension[0]));
	return oneDemension;
	//함수에서 array를 return 하는 법
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
	printf("arr나 arr[0]이나 arr[0][0]이나 같은 주소값을 갖지만, 메모리 구조에서 같는 크기가 다름.");
	//동적 메모리 part에가야지 자유롭게 list 쓸 수 있을 듯
	printf("The result is %d", add_array());
}