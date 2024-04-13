#ifndef TYPES_H
#define TYPES_H

typedef struct lE{
	float data;
	struct lE *next;
}ListElement;

extern ListElement *first;

ListElement *appendElement(ListElement *new, float value);

int lenght(ListElement *List);

char *removeElement(ListElement *remove, char *prev);

#endif
