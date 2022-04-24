#include <stdio.h>
#include <stdlib.h>


int main()
{	
    printf("\n\tStart point main");
    
    FILE *Floader;
	
	unsigned int bin_char;
    
    printf("\n\tintitial value programm End");

    char *filenameR = "/home/runner/c-load-file/text.txt";
    Floader = fopen(filenameR, "r");
    
    printf("\n\tintitial string text loader End\n");
    while(bin_char != -1)//if unsigned char ; -1 = result forewer loop
    {
		bin_char = getc(Floader);
		printf("%c", bin_char);
    }
    
    fclose(Floader);
	Floader = NULL;
    filenameR = NULL;
	free(Floader);
    free(filenameR);
	printf("\n\t end_programm");
	return 0;

}
