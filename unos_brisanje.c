#define _CRT_SECURE_NO_WARNINGS	
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int h;
	int m;
} vreme;

typedef struct {
	char ime[30];
	vreme ob;
	vreme poc;
	vreme kraj;
	int cena;
	znamenitost* next;
} znamenitost;

znamenitost* unos() {
	znamenitost* novi;
	znamenitost* prvi = NULL;
	int i = 0;
	do {
		novi = malloc(sizeof(znamenitost));
		scanf("%s %d:%d %d:%d %d:%d %d", novi->ime, novi->poc.h, novi->poc.h, novi->kraj.h, novi->kraj.m, novi->ob.h, novi->ob.h, novi->cena);
		if (novi->ime != '0')
			prvi=ubaci(prvi,novi);
		else break;
	} while (i++ < 100);

	return prvi;
}

void brisanje(znamenitost* prvi) {
	znamenitost* stari;
	while (stari) {
		stari = prvi;
		prvi = prvi->next;
		free(stari);
	}
}
