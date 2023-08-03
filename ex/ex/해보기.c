#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main() {
	int length = 100;
	char* str = (char*)calloc(length, sizeof(char));
	printf("ют╥б : ");
	scanf_s("%s", str,length);
	length = strlen(str)+1;
	str = (char*)realloc(str,length);
	printf("%s\n", str);
	free(str);
}