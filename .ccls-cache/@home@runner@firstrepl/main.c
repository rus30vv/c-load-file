#include <stdio.h>
#include <stdlib.h>

void exitst_file(char *filenameR)
{       
        FILE * FileDiscriptor;
        if ( (FileDiscriptor = fopen(filenameR, "r")) != NULL)
        {
            printf("NONE_FILE");
        }
        else printf("EXISTS_FILE");
        //add free memory function
}

void nonamefuntion()
{
        
}




int main()
{
    printf("\n\tStart point main");
    
    FILE *Floader;
	
	unsigned int bin_char;
    
    printf("\n\tintitial value programm End");

    char *filenameR = "/home/runner/firstrepl/text.txt";
    Floader = fopen(filenameR, "r");
    
    printf("\n\tintitial string text loader End\n");
    while(bin_char != EOF)
    {
		bin_char = getc(Floader);
		printf("%i", bin_char);//"%c" text char
    }
    //input = NULL;

    printf("\n\t start free memory");
    fclose(Floader);
	Floader = NULL;
    filenameR = NULL;
	free(Floader);
    free(filenameR);
    printf("\n\t end free memory");
	printf("\n\t end_programm\n");
	return 0;

}
