#include "stive.h"
int findError(char v[], int length)
{
    int i;
    Node* topDeschise;
    char ceva = 'a';
    for(i = 1; i <= length; i++)
    {
        if(isEmpty(topDeschise) && v[i] == ')')
            return i;
        if(v[i] == '(')
            push(&topDeschise, ceva);
        if(v[i] == ')')
            pop(&topDeschise, ceva);
    }
    if(isEmpty(&topDeschise))
        return -1; /// -1 inseamna no error found
    return i;
}
int main()
{
    /*char test;
    scanf("%c",&test);
    Node* stackTop = NULL;
    push(&stackTop,test);
    char x = top(stackTop);
    printf("%c",x);*/
    char v[100];
    scanf("%s", v);
    int length = strlen(a);
    return 0;
}
