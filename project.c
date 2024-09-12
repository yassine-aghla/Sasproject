// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
struct date_de_naissance {
    int jour;
    char mois[10] ;
    int annee;
};typedef struct date_de_naissance Date ;
 struct departement{
     char deptname[20];
     float note_general;
 };typedef struct departement departement;
struct etudiant {
    char Numéro_unique[20];
    char nom[10];
    char prenom[10];
    struct date_de_naissance date  ;
    departement departement ;
   };
 void ajouter(struct etudiant t[300], int n) {
      int choise;
     printf("Entrer le numero du etudiant que vous voulez ajouter : \n");
    scanf("%s", t[n].Numéro_unique);
     printf("Entrer le nom du etudiant que vous voulez ajouter : \n");
    scanf("%s", t[n].nom);
     printf("Entrer le prenom du etudiant que vous voulez ajouter : \n");
    scanf("%s", t[n].prenom);
     printf("entrer la date de naissance\n");
     scanf("%d\t%s\t%d",&t[n]. date.jour,t[n]. date.mois,&t[n].date.annee);
    printf("Entrer le nom de departement du etudiant que vous voulez ajouter : \n");
    printf("1-pour math\n");
     printf("2-pour pc\n");
     printf("3-pour info\n");
     printf("entrer votre choix \n");
scanf("%d",&choise);
    switch(choise){
        case 1: strcpy(t[n].departement.deptname,"math");
        break;
         case 2: strcpy(t[n].departement.deptname,"pc");
        break;
         case 3: strcpy(t[n].departement.deptname,"info");
        break;
    }
     printf("Entrer la note general du etudiant que vous voulez ajouter : \n");
    scanf("%f", &t[n].departement.note_general);
    printf("letudiant ajoutee avec succes\n");
   
 }   
 void modifier(struct etudiant t[100],int n ){
        char numero[100];
       printf("entrer votre numero pour la modification de les infos \n");
        scanf("%s",numero);
        for(int i=0;i<n;i++){
            if(strcmp(t[i].Numéro_unique,numero)==0){
            printf("entre votre nouveau nom");
            scanf("%s",t[i].nom);
             printf("entre votre nouveau prenom");
            scanf("%s",t[i].prenom);
             printf("entre votre nouveau departement");
            scanf("%s",t[i].departement.deptname);
            
            printf("votre modification est le nom : %s , le prenom ; %s , le departement ; %s ",t[i].nom,t[i].prenom,t[i].departement.deptname);
             return;
            }
            }
            printf("ce etudiant pas existe \n");
 }
 void supprimer(struct etudiant t[100],int n ){
        char numero[10];
        int tr=0;
       printf("entrer votre numero pour la suppression de les infos \n");
        scanf("%s",numero);
        for(int i=0;i<n;i++){
            if(strcmp(t[i].Numéro_unique,numero)==0){
                tr=1;
                 for (int j =i; j < n-1; j++) {
                      t[j] = t[j+1];
                    }
                     n--;
            printf("letudiant est supprime\n");
          }
    }
   if(!tr)
   {
    printf("ce etudiant pas existe\n");
   }
}
void afficher (struct etudiant t[100],int n){
    for(int i=0;i<n;i++){
     printf("votre numero est %s\n ",t[i].Numéro_unique);
    printf("votre nom est %s\n ",t[i].nom);
    printf("votre prenom est %s\n ",t[i].prenom);
    printf("votre date de naissaince est %d\t %s\t %d\t \n  ",t[i].date.jour,t[i].date.mois,t[i].date.annee);
     printf("votre departement est %s\n ",t[i].departement.deptname);
      printf("votre note general est %d\n ",t[i].departement.note_general);
    }
    }
    void rechercherNom(struct etudiant t[100],int n){
char firstname[100];
char lastname[100];
       printf("entrer votre nom que recherche ");
        scanf("%s",lastname);
        printf("entrer votre prenom que recherche ");
        scanf("%s",firstname);
        for(int i=0;i<n;i++){
            if(strcmp(t[i].nom,lastname)==0 && strcmp(t[i].prenom,firstname)==0){
                printf("letudiant est existe \n");
                   printf("votre numero est %s\n ",t[i].Numéro_unique);
    printf("votre nom est %s\n ",t[i].nom);
    printf("votre prenom est %s\n ",t[i].prenom);
    printf("votre date de naissaince est %d\t %s\t %d\t \n  ",t[i].date.jour,t[i].date.mois,t[i].date.annee);
     printf("votre departement est %s\n ",t[i].departement.deptname);
      printf("votre note general est %d\n ",t[i].departement.note_general);
    }
        
                }
   
    }
     void afficherListe(struct etudiant t[100],int n){
         char dname[20];
         int choise;
    printf("chiosir votre departement\n");
    scanf("%s",dname);
      printf("entrer votre choix \n ");
       printf("1-pour math\n");
     printf("2-pour pc\n");
      printf("3-pour info\n");
      scanf("%d",&choise);
    switch(choise){
        case 1: strcpy(dname,"math");
        break;
         case 2: strcpy(dname,"pc");
        break;
         case 3: strcpy(dname,"info");
        break;
    }
       for(int i=0;i<n;i++){
            if(strcmp(t[i].departement.deptname,dname)==0 ){
        printf("votre numero est %s\n ",t[i].Numéro_unique);
    printf("votre nom est %s\n ",t[i].nom);
    printf("votre prenom est %s\n ",t[i].prenom);
    printf("votre date de naissaince est %d\t %s\t %d\t \n  ",t[i].date.jour,t[i].date.mois,t[i].date.annee);
     printf("votre departement est %s\n ",t[i].departement.deptname);
      printf("votre note general est %d\n ",t[i].departement.note_general);
          }      
          }  
    
     }
     void rechercher(struct etudiant t[100],int n){
         int choise;
         do{
         printf("1-pour rechercher un etudiant:\n ");
          printf("2-pour afficher la liste des etudiants inscrit dans un departement :\n ");
           printf("\nentrer votre choix: \n");
        scanf("%d",&choise);
        switch(choise){
        case 1:rechercherNom(t,n);
        break;
         case 2:afficherListe(t,n);
        break;
         default: printf("votre choix pas valide\n ");
         break;
        }
         }while(choise!=3);
     }
     void calculer_affich_moy(struct etudiant t[100],int n){
       
         float moyenne_general;
         float s1=0,s2=0,s3=0;
         int cpt1=0;
         int cpt2=0;
         int cpt3=0;
       
         for(int i=0;i<n;i++){
            if(strcmp(t[i].departement.deptname,"math")==0 ){
            s1=s1+t[i].departement.note_general;
            cpt1++;
            }
             if(strcmp(t[i].departement.deptname,"pc")==0 ){
            s2=s2+t[i].departement.note_general;
            cpt2++;
         }
          if(strcmp(t[i].departement.deptname,"info")==0 ){
            s3=s3+t[i].departement.note_general;
            cpt3++;
          } 
         } 
         if(cpt1!=0)
        printf("le moyennne general de math  est %.2f",s1/cpt1 );
         else 
          printf("le departement est vide \n");
         
           if(cpt2!=0)
        printf("le moyennne general de physic  est %.2f",s2/cpt2 );
         else 
          printf("le departement est vide \n");
           
      if(cpt3!=0)
        printf("le moyennne general de info  est %.2f",s3/cpt3 );
         else 
          printf("le departement est vide \n");
      
     }
     void calculer_moyunive(struct etudiant t[100],int n){
         int s=0;
         float moyenne;
         for(int i=0;i<n;i++){
             s=s+t[i].departement.note_general;
         }
         printf("le moyenne est %.2f",s/n);
     }
     void afficherNttl(struct etudiant t[100],int n){
         printf("le nombre totale detudiant est %d \n",n);
     }
     void afichNtlDept(struct etudiant t[100],int n){
    int cpt1=0;
         int cpt2=0;
         int cpt3=0;
       
         for(int i=0;i<n;i++){
            if(strcmp(t[i].departement.deptname,"math")==0 ){
            cpt1++;
            }
             if(strcmp(t[i].departement.deptname,"pc")==0 ){
           cpt2++;
         }
          if(strcmp(t[i].departement.deptname,"info")==0 ){
             cpt3++;
          } 
     }
     printf("le nombre totale detudiant dans math est %d \n",cpt1);
     printf("le nombre totale detudiant dans pc est %d \n",cpt2);
     printf("le nombre totale detudiant dans info est %d \n",cpt3);
     }
     void comparerSeuil(struct etudiant t[100],int n){
         float seuill;
         printf("entre le seuill ");
         scanf("%f",&seuill);
         for(int i=0;i<n;i++){
         if(t[i].departement.note_general>seuill) 
        printf("%s \n",t[i].nom);
         }
     }
     void reussite(struct etudiant t[100],int n){
          
         int cpt1=0;
         int cpt2=0;
         int cpt3=0;
       
         for(int i=0;i<n;i++){
            if(strcmp(t[i].departement.deptname,"math")==0 ){
              if(t[i].departement.note_general>10) 
            cpt1++;
            }
             if(strcmp(t[i].departement.deptname,"pc")==0 ){
              if(t[i].departement.note_general>10) 
            cpt2++;
         }
          if(strcmp(t[i].departement.deptname,"info")==0 ){
              if(t[i].departement.note_general>10) 
            cpt3++;
          } 
         } 
         
          printf("le nombre totale detudiant admis dans math est %d \n",cpt1);
     printf("le nombre totale detudiant admis dans pc est %d \n",cpt2);
     printf("le nombre totale detudiant admis dans info est %d \n",cpt3);
     }
