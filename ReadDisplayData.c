#include <stdio.h>

int main(){
	FILE *f;
	f = fopen("INPUT.txt", "w+");
	
	char c;
	while((c = getchar()) != EOF){
		fputc(c, f);
	}
	
	fseek(f, 0, 0);
	
	printf("Contents in the file: \n");
	while((c = fgetc(f)) != EOF){
		printf("%c", c);
	}
	
	fclose(f);
	return 0;
}
