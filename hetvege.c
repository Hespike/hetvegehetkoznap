#include <stdio.h>

int main(){
	int szam;

	scanf("%d", &szam);

	switch (szam) {
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			printf("Hetkoznap\n");
			break;
		case 6:
		case 7:
			printf("Hetvege\n");
			break;
			default:
			printf("1-7 kozotti szamot adj meg\n");
	
		return -1;
	}

	return 0;
}