#include <stdio.h>

int main() {
	//char variable = "variable is memorry space that contain name or that name";
	//If I use char, I can use only 1byte or unsigned-> 2byte.
	//so if long char, I have to use string keyward;
	//"variable is memorry space that contain name or that name";이와 같이 문자열이 많은 것은 pointer를 배우고 공부하자.
	int num = 2147483647;
	char variable [11] = "hello world"; // hello 도 안됨.. 문자 1개이어야 저장가능
	char c1 = 97;    // a의 ASCII 코드값 97 저장
	printf("\n 변수 num에는 %d \n\n", num);
	printf(variable); //변수 자체를 print를 못하는 듯? printf(variable)
	
	int num2 = 99999999999;

	printf("\n\n변수 num2에는 %d 와 같은 overflow가 발생한다.", num2);
	
}