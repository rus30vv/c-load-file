#include <stdio.h>
#include <stdlib.h>
//void nonamefuntion(){}//function for future code
//{}



void exitst_file(char *filename)//*filenameR)
{       
        FILE * FileDiscriptor;
        if ((FileDiscriptor = fopen(filename, "r")) != NULL)
        {
            printf("NONE_FILE");
        }
        else
        {
            printf("EXISTS_FILE");
            fclose(FileDiscriptor);
        }
        //add free memory function
        
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
    printf("\n\tstart checking for existence\n");


    printf("\n\tend checking for existence\n");
    
    while(bin_char != EOF)
    {
		bin_char = getc(Floader);
		printf("%i", bin_char);//"%c" text char
    }
   

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
