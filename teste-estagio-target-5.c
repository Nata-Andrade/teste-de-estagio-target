#include <stdio.h>
#include <string.h>

int main(void){
	
	int i, j;
	char str[] = "exemplo";
	
	for(i = 0, j = strlen(str) - 1; i < j; i++, j--){
		
		str[i] = str[i] ^ str[j];
		str[j] = str[i] ^ str[j];
		str[i] = str[i] ^ str[j];
		}
	
	printf("%s\n", str);
	return 0;
	}
