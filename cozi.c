#include "cozi.h"

Queue* createQueue(){
	Queue *q;
	q=(Queue *)malloc(sizeof(Queue));
	if (q==NULL) return NULL;
	q->front=q->rear=NULL;
	return q;
}

 void enQueue(Queue*q, char v){
	Node* newNode=(Node*)malloc(sizeof(Node));
	newNode->val=v;
	newNode->next=NULL;
	if (q->rear==NULL) q->rear=newNode;
	else{
		(q->rear)->next=newNode;
		(q->rear)=newNode;
	}
	if (q->front==NULL) q->front=q->rear;
}

char deQueue(Queue*q) {
	Node* aux; char d;
	if (isEmpty(q)) return NULL;

	aux=q->front;
	d=aux->val;
	q->front=(q->front)->next;
	free(aux);
	return d;
}

int isEmpty(Queue*q){
	return (q->front==NULL);
}

void deleteQueue(Queue*q){
	Node* aux;
	while (!isEmpty(q)){
		aux=q->front;
		q->front=q->front->next;
		free(aux);
	}
	free(q);
}

