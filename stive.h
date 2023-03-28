#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
	char val;
	struct Node *next;
};
typedef struct Node Node;
char top(struct Node*);
void push(struct Node**, char);
char pop(struct Node**);
int isEmpty(struct Node*);
void deleteStack(struct Node**);
