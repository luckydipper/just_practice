#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strcpy���� ������ ��, strcpy(������, ����) �ִ´�.


//structure simular with class, so make new type
//data�� �Լ��� ����, ��ü���� ���α׷��� 


typedef struct _User
{
	const char name[10];
	int hp;
	int mp;
	int exp;
}User;
//allias_��Ī 
//typedef keyward : �̹� �����ϴ� type�� ���ο� �̸��� ���� ��

int Us()
{
	User instance;
	printf("10�� �̳��� �̸��� �Է��Ͻʽÿ�.\n");
	gets_s(instance.name,sizeof(instance.name));
	printf("User's name is %s\n", instance.name);
	puts("------\n");
	return 0;
}

int extra()
{
	char array1[100];
	const char names[10] = "HeeSung";
	strcpy(array1, names); // copy �ؼ� ���� �ִ´�.
	char* ptr_2_array = array1;// char ��� �ؾ��� indexing ����
	//array1 = array2 error , because array�� �̸��� �ּڰ��� ��Ÿ���� ���.
	printf("HeeSung�� 5��° ���� %c", ptr_2_array[4]);
	puts("\n-----------");
}

struct monster
{
	// �ȿ��� formating�� �ȵ�. �������
	char name[10];
	int hp;
	int mp;
	int exp;
} ����_����;

int about_structure()
{
	printf("����ü�� ũ��� �� �ɹ�����(attribute)�� ���� ���� �ƴ� �� �� ����.");
	printf("����ü�� �ӵ��� ���� byte padding�� �ֱ� �����̴�.")
}

int uninons()
{//����ü union is simular with structure 
//��� ��� ������ �ϳ��� �޸� ������ ����
	union MyUnion
	{

	};
}

int enums()
{//����ä, ���ο� Ÿ���� �����ϸ鼭, ���ÿ� �ش� Ÿ���� ���� �� �ִ� ������ ������� ���� ����� �� �ִ� Ÿ��

}
int main()
{
	//Us();
	//extra();
	struct monster mushrom; 
	// ������ ���� �� �� ���� struct keyward ���� �� ������ typedef
	mushrom.hp = 10;
	//mushrom.name = "����1"; ������ �� �ִ� invalue error
	strcpy(mushrom.name, "����2");
	mushrom.mp = 10;
	mushrom.exp = 0;
	//puts-> �ڵ� �ٹٲ�, printf->�����ð���
	printf("mushrom name is %s\n", mushrom.name);
	printf("\
		mushrom\n \
		hp is %d\n\
		mp is %d\n\
		exp is %d\n", mushrom.hp, mushrom.mp, mushrom.exp);
	
	puts("--- pointer�� �̿��� ����ü ---\n");
	//����ü �迭
	//pointer to structure -> ȭ��ǥ �����ڷ� memory�� ���� ����
	
	//(*ptr_mushrom).hp; != *ptr_mushrom.hp	
	

	struct monster* ptr_mushrom = &mushrom;
	printf("mushrom's mp is %d ", ptr_mushrom->mp);
	strcpy(ptr_mushrom->name, "rad mus");//10��°�� o���� ©��. overflow�ε�, �׷��� �� �з��� ������ ���� ����.
	puts(ptr_mushrom->name); //puts(ptr_mushrom->mp) error, �� put�� address ������ data�� �д� ��.
	printf("\nmp is %d\n", ptr_mushrom->mp);
	puts(&(ptr_mushrom->name)[6]);//7 ��°�� h�� ���;� �� �� puts�� ���ڿ��� ������ڳ�, 1���� ��� �ȵ�.
	char what_val = ptr_mushrom->name[2];
	printf("%c", what_val);
	//����ü ������ -> ��� ���� �̸�.
}