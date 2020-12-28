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
	printf("����ü�� �ӵ��� ���� byte padding�� �ֱ� �����̴�.");
};

int uninons()
{//����ü union is simular with structure 
//��� ��� ������ �ϳ��� �޸� ������ ����
	puts("--- Start UNION example ----\n");
	typedef union
	{// union�� method�� �ڷ����� �޶� ���� �޸� ������ ������.
		unsigned char first;// 1 byte, ����� 2byte��
		unsigned short second;// 2byte
		unsigned int theird;//4byte
	}same_data;
	
	same_data date;
	date.theird = 0x12345678;// thired �� �־���� �� �۵���. first�� ������ overflow����Ŵ.
	printf("10���� value is %d\n", date.first);
	printf("1byte -> 8bit, 4bit+4bit, 16���� + 16����\n");
	printf("first char 1byte data %x\n and its size is %d\n\n", date.first, (int)sizeof(date.first));
	printf("second short 2byte data %x\n and its size is %d\n\n", date.second,(int)sizeof(date.second));
	printf("third int 4byte data %x\n and its size is %d\n\n", date.theird, (int)sizeof(date.theird));

	puts("--- END UNION example ----\n");
	return 0;
}



int enums()
{//����ä(���, enumeration), ���ο� Ÿ���� ������. ������ ����� �̸��� ������ �����ϱ� ������.
 //������ ������ ���ڷ� �ܼ��ϰ� ġȯ�ؼ� ǥ��
 //�̸��� snake ǥ�� ������ ���� �빮��.

	/*ex) const int value1 = 1;
		  const int value2 = 2;
		  const int value3 = 3;*/
	
	puts("--- enum start ---");
	enum day_of_week
	{
		MON, // �ʱ� �� ���� ���ϸ� �ڵ����� 0, �������� 1�� Ŀ���� �����.
		TUS,
		WEN,
		THI,
		FRI,
		SAT,
		SUN
	};

	enum day_of_week week;
	week = SAT;
	printf("SAT value is %d\n", week);
	printf("WEN value is %d\n", WEN);
	puts("--- enum end ---");
	return 0;
}
int main()
{	
	enums();
	uninons();
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