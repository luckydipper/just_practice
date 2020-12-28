#include <stdio.h>
#define ARRAY_SIZE 10
#define PRINT_NUM(x) printf("\n출력하자 %d\n",x);\
					printf("매크로를 여러줄 하려면,excape sequence 필요\n");\
					printf("합니다.");

					// 메크로의 자료형 생략, 인자엔 이름만, 뒤에는 호출된 함수,
//preprocessor
//컴파일 옵션이나 조건부 컴파일도 가능
//파일을 컴파일하기 전, 작업을 지시함.
//반복되는 작업이나 값을 미리 정의 가능.

int mecro()
{//연관 되는 값이 계속 사용 될 때, 사용.
	//s1의 크기로 10을 사용 매크로 이름은 대문자.
	//치환 된다고 보는게 맞음.
	char s1[ARRAY_SIZE];
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		s1[i] = 97 + i;
	}
	//#undef로 정의 없앨 수 있음.
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		printf("%c ", s1[i]);
	}
	return 0;
} 

int function_mecro()
{
	PRINT_NUM('a');// 아스키 코드 상으로 a는 97임.
	PRINT_NUM(4);

	return 0;
}

int main()
{	
	//앞에 # 붙은 선행처리 지시자.
	//#include ,#define ...

	//#include
	//헤더파일을 현재 파일에 포함해 줌
	//사용자가 직접 작성한 헤더 파일을 포함할 때, 큰따옴표("")를 사용
	//""사용하면, 현재 디렉토리를 먼저 찾고, 표준 시스템 디랙토리를 검색,


	//#define
	//함수나 상수를 단순화 시켜주는 매크로를 정의
	mecro();
	function_mecro();
	return 0;
}