#include<stdio.h>
#include<stdlib.h>
//void* malloc(size_t size);//memory allocation
//����ڰ� ���� �� ������ �޸𸮸� �Ҵ��� �� �ְ� ���ݴϴ�.
//�Ҵ� �ް��� �ϴ� �޸��� ũ�⸦ bite ������ ����. ������ null
//void free(void* ptr);
//heap���� �Ҵ� ���� �޸� ������ �ٽ� �ü���� ��ȯ���ִ� �Լ�
//�� ���ָ� �޸� ���� ��, �޸� ���� (memory leak)
//void* calloc(size_t nmemb, size_t size);
//�޸��� ��� ��Ʈ�� 0���� �ʱ�ȭ.
//ù ��° �μ��� �޸� ����� ������ ��Ÿ��.
//�� ��° �μ��� �� ����� ����Ʈ ���� ��Ÿ��.
//void *realloc(void *ptr, size_t size)
//�Ҵ�� �޸��� ũ�⸦ �ٲپ� ���Ҵ��� �� ����ϴ� �Լ�.
//ù ��° �μ��� ũ�⸦ �ٲٰ��� �ϴ� �޸� ������ ����Ű�� �����͸� ������
//�� ��° �μ��δ� �ش� �޸� ������ ���Ҵ��� ũ��
int memeory_construction()
{
	printf("low memory \n\
 code Area\n\
 data Area(���� ���� ����)\n\
 heap Area(���� �޸�)\n\
 stack Area(parameter, local variable LIFO)\n\
high memory\n\n\n");
	return 0;
}

int stack()
{
	printf("stack frame  ȣ�� ����\n");
	printf("push�� ����, pop���� ����\n");
	printf("stack�� ���̰� �׿�, stack overflow\n");
	return 0;
}

int dynamic_allocation()
{
	printf("stack -> compile time�� �޸� ���� \n");
	printf("heap -> run time�� ���� ����\n");
	printf("dynamic allocation is allcating memorry for runing time");
}

int main()
{
	memeory_construction();
}