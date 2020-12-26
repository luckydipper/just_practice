#include<stdio.h>
#include<stdlib.h>
//void* malloc(size_t size);//memory allocation
//사용자가 직접 힙 영역에 메모리를 할당할 수 있게 해줍니다.
//할당 받고자 하는 메모리의 크기를 bite 단위로 받음. 없으면 null
//void free(void* ptr);
//heap에서 할당 받은 메모리 공간을 다시 운영체제로 반환해주는 함수
//안 해주면 메모리 부족 즉, 메모리 누수 (memory leak)
//void* calloc(size_t nmemb, size_t size);
//메모리의 모든 비트를 0으로 초기화.
//첫 번째 인수는 메모리 블록의 개수를 나타냄.
//두 번째 인수는 각 블록의 바이트 수를 나타냄.
//void *realloc(void *ptr, size_t size)
//할당된 메모리의 크기를 바꾸어 재할당할 때 사용하는 함수.
//첫 번째 인수는 크기를 바꾸고자 하는 메모리 공간을 가리키는 포인터를 전달음
//두 번째 인수로는 해당 메모리 공간에 재할당할 크기
int memeory_construction()
{
	printf("low memory \n\
 code Area\n\
 data Area(전역 정적 변수)\n\
 heap Area(동적 메모리)\n\
 stack Area(parameter, local variable LIFO)\n\
high memory\n\n\n");
	return 0;
}

int stack()
{
	printf("stack frame  호출 정보\n");
	printf("push로 저장, pop으로 인출\n");
	printf("stack이 쌓이고 쌓여, stack overflow\n");
	return 0;
}

int dynamic_allocation()
{
	printf("stack -> compile time에 메모리 결정 \n");
	printf("heap -> run time에 직접 결정\n");
	printf("dynamic allocation is allcating memorry for runing time");
}

int main()
{
	memeory_construction();
}