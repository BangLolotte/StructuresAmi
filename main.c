 #include <stdio.h>


typedef struct annuaire {
    char nomami [255];
    char numero [255];
} amis ;
amis ami;
/**************************** variables *****************************/
amis annuaire [5];
int cpt;
int nbact; //compte le nbre d'insertion de contacts
/*************************protos**************************/
void insertami(const amis *ami); //fonction qui permet d'ajouter des amis
void menu(); //choix de l'action à réaliser dans l'annuaire (voir contact ou insertion)
amis* saisirami(); //permet de saisir l'ami (sert à alimenter insert)
void afficheramis(); //affiche l'annuaire entier

/********************définitions**********************/

void menu() {
    int action;
    printf("\nVeuillez saisir votre choix : \n1.Afficher l'annuaire.\n2.Entrer un nouveau contact\n3.Arrêter le programme");
    scanf("%d",&action);
    if (action==2){
        nbact++;
    }
switch (action)
{
    case 1: //affichage du tableau de la structure
        printf("Annuaire :\n");
        for (int nbact = 0; nbact < 6; nbact++) {

            printf("\nNom : %s \nNuméro : %s", annuaire[nbact].nomami, annuaire[nbact].numero);
        }
        break;
    case 2: //nouveau contact
        insertami(saisirami());
        break;
    case 3: //arrêter le programme
        exit (0);
}
menu();
}

amis *saisirami() {

    printf("\nVeuillez saisir le nom du contact :");
    scanf("%s",ami.nomami);

    printf("\nVeuillez saisir le numéro de téléphone :");
    scanf("%s",ami.numero);

    return &ami;
}

 void insertami(const amis *ami) {
annuaire[cpt]=*ami; //pointe sur l'instance
     printf("\nVotre contact: \n%s a été ajouté à l'annuaire avec le numéro: %s \n",annuaire[cpt].nomami, annuaire[cpt].numero);
cpt++;

 }


int main() {
menu();
    return 0;
}
