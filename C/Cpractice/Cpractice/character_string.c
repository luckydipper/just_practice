//stream : 데이터의 이상화된 흐름을 의미
//EOF(End Of File) : 파일의 끝에 도달 했을 때, 언제나 반환 되는 값
//window : Control z 
//UNIX : Control D
//하나의 문자를 입력할 때에는 getchar() 함수나 fgetc() 함수를 <파일 가능>
//하나의 문자를 출력할 때에는 putchar() 함수나 fputc() 함수를 <파일 가능>
//puts() 자동 줄바꿈

#include <stdio.h>
#include <stdlib.h>

int main()
{
	//char str1[] = "This is 크기 지정하지 않은 string";
	//char str2[7] = "string"; 마지막에는 null 만약 공간을 더 크게 잡아놨다면, 나머지는 null 값만 들어가 있음.
	//printf("str1에는 %s의 값이 들어감\n\n", str1);
	//int Nulls = '\0';
	//printf("문자열의 마지막엔 %d", Nulls);
	//strcpy는 null까지 복사함.

	char name[] = "This";
	//크기를 지정하지 않으면 자동으로 5 마지막 \0까지 포함.
	puts(name);
	puts("문자열을 입력하세요"); //처음에 5칸으로 설정했기에, 4개 이상의 문자열은 null
	fgets(name, sizeof(name), stdin);
	printf("size of name is %d\n", sizeof(name)); // size of name return int, put은 문자열만
	//문자열 입력 받아서 넣기
	printf("3뻔째 문자열의 값은 %c", name[2]);
	fputs("입력 받은 문자열은", stdout);
	puts(name);
}