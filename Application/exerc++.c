#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#include<windows.h>

//#define I 4
//#define M 6
//#define N 15
//#define IN 30

//int T[IN];

//typedef unsigned char AdrMac[M];
//typedef unsigned char AdrIp[I];
//typedef unsigned char Nom[N];
//Liste Chainee logiciels clients et logiciels serveurs

typedef struct LogicielsClients LogicielsClients;
struct LogicielsClients{
    char nom[30];
    LogicielsClients* suivant;
};
typedef struct LogicielsServeurs LogicielsServeurs;
struct LogicielsServeurs{
    char nom[30];
    LogicielsClients* suivant;
};

typedef struct ListeClients ListeClients;
struct ListeClients{
    LogicielsClients* premier;
};
typedef struct ListeServeurs ListeServeurs;
struct ListeServeurs{
    LogicielsServeurs* premier;
};

typedef struct Machine Machine;
struct Machine{
    //char nom[30];
    //char mac[24];
    char nom[20];
    char mac[20];
    bool connected;
    char ip[20];
    //char* logicielsClients[100];
    //char* logicielsServeurs[100];
    ListeClients* Clients;
    ListeServeurs* Serveurs;
};
typedef struct Parc Parc;
struct Parc{
    Machine machines[100];
    int nombre;
};
Parc p;

//Prototypes des fonctions appelées
Parc Parcvide();
Machine RechercherMachine();
int nombre(Parc p);
void RetirerMachine();
Parc AjouterMachine(Parc p,int pos,Machine m);
void ListerMachine();
Machine CreerMachine();

Parc Parcvide(){
    Parc p;
    p.nombre=0;
    return p;
}



int nombre(Parc p){
    return p.nombre;
}




void AfficherMachine(Machine b){
    printf("NOM \tMAC \tIP\n");
    printf("--------------------------------------\n");
    printf("%s \t|%s |%s \n",b.nom,b.mac,b.ip );
    printf("--------------------------------------\n");
}

void ListerMachine(){
    FILE* fiche=NULL;
  int caractereActuel = 0;

     fiche = fopen("C:\\projetc\\test.txt", "r");
 
    if (fiche != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fiche); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
 
        fclose(fiche);
    }
}

Parc pp;
FILE *fich=NULL;
int ppnombre=0;
Machine CreerMachine(){
int numeroMachine=0;
ppnombre++;
    Machine m;
    printf("\n----------------Information Machine[%d]---------------\n",ppnombre);
    printf("Entrer le nom de la machine : ");
    scanf("%s",m.nom);
    printf("Entrer l'adresse MAC : ");
    scanf("%s",m.mac);

    numeroMachine++;
     fich = fopen("C:\\projetc\\test.txt", "a");
if(fich != NULL)
{
 
    fputs("\n-------------------------------------------\n", fich);
    fprintf(fich, "le nom est : %s\n", m.nom);
    fprintf(fich, "l'adresse mac est : %s\n", m.mac);
    fclose(fich);
}
    return m;

}

void RetirerMachine(){
    int pos;
   printf("Entrer la position de la machine à retirer : \n");
    scanf("%d",&pos);
     if(pos<=ppnombre)
     {
   printf("la machine à la position %d est retirer: \n",pos);
     }
     else
     {
        printf("la machine %d n'existe pas dans le parc\n",pos);
     }

}
Machine RechercherMachine(){
    Parc p;
    int pos;
    int i;
    printf("Entrer la position à rechercher : \n");
    scanf("%d",&pos);

     if(pos<=ppnombre)
     {
        printf("la machine %d est dans le parc\n",pos);
     }
     else
     {
        printf("la machine %d n'est pas dans le parc\n",pos);
     }
     printf("\n");
}

FILE *fichier=NULL;
int ppnbr=0;

