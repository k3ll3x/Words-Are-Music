#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char * argv[]){
	srand(time(0));
	int h = 0;
	for(h;;h++){
		int i;
		int words = argc-1;
		for(i=1;i<words+1;i++){
			char * word = argv[i];
			int wordSize = sizeof(argv[i])/sizeof(argv[i][0]);
			int j = 0;
			for(j;j<wordSize;j++){
				//putchar(((rand()%8)<<h)|(h>>argv[i][j]));
				putchar((h>>argv[i][j])|(h<<argv[i][j])+(h>>2));
			}
		}
	}
	return 0;
}
