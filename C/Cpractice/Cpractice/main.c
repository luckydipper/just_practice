//#include <stdio.h> 두번 포함시키면 안되.
//HEADER 찾고, HEADER랑 같은 이름의 C 파일이 필요한 것 아닌가?
//header부터 만듬. headerfile에는 function body가 들어가지 않는 것이 좋음.
#include "my.h"
#include <stdio.h>
//<>는 미리 지정한 경로에서 가지고옴. ""는 해당 파일의 경로
#define name "kimHeeSung"

//전역변수
char User[20] = name;
char User2[20] = "khatch";

int main()
{
	puts(User2);
	puts(name);
	printf("%c",User[2]);
	printf("--- Main file start ---\n");
	int sums = add_two(5, 6);

	char User_name[20];
	gets_s(User_name, 20);
	print_name(User_name);//string 주소값과 크기를
	//int sizeof_name 까지 가져올 필요가 없는것이, 마지막엔 \0붙음.
	//call by value call by reference
	printf("-- Main file end ---\n");
}