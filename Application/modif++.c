#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<windows.h>

Machine CreerMachine(){
    static int numeroMachine=1;
    Machine m;
   int pnombreo=1;
   int pnombre;
    int b=0;
//fprintf(fich, pnombre);
//fscanf(fich, "%d", &pnombre);
fich = fopen("C:\\projetc\\textea.txt", "a");
if(fich != NULL)
{
    fseek (fich, 0, SEEK_END);   // non-portable
    size=ftell (fich);
    printf("size %d", size);
    if(size==0)
    {
             if(fich != NULL)
        {

       fprintf(fich, "\n----------------Information Machine[%i]---------------\n", 1);//
       fclose(fich);
   }
   // fopen("readtext.txt", "r");
  FILE * fich = fopen("C:\\projetc\\textea.txt", "r");
        fscanf(fich, "%i", &pnombre);
   
        printf("\n----------------Information Machine[%i]---------------\n", pnombre);
        printf("Entrer le nom de la machine : ");
        scanf("%s",m.nom);
        printf("Entrer l'adresse IP : ");
        scanf("%s",m.ip);
        printf("Entrer l'adresse MAC : ");
        scanf("%s",m.mac);
        printf("\n");
    
       // printf("le nombre de machine est : %d\n", pnombre);
            
          //  fprintf(fich, "\n----------------Information Machine[ %d ]---------------\n", 1);
          // fscanf( fich, "%*s%*d%*s%hd", &tab[i] );


            fich = fopen("C:\\projetc\\textea.txt", "a");
            if(fich != NULL)
        {
            fprintf(fich, "son nom est %s\n ", m.nom);
            fprintf(fich, "l'adresse ip est %s\n ", m.ip);
            fprintf(fich, "l'adresse mac est %s\n ", m.mac);
          //  fprintf(fich, " %i )", 2);
            fclose(fich);        
         }
}   

    else
    {
                    // printf("machine %d dans le parc\n",&pnombre);
        
            fich = fopen("C:\\projetc\\textea.txt", "a");
            fscanf(fich, "%d", &pnombre);
            fprintf(fich, "\n----------------Information Machine[ %d ]---------------\n", pnombre=pnombre+1);
            fclose(fich);
            // fscanf(fich, " %*s%d ", &pnombre);

            printf("\n----------------Information Machine[ %d ]---------------\n", pnombre);
            printf("Entrer le nom de la machine : ");
            scanf("%s",m.nom);
            printf("Entrer l'adresse IP : ");
            scanf("%s",m.ip);
            printf("Entrer l'adresse MAC : ");
            scanf("%s",m.mac);
            //printf("le nombre de machine dans le parc est de : %d\n", pnombre++);//
            printf("\n");
            fich = fopen("C:\\projetc\\textea.txt", "a");
            if(fich!=NULL){
           

            fprintf(fich, "son nom est %s ans", m.nom);
            fprintf(fich, "l'adresse ip est %s ans", m.ip);
            fprintf(fich, "l'adresse mac est %s ans", m.mac);
            
            fclose(fich);
        }
    }
}
else
{
    printf("votre fichier de stockage est plein veuillez creer un autre fichier");
}
/* fich = fopen("C:\\projetc\\test.txt", "a");
if(fich != NULL)
{
    for(i=0; i<p.nombre;i++)
    {
        fprintf(fich, "\n----------------Information Machine[%d]---------------\n",pnombre);
        fprintf(fich, "son nom est %s ans", m.nom);
        fprintf(fich, "l'adresse ip est %s ans", m.ip);
        fprintf(fich, "l'adresse mac est %s ans", m.mac);
        fclose(fich);
    }
}*/

    numeroMachine++;
    return m;
}
FILE* fich=NULL;
int i;
Machine m;
bool boul=false;
Machine CreerMachine(){
    static int numeroMachine=1;
    Machine m;
  //  int pnombre=0;
    int b=0;
//fprintf(fich, pnombre);
//fscanf(fich, "%d", &pnombre);
        FILE *fich;
        fich = fopen("C:\\projetc\\testo.txt", "a");
        if(fich)
    {
            fseek (fich, 0, SEEK_END);   // non-portable
            size=ftell (fich);
            fclose (fich);          
    }
         if(fich != NULL)
        {
            fprintf(fich, "\n----------------Information Machine[%d]---------------\n", 1);//
            fscanf(fich, "%d", &pnombre);//
        
            printf("\n----------------Information Machine[%d]---------------\n", pnombre);
            printf("Entrer le nom de la machine : ");
            scanf("%s",m.nom);
            printf("Entrer l'adresse IP : ");
            scanf("%s",m.ip);
            printf("Entrer l'adresse MAC : ");
            scanf("%s",m.mac);

    
            //fprintf(fich, "\n----------------Information Machine[%d]---------------\n",pnombre);
            fprintf(fich, "son nom est %s\n ", m.nom);
            fprintf(fich, "l'adresse ip est %s\n ", m.ip);
            fprintf(fich, "l'adresse mac est %s\n ", m.mac);
            fclose(fich);
        }


        fprintf(fich, "\n----------------Information Machine[%d]---------------\n", pnombre++);//

        fscanf(fich, "%d", &pnombre);//
       // printf("le nombre de machine est : %d\n", pnombre);
        printf(" \n");
       
    }