int main() {
     int n=0;
    struct etudiant t[300] ; 
    int choix;
   do{
       printf("************MENU***************");
    printf("1. Ajouter un étudiant: \n");
        printf("2. Modifier un étudiant: \n");
        printf("3. supprimer un étudiant: \n");
        printf("4. Afficher un étudiant : \n");
        printf("5. rechercher un étudiant : \n");
        printf("6. calculer er afficher moyenne general : \n");
        printf("7.  calculer er afficher moyenne univer:\n ");
        printf("8. Afficher lle nombre total : \n");
        printf("9. TAfficher lle nombre total de dept: \n");
        printf("10. comparer avec seuille: \n");
        printf("11. le nombre detudiante ayant reussi : \n");
        printf("0. Quitter\n");
        printf("\nentrer votre choix: \n");
        scanf("%d",&choix);
    switch(choix){
        case 1: ajouter(t,n);
            n++;
       break;
        case 2: modifier(t,n);
         break;
        case 3: supprimer(t,n);
        break;
        case 4: afficher(t,n);
         break;
         case 5: rechercher(t,n);
         break;
         case 6:calculer_affich_moy(t,n);
         break;
         case 7:calculer_moyunive(t,n);
         break;
         case 8:afficherNttl(t,n);
         break;
         case 9:afichNtlDept(t,n);
         break;
          case 10:comparerSeuil(t,n);
         break;
          case 11:reussite(t,n);
         break;
          case 0:
          printf("sortir");
         break;
         default: printf("votre choix pas valide ");
         break;
 }
     }while(choix !=0);
return 0;
}
 