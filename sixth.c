#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>



int main(int argc,char** argv){
	int i = 1;
	if(argc ==1)
	{
	printf("error");
	}
	for(i=1;i<argc;i++){
		printf("%c",argv[i][0]);
	}
printf("\n");
return 0;
}
