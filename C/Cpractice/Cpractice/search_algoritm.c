#include <stdio.h>

//�ڵ� �鿩���� contr0l K F

int search(int start, int end) {
	char guess;
	int result;
	printf("Search is bigger than %d, In this case chat U\n", (start+ end)/2);
	printf("or smaller than %d, In this case chat D", (start + end) / 2);
	printf("or equal to E\n\n");
	scanf_s("%c", &guess); //�޸� ũ�⶧���� �μ��� ���� ���� �ʾҴٰ� �̾߱Ⱑ ������ ��
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
	//�ѹ� ������ float Ʋ�� �ٲ� �� ������. �ٸ� type ������ ������ ��!
	int num01 = 3.14; //data �ս�
	double num02 = 5; //�ս� x 8byte�� ���� ������ ����.
	//float�̶�� ��������� ó���� double�� �ν� ���������� type cast

	printf("float to int implicit type conversion %d\n", f);
	printf("�ݿø��� �� �� ��.\n");
	printf("1���� 100������ �ڿ��� �߿��� ����� ������ ���ڸ� ���߱� ���� �˰���");
	search(1, 100);
}