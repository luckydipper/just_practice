#include <stdio.h>

int main() {
	//char variable = "variable is memorry space that contain name or that name";
	//If I use char, I can use only 1byte or unsigned-> 2byte.
	//so if long char, I have to use string keyward;
	//"variable is memorry space that contain name or that name";�̿� ���� ���ڿ��� ���� ���� pointer�� ���� ��������.
	int num = 2147483647;
	char variable [11] = "hello world"; // hello �� �ȵ�.. ���� 1���̾�� ���尡��
	char c1 = 97;    // a�� ASCII �ڵ尪 97 ����
	printf("\n ���� num���� %d \n\n", num);
	printf(variable); //���� ��ü�� print�� ���ϴ� ��? printf(variable)
	
	int num2 = 99999999999;

	printf("\n\n���� num2���� %d �� ���� overflow�� �߻��Ѵ�.", num2);
	
}