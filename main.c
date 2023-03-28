#include "stive.h"

int main()
{
    char test;
    scanf("%c",&test);
    Node* stackTop = NULL;
    push(&stackTop,test);
    char x = top(stackTop);
    printf("%c",x);
    return 0;
}
