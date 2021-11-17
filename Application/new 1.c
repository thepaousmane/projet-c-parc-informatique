#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
 
int main()
{
	int n;
	printf("entrer le nombre de fichier: \n " );
	scanf("%d",n);
for(int i=0; i<=n;i++)
{
    char f[30]="" , c = 0;
    int nombre_caractere = 0;
    FILE *fichier = NULL, *test = NULL;
    unsigned long long compteur = 0;
 
    printf("Nom du fichier(30 lettres maximum) : \n");
    scanf("%s",f);
	
	//---------compter le nombre d'item par ligne------
	while(!feof(f))
    {
     fscanf(f,"%s",&ch);
    if (strcmp(ch,"nom")!=0)
    {
             if ((fgetc(f)=='\n')&&(strcmp(ch1,"ok")==0))
				 nombre_caractere = strlen(nom);
    printf("%d caracteres.\n",nombre_caractere);
    printf("nom entre : %s.",nom);
        {
            nb++;
			printf("la ligne"nb" a" nombre_caractere);
			scanf("%d",nb "%d",nombre_caractere);
        }
    }
    }
	