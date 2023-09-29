#include "file1.h"
#include <stdio.h>

int main(){
	unsigned short ind Local_uint16_tVar;
	printf("Enter integer:\n");
	scanf("%hu", &Local_uint16_tVar);
	MyPrint(Local_uint16_tVar);
	return 0;
}