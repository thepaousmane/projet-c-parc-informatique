#include <stdio.h>
#include <conio.h>
int main(void)
{
	int size;
	int tai=3;
        FILE* fich=NULL;

    fich = fopen("C:\\projetc\\testo.txt", "a");
    if(fich!=NULL)
    {
        fseek (fich, 0, SEEK_END);   // non-portable
        size=ftell (fich);
        printf("size %d", size);
           printf("size %d", tai=tai+1);
            printf("\n----------------Information Machine[ %d ]---------------\n", pnombre=pnombre+1);

	  if(size==0)
	    {
    	    // fprintf(fich, "on a ecrit dans le fichier taille : %d", tai);
    	    // printf("alut");
    	}
    	fclose(fich);
	}
    	return 0;
}
