#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Elem{
 char val;
 struct Elem* next;
};

typedef struct Elem Node;

struct Q
{
    Node *front, *rear;
};

typedef struct Q Queue;
