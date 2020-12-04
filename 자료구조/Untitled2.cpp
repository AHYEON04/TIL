#include<stdio.h>
#include<stdlib.h>

#define MX 11

typedef int element;

typedef struct{
	element heap{MX+1};
	int heapSize;
}HeapType;

int data[MX]={6,5,7,3,2,9,8,1,4,6,5};

HeapType* creatHeap(){
	HeapType* h =
	  (HeapType *)malloc(sizeof(HeapType));
	  
    h->heapSize = 0;
    return h;
}