int main(void)
{
    // CreerMachine();

ddonc();
/*
    FILE* fich=NULL;
    fich = fopen("C:\\projetc\\test.txt", "w");
if (fich != NULL)
 {
    printf("Entrer le nom de la machine : ");
    scanf("%s",m.nom);

    fprintf(fich, "Le nom est %s ans",m.nom);
    
    printf("Entrer l'adress ip de la machine : ");
    scanf("%s",m.nom);
    fprintf(fich, "Le nom est %s ans",m.nom);

    printf("Entrer l'adress mac de la machine : ");
    scanf("%s",m.nom);

 }*/
   
    return 0;
}





Machine CreerMachine(){
    static int numeroMachine=1;
 
//fprintf(fich, pnombre);
//fscanf(fich, "%d", &pnombre);
    fich = fopen("C:\\projetc\\textea.txt", "a");
if(fich != NULL)
{
    fseek (fich, 0, SEEK_END);   // non-portable
    size=ftell (fich);
    printf("size %d", size);
    if(size==0)
    {

       // fprintf(fich, "\n----------------Information Machine[ %d ]---------------\n", 1);//
       // fclose(fich);
    

   // fopen("readtext.txt", "r");
      // FILE * fich = fopen("C:\\projetc\\textea.txt", "r");
       // if(fich != NULL)
        // {
            fscanf(fich, " %d ", &pnombre[0]);
       
            printf("\n----------------Information Machine[%d]---------------\n", pnombre[0]);
            printf("Entrer le nom de la machine : ");
            scanf("%s",m.nom);
            printf("Entrer l'adresse IP : ");
            scanf("%s",m.ip);
            printf("Entrer l'adresse MAC : ");
            scanf("%s",m.mac);
            printf("\n");

            // fclose(fich);
        // }
       // printf("le nombre de machine est : %d\n", pnombre);
            
          //  fprintf(fich, "\n----------------Information Machine[ %d ]---------------\n", 1);
          // fscanf( fich, "%*s%*d%*s%hd", &tab[i] );


        fich = fopen("C:\\projetc\\textea.txt", "a");
        if(fich != NULL)
        {
            fprintf(fich, "son nom est %s\n ", m.nom);
            fprintf(fich, "l'adresse ip est %s\n ", m.ip);
            fprintf(fich, "l'adresse mac est %s\n ", m.mac);
          //fprintf(fich, " %i )", 2);
            fclose(fich);        
         }
     }
}   
    else
    {
     /*   //printf("machine %d dans le parc\n",&pnombre);
        fich = fopen("C:\\projetc\\textea.txt", "a");
        fscanf(fich, "%d", &pnombre);
        fprintf(fich, "\n----------------Information Machine[ %d ]---------------\n", pnombre=pnombre+1);
        fclose(fich);
        //fscanf(fich, " %*s%d ", &pnombre);

        printf("\n----------------Information Machine[ %d ]---------------\n", pnombre);
        printf("Entrer le nom de la machine : ");
        scanf("%s",m.nom);
        printf("Entrer l'adresse IP : ");
        scanf("%s",m.ip);
        printf("Entrer l'adresse MAC : ");
        scanf("%s",m.mac);
        //printf("le nombre de machine dans le parc est de : %d\n", pnombre++);//
        printf("\n");
        fich = fopen("C:\\projetc\\textea.txt", "a");
        if(fich!=NULL){
       

        fprintf(fich, "son nom est %s ans", m.nom);
        fprintf(fich, "l'adresse ip est %s ans", m.ip);
        fprintf(fich, "l'adresse mac est %s ans", m.mac);
        
        fclose(fich);
    }
    }*/
        printf("salutddddddhhhhh\n");
}
/*else
{
    printf("votre fichier de stockage est plein veuillez creer un autre fichier");
}*/
/* fich = fopen("C:\\projetc\\test.txt", "a");
if(fich != NULL)
{
    for(i=0; i<p.nombre;i++)
    {
        fprintf(fich, "\n----------------Information Machine[%d]---------------\n",pnombre);
        fprintf(fich, "son nom est %s ans", m.nom);
        fprintf(fich, "l'adresse ip est %s ans", m.ip);
        fprintf(fich, "l'adresse mac est %s ans", m.mac);
        fclose(fich);
    }
}*/

    numeroMachine++;
    return m;
}






