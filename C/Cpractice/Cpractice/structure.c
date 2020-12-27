#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//strcpy에서 복사할 때, strcpy(변수에, 값을) 넣는다.


//structure simular with class, so make new type
//data와 함수를 묶어, 객체지향 프로그래밍 


typedef struct _User
{
	const char name[10];
	int hp;
	int mp;
	int exp;
}User;
//allias_별칭 
//typedef keyward : 이미 존재하는 type에 새로운 이름을 붙힐 때

int Us()
{
	User instance;
	printf("10자 이내로 이름을 입력하십시오.\n");
	gets_s(instance.name,sizeof(instance.name));
	printf("User's name is %s\n", instance.name);
	puts("------\n");
	return 0;
}

int extra()
{
	char array1[100];
	const char names[10] = "HeeSung";
	strcpy(array1, names); // copy 해서 집어 넣는다.
	char* ptr_2_array = array1;// char 라고 해야지 indexing 가능
	//array1 = array2 error , because array의 이름은 주솟값을 나타내는 상수.
	printf("HeeSung의 5번째 값은 %c", ptr_2_array[4]);
	puts("\n-----------");
}

struct monster
{
	// 안에서 formating이 안됨. 멤버변수
	char name[10];
	int hp;
	int mp;
	int exp;
} 변수_선언;

int about_structure()
{
	printf("구조체의 크기는 각 맴버변수(attribute)의 합일 수도 아닐 수 도 있음.");
	printf("구조체의 속도를 위해 byte padding을 넣기 때문이다.")
}

int uninons()
{//공용체 union is simular with structure 
//모든 멤버 변수가 하나의 메모리 공간을 공유
	union MyUnion
	{

	};
}

int enums()
{//열거채, 새로운 타입을 선언하면서, 동시에 해당 타입이 가질 수 있는 정수형 상숫값도 같이 명시할 수 있는 타입

}
int main()
{
	//Us();
	//extra();
	struct monster mushrom; 
	// 변수를 선언 할 때 마다 struct keyward 붙히 기 싫으면 typedef
	mushrom.hp = 10;
	//mushrom.name = "버섯1"; 수정할 수 있는 invalue error
	strcpy(mushrom.name, "버섯2");
	mushrom.mp = 10;
	mushrom.exp = 0;
	//puts-> 자동 줄바꿈, printf->포메팅가능
	printf("mushrom name is %s\n", mushrom.name);
	printf("\
		mushrom\n \
		hp is %d\n\
		mp is %d\n\
		exp is %d\n", mushrom.hp, mushrom.mp, mushrom.exp);
	
	puts("--- pointer를 이용한 구조체 ---\n");
	//구조체 배열
	//pointer to structure -> 화살표 연산자로 memory에 접근 가능
	
	//(*ptr_mushrom).hp; != *ptr_mushrom.hp	
	

	struct monster* ptr_mushrom = &mushrom;
	printf("mushrom's mp is %d ", ptr_mushrom->mp);
	strcpy(ptr_mushrom->name, "rad mus");//10번째인 o부터 짤림. overflow인데, 그래서 다 밀려서 쓰레기 값이 나옴.
	puts(ptr_mushrom->name); //puts(ptr_mushrom->mp) error, 즉 put은 address 값에서 data를 읽는 듯.
	printf("\nmp is %d\n", ptr_mushrom->mp);
	puts(&(ptr_mushrom->name)[6]);//7 번째인 h가 나와야 할 듯 puts는 문자열을 출력하자나, 1글자 출력 안됨.
	char what_val = ptr_mushrom->name[2];
	printf("%c", what_val);
	//구조체 포인터 -> 멤버 변수 이름.
}