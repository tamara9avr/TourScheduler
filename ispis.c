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

void ispis(znamenitost*prvi) {
	znamenitost* tek;
	for (tek = prvi; tek; tek = tek->next)
		printf("%s %d:%d %d:%d %d:%d %d\n", tek->ime, tek->poc.h, tek->poc.h,tek->kraj.h, tek->kraj.m, tek->ob.h, tek->ob.m, tek->cena);
}