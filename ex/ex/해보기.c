#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void main() {
	int length = 100;
	char* str2;
	char* str = (char*)calloc(length, sizeof(char));
	printf("ют╥б : ");
	scanf_s("%s", str,length);
	length = strlen(str);
	strcpy(str2, str);
	str = (char*)realloc(sizeof(char),length);
	strcpy(str,str2);
	printf("%s\n", str);
	free(str);
}