FILE* fich=NULL;
int i;
Machine m;
int pnombreo=1;
int pnombre[1]={0};
int size;
Machine CreerMachine(){
    static int numeroMachine=1;
 
//fprintf(fich, pnombre);
//fscanf(fich, "%d", &pnombre);
fich = fopen("C:\\projetc\\textea.txt", "a");
if(fich != NULL)
{
    fseek (fich, 0, SEEK_END); 
    size=ftell (fich);
    printf("size %d", size);
    if(size==0)
    {
         fprintf(fich, "%d )----------------Information Machine---------------\n", 1);
         fclose(fich);
fich = fopen("C:\\projetc\\textea.txt", "r");
if(fich !=NULL)
{
            fscanf(fich, "%d", &pnombre[0]);
            printf("\n----------------Information Machine[%d]---------------\n", pnombre[0]);
                    fclose(fich);

}
            printf("Entrer le nom de la machine : ");
            scanf("%s",m.nom);
            printf("Entrer l'adresse IP : ");
            scanf("%s",m.ip);
            printf("Entrer l'adresse MAC : ");
            scanf("%s",m.mac);
            printf("\n");
        fich = fopen("C:\\projetc\\textea.txt", "a");
        if(fich != NULL)
        {
            fprintf(fich, "son nom est %s\n ", m.nom);
            fprintf(fich, "l'adresse ip est %s\n ", m.ip);
            fprintf(fich, "l'adresse mac est %s\n ", m.mac);
          //fprintf(fich, " %i )", 2);
            fclose(fich);        
         }
     // }
    }
    } 
  
    else
    {
        //printf("machine %d dans le parc\n",&pnombre);
        fich = fopen("C:\\projetc\\textea.txt", "a");
        
        fprintf(fich, "%d )----------------Information Machine---------------\n", 1);
        fprintf(fich, "\n----------------Information Machine[ %d ]---------------\n", pnombre=pnombre+1);
        fclose(fich);
        //fscanf(fich, " %*s%d ", &pnombre);

        printf("\n----------------Information Machine[ %d ]---------------\n", pnombre);
        printf("Entrer le nom de la machine : ");
        scanf("%s",m.nom);
        printf("Entrer l'adresse IP : ");
        scanf("%s",m.ip);
        printf("Entrer l'adresse MAC : ");
        scanf("%s",m.mac);
        //printf("le nombre de machine dans le parc est de : %d\n", pnombre++);//
        printf("\n");
        fich = fopen("C:\\projetc\\textea.txt", "a");
        if(fich!=NULL){
       

        fprintf(fich, "son nom est %s ans", m.nom);
        fprintf(fich, "l'adresse ip est %s ans", m.ip);
        fprintf(fich, "l'adresse mac est %s ans", m.mac);
        
        fclose(fich);
    }
    }
        printf("salutddddddhhhhh\n");

}

    numeroMachine++;
    return m;
}







