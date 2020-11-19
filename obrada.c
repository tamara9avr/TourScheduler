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

znamenitost* obrada(znamenitost * prvi) {
	znamenitost* list=malloc(sizeof(znamenitost));
	znamenitost* cur = prvi;
	int cas;

	cas = prvi->poc.h;

	list = NULL;
	while (cur) {
		if (!(list)) {
			list = ubaci_na_pocetak(list, cur);
		}
		else {
			if (cas<cur->kraj.h) {
				list = ubaci_na_kraj(list, cur);
			}
		}
		cas += cur->ob.h;
		cur = cur->next;
	}
	return list;
}

int ukupna_cena(znamenitost * list) {
	int ukcena = 0;
	znamenitost* tek = list;
	while (tek) {
		ukcena += tek->cena;
		tek = tek->next;
	}
	return ukcena;
}