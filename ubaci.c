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

znamenitost * ubaci_na_pocetak(znamenitost*, znamenitost*);
znamenitost * ubaci_na_kraj(znamenitost*, znamenitost*);
znamenitost * ubaci_posle(znamenitost*,znamenitost*, znamenitost*);

znamenitost* ubaci(znamenitost* prvi, znamenitost* novi) {
	znamenitost* tek = prvi;
	if (prvi == NULL) prvi = novi;
	else {
		if (novi->poc.h < prvi->poc.h) {
			prvi = ubaci_na_pocetak(prvi, novi);
		}
		else
			if (novi->kraj.h > prvi->kraj.h) {
				prvi = ubaci_na_kraj(prvi, novi);
			}
			else {
				while (novi->kraj.h < prvi->kraj.h) {
					tek = tek->next;
				}
				prvi=ubaci_posle(prvi,tek, novi);
			}
	}
	return prvi;
}

znamenitost * ubaci_na_pocetak(znamenitost* prvi, znamenitost* novi) {
	novi->next = prvi;
	prvi = novi;
	return prvi;
}

znamenitost * ubaci_na_kraj(znamenitost*prvi, znamenitost*novi) {
	znamenitost* pom=prvi;
	while (pom->next) {
		pom = pom->next;
	}
	pom->next = novi;
	return prvi;
}

znamenitost * ubaci_posle(znamenitost* prvi, znamenitost* tek, znamenitost* novi) {
	novi->next = tek->next;
	tek->next = novi;
	return prvi;
}