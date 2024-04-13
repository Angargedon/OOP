#include <stdio.h>

ListElement *appendElement(ListElement *current, float value){
	ListElement *new = NULL;	

	if(current){
		if(current->next)
			while(current->next) current = current->next;
		current->next = new;
	}
	else{
		printf("\n\nListe nicht vorhanden. Neue Liste wird erstellt\n\n");
		static char dummy;
		printf("\nEingabetaste zum Fortfahren druecken..");
		while(dummy != '\n') scanf("%c", &dummy);
	}
			 
	
	printf("\n\nWert fuer neues Listenelement: ");
	scanf("%d", &value);
	new->data = value;

	return new;
}


int lenght(ListElement *current){
	int counter = 0;

	if(current){
		while(current != NULL){
			counter++;
			current = current->next;
		}
	}
	else{
		printf("\n\nListe nicht vorhanden\n\n");
		static char dummy;
		printf("Eingabetaste zum Fortfahren druecken");
		while(dummy != '\n') scanf("%c", &dummy);
	}
	
	return counter;
}


ListElement *removeElement(ListElement *remove, ListElement *prev){
	
}
