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

znamenitost * unos();
znamenitost * ubaci(znamenitost*);
znamenitost * ispis(znamenitost*);
znamenitost * obrada(znamenitost*);
void brisanje(znamenitost*);
znamenitost * ubaci_na_pocetak(znamenitost*, znamenitost*);
znamenitost * ubaci_na_kraj(znamenitost*, znamenitost*);
znamenitost * ubaci_posle(znamenitost*,znamenitost*, znamenitost*);
int ukupna_cena(znamenitost*);
//znamenitost* izbaci(znamenitost*);