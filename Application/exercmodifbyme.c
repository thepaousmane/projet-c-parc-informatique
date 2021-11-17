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

/*-----------------------------------------------car on pas dis d'enregistrer la liste des logiciels des clients
typedef struct LogicielsClients LogicielsClients;
struct LogicielsClients{
    char nom[30];
    LogicielsClients* suivant;
};
*/
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
    char nom;
    char mac;
    bool connected;
    char ip;
    //char* logicielsClients[100];
    //char* logicielsServeurs[100];
    ListeClients* Clients;
    ListeServeurs* Serveurs;
};
//*----------------------------------------------------------------------------------------------par moi
void stok()
//---------------------------------------------------------------------------------------------fin par moi
typedef struct Parc Parc;
struct Parc{
    Machine machines[100];
    int nombre;
};
Parc p;

//Prototypes des fonctions appelées
Parc Parcvide();
Machine RechercherMachine(Parc p,int pos);
int nombre(Parc p);
Parc RetirerMachine(Parc p,int pos);
Parc AjouterMachine(Parc p,int pos,Machine m);
void ListerMachine(Parc p);
Machine CreerMachine();

Parc Parcvide(){
    Parc p;
    p.nombre=0;
    return p;
}

Machine RechercherMachine(Parc p,int pos){
    return p.machines[pos];
}

int nombre(Parc p){
    return p.nombre;
}

Parc AjouterMachine(Parc p,int pos,Machine m){
    int i;
    for (i = p.nombre; i >= pos; i--)
        p.machines[i+1]=p.machines[i];
    p.machines[pos]=m;
    p.nombre++;
    return p;
}

Parc RetirerMachine(Parc p,int pos){
  int i;
  for ( i = pos; i < p.nombre; i++)
        p.machines[i]=p.machines[i+1];
    p.nombre--;
    return p;
}

void AfficherMachine(Machine b){
    printf("NOM \tMAC \tIP\n");
    printf("--------------------------------------\n");
    printf("%s \t|%s |%s \n",b.nom,b.mac,b.ip );
    printf("--------------------------------------\n");
}

void ListerMachine(Parc p){
    int i;
    for ( i = 1; i < p.nombre; i++)
    {
        printf("-------------------\n");
        printf("NOM : %s \n",p.machines[i].nom);
        printf("MAC : %s \n",p.machines[i].mac);
        printf("NOM : %s \n",p.machines[i].ip);
    }
}

Machine CreerMachine(){
    static int numeroMachine=1;
    Machine m;
    printf("\n----------------Information Machine[%d]---------------\n",m);
    printf("Entrer le nom de la machine :");
    scanf("%s",m.nom);
    printf("Entrer l'adresse IP" );
    scanf("%s",m.ip);
    printf("Entrer l'adresse MAC");
    scanf("%s",m.mac);
    numeroMachine++;
    return m;
 
}


//gestion park
void GestionParc(){
    int choixP;
    system("cls");
    do{
    puts("\n");
        puts("------------------------- MENU: Gestion Parc-----------------------");
        puts(" 1) creer un parc");
        puts(" 2) Ajoutez une machine dans le parc");
        puts(" 3) Retirer une machine du parc");
        puts(" 4) Afficher une machine");
        puts(" 5) Lister les machines du parc");
        puts(" 6) creer une machine");
        puts(" 7) Rechercher une machine");
       // puts(" 6)Quitter");
        puts("------------------------------------------------------");
        printf("Quel est votre choix: ");
         scanf("%d",&choixP);
         switch(choixP){
            case 1:system("cls");
            {
                Parc p=Parcvide();
                if(p.nombre==0)
                    printf("La table est vide\n");
                else ListerMachine(p);
            }
            break;
            case 2:system("cls");
            {
                Parc p=Parcvide();
                Machine m = CreerMachine();
                int pos=1;
                if(p.nombre==99)
                    printf("le parc est plein\n");
                else
                    if(pos>0 && pos<=p.nombre+1)
                        p=AjouterMachine(p,pos,m);
                    else
                        printf("Ajout impossible\n");

                        if(p.nombre==0)
                            printf("le parc est vide\n");
                        else ListerMachine(p);
            }
            break;
            case 3:system("cls");
            {
                int pos=1;
                printf("Saisissez la position de la machine a retirer\n");
                scanf("%d",&pos);
                if(pos>0 && pos<=p.nombre+1){
                    p=RetirerMachine(p,pos);
                    ListerMachine(p);
                }
                else
                    printf("retrait impossible\n");
            }
            break;
            case 4:system("cls");
            Machine b;
            AfficherMachine(b);
            break;
            case 5:system("cls");
            ListerMachine(p);
            break;
            case 6:system("cls");
            CreerMachine();
            break;
            default:system("cls");printf("votre choix n'est pas valide\n");
         }
    }while(choixP!=6);
}
void GestionReseau(){}
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
        puts(" 3) Simuler des echanges entre clients et serveurs");
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
            case 3 : Simulations(); break;
            case 4 : system("cls"); break;
            case 5: system("cls");Quitter();break;
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
