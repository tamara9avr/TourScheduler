#include "dz4.h"

void main() {
	znamenitost * prvi=NULL;
	znamenitost* first=NULL;
	int i = 0,c;

	printf("1. Unesite elemente\n2. Izvrsite obradu\n3.Ispisite plan\n4. Izbrisite listu\n5. Zavrsite program");

	int n = getchar();

	switch (n) {
	case 1: {
		prvi = unos();
		break;
	}
	case 2: {
		first = obrada(prvi);
		c = ukupna_cena(first);
		break;
	}
	case 3: {
		ispis(first);
		break;
	}
	case 4: {
		brisanje(prvi);
		brisanje(first);
		break;
	}
	case 5: { exit(1); }
	}
}