Machine Connection()
{
ppnbr++;
 Machine m;
    printf("\n----------------Information Machine[%d]---------------\n",ppnbr);
    printf("Entrer le nom de la machine : ");
    scanf("%s",m.nom);
    printf("Entrer l'adresse Mac : ");
    scanf("%s",m.mac);
    Sleep(2000);

    printf("Parametres correctes\n");
    Sleep(1000);

    int al1=192;
    int al2=168;
   int alrand= rand()%255;
   int alrand2=rand()%255;
    printf("votre adresse ip est : %d.%d.%d.%d",al1,al2,alrand,alrand2);


  fichier = fopen("C:\\projetc\\testrsx.txt", "a");
if(fichier != NULL)
{
 
    fputs("\n-------------------------------------------\n", fichier);
    fprintf(fichier, "le nom est : %s\n", m.nom);
    fprintf(fichier, "l'adresse mac est : %s\n", m.mac);
    fprintf(fichier, "l'adresse ip est : %d.%d.%d.%d\n",al1,al2,alrand,alrand2);

    fclose(fichier);
}
return m;
}
void Retirerrsx(){
 FILE* fic=NULL;
  int caractereActuel = 0;

     fic = fopen("C:\\projetc\\testrsx.txt", "r");
 
    if (fic != NULL)
    {
        // Boucle de lecture des caractères un à un
        do
        {
            caractereActuel = fgetc(fic); // On lit le caractère
            printf("%c", caractereActuel); // On l'affiche
        } while (caractereActuel != EOF); // On continue tant que fgetc n'a pas retourné EOF (fin de fichier)
 
        fclose(fic);
    }
}

int Machinersx()
{
      int pos;
   printf("Entrer la position de la machine à retirer : \n");
    scanf("%d",&pos);
     if(pos<=ppnbr)
     {
   printf("la machine à la position %d est retirer: \n",pos);
     }
     else
     {
        printf("la machine %d n'existe pas dans le réseau\n",pos);
     }
return pos;
}
void GestionParc(){
    int choixP;
    system("cls");
    do{
    puts("\n");
        puts("------------------------- MENU: Gestion Parc-----------------------");
        puts(" 1) Retirer une machine du parc");
      //puts(" 2) Afficher une machine");
        puts(" 2) Lister les machines du parc");
        puts(" 3) creer une machine");
        puts(" 4) Rechercher une machine");
        puts(" 5) Quitter");
        puts("------------------------------------------------------");
        printf("Quel est votre choix");
         scanf("%d",&choixP);
         switch(choixP){
            case 1:system("cls");
            RetirerMachine();
            break;
            case 2:system("cls");
            Machine b;
            ListerMachine();
            break;
            case 3:system("cls");
            CreerMachine();
            break;
            case 4:system("cls");
            RechercherMachine();
            break;
            case 5:system("cls");
            printf(" ");
            system("cls");
            break;
            default:system("cls");printf("votre choix n'est pas valide\n");
         }
    }while(choixP!=6);
}
void GestionReseau(){
        int choixP;
    system("cls");
do{
  puts("\n");
        puts("------------------------- MENU: Gestion Reseau-----------------------");
        puts(" 1)se connecter au reseau(DHCP)");
         puts(" 2) Lister les machines du reseau");
        puts(" 3) retirer une machine du reseau");
       
        // puts(" 4) creer une machine");
        // puts(" 5) Rechercher une machine");
       // puts(" 6)Quitter");
        puts("------------------------------------------------------");
        printf("Quel est votre choix: ");
         scanf("%d",&choixP);
         switch(choixP){
             case 1:system("cls");
            Connection();
            break;
            case 2:system("cls");
            Retirerrsx();
            break;
            case 3:system("cls");
            Machinersx();
            break;
            default:system("cls");printf("votre choix n'est pas valide\n");
        }
    }while(choixP!=4);
}
void Simulations(){}

void Quitter(){
     system("cls");
 printf("\n\n        \t------------FIN-----------\n\n\n");
 printf("\n\n        \t------------MERCI-----------\n\n\n");
 }

void MenuGeneral(){
    int choix;
   system ("color 1A");
    do{
        system("cls");
        puts("\n");
        puts("------------------------- MENU -----------------------");
        puts(" 1) Gerer le parc");
        puts(" 2) Gerer le reseau");
        puts(" 4) Effacer l'ecran");
        puts(" 5) Quitter");
        puts("------------------------------------------------------");
        printf("Quel est votre choix: ");
        printf("\n");
        scanf("%d",&choix);

      /*  while(test==0 || choix<1 || choix > 5){
            int c;
            while ( ((c = getchar()) != '\n') && c != EOF);
            //MessageBeep(MB_ICONWARNING);
            printf("\a!!!Choix incorrect!!! Retapez: ");
            test = scanf("%d",&choix);
        }*/
        switch(choix){
            case 1 : GestionParc(); break;
            case 2 : GestionReseau(); break;
            case 3 : system("cls"); break;
            case 4: system("cls");Quitter();break;
            default: system("cls");printf("votre choix n'est pas valide\n");
        }
    }while(choix !=5);
}

int main(void)
{
    MenuGeneral();
    system("PAUSE>null");
    return 0;
}