static int numeroMachine=1;
 printf("Entrer le nombre de machine à creer : \n");
 scanf("%d",&cpt);
 for(i=1;i<=cpt;i++)
 {
    fich = fopen("C:\\projetc\\textea.txt", "a");
    if(fich != NULL)
    {
int nbr;

 // FILE *fp;
 //   
 //   fp = fopen("file.txt","w+");
 //   fgetpos(fp, &position);
 //   fputs("Hello, World!", fp);
 //
 //   fsetpos(fp, &position);
 //   fputs("This is going to override previous content", fp);
 //   fclose(fp);


          fprintf(fich, "%d )----------------Information Machine---------------\n", i);
          fclose(fich);

        fich = fopen("C:\\projetc\\textea.txt", "r");
        if(fich !=NULL)
        {
            if(position==0)
            {                 
                printf("hoooooooooooooooooooooooooooooooooooooooooooooooo\n");
                fscanf(fich, "%d", &nbr);
                printf("\n----------------Information Machine[%d]---------------\n", nbr);
                fclose(fich);
            }
            else
            {  
                printf("hiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii\n");
                fsetpos(fich, &position);
                fscanf(fich, "%d", &nbr);
                printf("\n----------------Information Machine[%d]---------------\n", nbr);
                fclose(fich);
            }
        }
                printf("Entrer le nom de la machine : ");
                scanf("%s",m.nom);
                printf("Entrer l'adresse IP : ");
                scanf("%s",m.ip);
                printf("Entrer l'adresse MAC : ");
                scanf("%s",m.mac);
                printf("\n");
            fich = fopen("C:\\projetc\\textea.txt", "a");
            if(fich != NULL)
            {  
                fpos_t position;
                fprintf(fich, "son nom est %s\n ", m.nom);
                fprintf(fich, "l'adresse ip est %s\n ", m.ip);
                fprintf(fich, "l'adresse mac est %s ", m.mac);
                
                fputs("\n", fich);
                fgetpos(fich, &position);
              //fprintf(fich, " %i )", 2);
                fclose(fich);        
             }
    } 

}  


    numeroMachine++;
    return m;
}





















if(size>0)
    {
PENSER A CELA DONC +++++>>>>>>>fgetpos(fich, &position);
    fich = fopen("C:\\projetc\\textea.txt", "r");
if(fich !=NULL)
{
    fscanf(fich, "%d", &pnombre);
fclose(fich);
}
    fich = fopen("C:\\projetc\\textea.txt", "a");
if(fich !=NULL)
{
    fprintf(fich, "%d )----------------Information Machine---------------\n", pnombre=pnombre+1);
    fclose(fich);
}

   fich = fopen("C:\\projetc\\textea.txt", "a+");
if(fich !=NULL)
{
        fscanf(fich, "%d", &pnombre);
         printf("\n----------------Information Machine[ %d ]---------------\n", pnombre);
        fclose(fich);
}      
        printf("Entrer le nom de la machine : ");
        scanf("%s",m.nom);
        printf("Entrer l'adresse IP : ");
        scanf("%s",m.ip);
        printf("Entrer l'adresse MAC : ");
        scanf("%s",m.mac);
        //printf("le nombre de machine dans le parc est de : %d\n", pnombre++);//
        printf("\n");
        // fich = fopen("C:\\projetc\\textea.txt", "a");
        // if(fich!=NULL){
           fich = fopen("C:\\projetc\\textea.txt", "a");
if(fich !=NULL)
{

        fprintf(fich, "son nom est : %s\n", m.nom);
        fprintf(fich, "l'adresse ip est : %s\n", m.ip);
        fprintf(fich, "l'adresse mac est : %s\n", m.mac);
        
         fclose(fich);
}
    }
    

    numeroMachine++;
    return m;
}