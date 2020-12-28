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
	printf("구조체의 속도를 위해 byte padding을 넣기 때문이다.");
};

int uninons()
{//공용체 union is simular with structure 
//모든 멤버 변수가 하나의 메모리 공간을 공유
	puts("--- Start UNION example ----\n");
	typedef union
	{// union의 method는 자료형이 달라도 같은 메모리 공간을 공유함.
		unsigned char first;// 1 byte, 양수로 2byte임
		unsigned short second;// 2byte
		unsigned int theird;//4byte
	}same_data;
	
	same_data date;
	date.theird = 0x12345678;// thired 에 넣어야지 잘 작동함. first에 넣으면 overflow일으킴.
	printf("10진수 value is %d\n", date.first);
	printf("1byte -> 8bit, 4bit+4bit, 16진수 + 16진수\n");
	printf("first char 1byte data %x\n and its size is %d\n\n", date.first, (int)sizeof(date.first));
	printf("second short 2byte data %x\n and its size is %d\n\n", date.second,(int)sizeof(date.second));
	printf("third int 4byte data %x\n and its size is %d\n\n", date.theird, (int)sizeof(date.theird));

	puts("--- END UNION example ----\n");
	return 0;
}



int enums()
{//열거채(목록, enumeration), 새로운 타입을 선언함. 정수형 상수에 이름을 붙혀서 이해하기 쉽게함.
 //복잡한 값들을 숫자로 단순하게 치환해서 표현
 //이름은 snake 표기 열거형 값은 대문자.

	/*ex) const int value1 = 1;
		  const int value2 = 2;
		  const int value3 = 3;*/
	
	puts("--- enum start ---");
	enum day_of_week
	{
		MON, // 초기 값 설정 안하면 자동으로 0, 나머지는 1씩 커져서 저장됨.
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