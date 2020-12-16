#include <stdio.h>

//자동 들여쓰기 contr0l K F

int search(int start, int end) {
	char guess;
	int result;
	printf("Search is bigger than %d, In this case chat U\n", (start+ end)/2);
	printf("or smaller than %d, In this case chat D", (start + end) / 2);
	printf("or equal to E\n\n");
	scanf_s("%c", &guess); //메모리 크기때문에 인수가 전달 되지 않았다고 이야기가 나오는 군
	result = (end + start) / 2;
	switch (guess)
	{
	case 'U':
		search(result, end);
		break;
	case 'D':
		search(start, result);
		break;
	case 'E':
		printf("the solution is %d", result);
		return result;
	default:
		printf("you didnt give me a correct answer, you give me %c", guess);
		search(start, end);
		break;
	}
}



void main() {
	float e = 2.814f; 
	int f = (int)e; // after type cast operate, assign the varialbe 
	//한번 정의한 float 틀은 바꿀 수 없나봐. 다른 type 변수에 담으면 됨!
	int num01 = 3.14; //data 손실
	double num02 = 5; //손실 x 8byte에 적게 담으니 ㅇㅈ.
	//float이라고 말해줘야함 처음엔 double로 인식 강제적으로 type cast

	printf("float to int implicit type conversion %d\n", f);
	printf("반올림은 안 될 듯.\n");
	printf("1부터 100까지의 자연수 중에서 당신이 예상한 숫자를 맞추기 위한 알고리즘");
	search(1, 100);
}