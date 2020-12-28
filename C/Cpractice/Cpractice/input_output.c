#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int buffers()
{// 표준 입출력 함수는 버퍼라는 임시 메모리 공간을 거쳐서 프로그램에 전달됨
	//\n 즉, 엔터가 나올때, 묶어서 빠르게 전송
	//buffering : 입출력 버퍼에 데이터를 저장하는 행동
	//but game 같은 곳에서는 즉각적 반응이 필요.
	//line buffered, 어떤 문자가 나타날 때 마다 보냄
	//fully buffered, 버퍼가 가득 차면,
	//fflush & setvbuf 
	puts("--- buffer start ---\n");
	char sex[3];
	puts("당신의 성별을 입력하십시오.\n");
	scanf_s("%s", &sex, 3);// Enter) 키가 입력 버퍼에 남아있기 때문에 오류,
	//getchar 사용
	//"m" -> m\0
	if ((*sex == 'M') | (*sex == 'm')) { printf("you are mail\n"); }
	else if((*sex == 'F') | (*sex == 'f')) { printf("you are femail\n"); }
	else { printf("error\n"); }

	puts("--- buffer end ---\n");
	return 0;
}

int book()
{
	char str[20];

	char chars;
	puts("당신의 이름을 적어주세요 : ");

	gets_s(str, 20);
	//scanf_s("%s", &str, 20);
	//만약 scanf로 입력받으면 버퍼에 \n인 엔터까지 들어가서 뒤에 한글자만 입력받는 
	//scanfchar 앂힘.
	//fflush(stdin); // 표준 입력 스트림의 입력 버퍼를 비움  

	puts("당신의 성별을 약자로 적어주세요 : ");

	puts("(남성=M, 여성=F)");
	scanf_s("%c", &chars, 1);
	return 0;
}

int file_read_write()
{
	//fopen 파일 구조체 변수의 포인터를 가져옴. 열 수 없으면 null
	//fscan
	//fclose성공적으로 닫으면 0
	return 0;
}

int main()
{
	book();
	buffers();
}