#include <stdlib.h>
#include <stdio.h>
int main()
{
    int num1 = 20;
    int* ptr_num1 = &num1;

    int* ptr_num2 = malloc(sizeof(int));
    ptr_num2 = ptr_num1;
    int num2 = *ptr_num2;
    free(ptr_num2);
}   