#include <stdio.h>

int main()
{
    char name[10];
    printf("hello world\n");
    scanf("%s", name);
    // 에디터에선 이걸 왜 오류라고 안 잡지? scanf("%s", name, sizeof(name));
    // 이건 왜 빌드 할 때만 오류가 날까?
}