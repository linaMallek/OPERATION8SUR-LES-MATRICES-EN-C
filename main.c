
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "fonction.h"
#include "fct.h"
#include <math.h>
#include <string.h>
#include "fct3.h"

int main()

{ // je vais creer un menu pour demander a l'utilisateur les operation qu'il veut faire apres avoir choisit yaura un deuxieme menu  

int choix1 ; // variable que je vais utiliser comme choix dans le prmier menu principal
int choix2 ;// variable que je vais utiliser comme choix dans le deuxieme menu (operation su matrice)//
int choix3 ;// variable que je vais utiliser comme choix dans troiseme menu (autres operation sur mat //
int choix4 ; //variable que je vais utiliser comme choix dans 4 menu (matrice et chaine)//
int **A; int **B ;bool quitter=false ; bool quit = false ;
char t [500]; char **C; int i;// variable utiliser pour creer la matrice de mots
Vecteur M[26];int j; // pour creer la structure 
 // le menu principal composer de 3 parties 
  while  ( quit == false)
  {
  printf("************************* MENU PRINCIPAL  **************************\n");
  printf("************************** ******************************************\n");
  printf ("==Veuillez choisir une option== / \n ");
  printf("\n");
  printf("1: Operations arithmetiques sur les matrices\n");
  printf("2: Autres operations sur les matrices\n");
  printf("3: Matrices, chaines de caracteres et listes chainees\n");
  printf("4:quitter \n");
  printf("\n");
   printf( "Introduisez le nombre choisit :  ");
  scanf("%d",&choix1);
  
   printf("\n");
  // jutilise  switch
   
  { switch (choix1)
 { case 1 : 
   // on affiche aussi un deuxieme menu 
     printf(" Veuillez choisir une opérations:\n");
     printf("\n");
     printf("1. Addition de deux matrices\n");
     printf("2. soustraction de deux matrices\n");
     printf("3. Multiplication d'une matrice par un nombre\n");
     printf("4. Multiplication de deux matrices\n");
     printf("5. Inversion d'une matrice \n");
     printf( "introduisez le nombre choisit : \n ");
     scanf("%d",&choix2);
  
      printf("\n");
   
    // pour chaque option  je lui associe la fonction qui lui correspond 
      switch (choix2) 
      { case 1: // Addition de deux matrices
                somme_matrice(A,B);
                break;
   case 2: // soustraction de deux matrices
                difference(A,B);
                break;
   case 3: // Multiplication d'une matrice par un nombre
                multiplicationnbr(A);
                break; 
   case 4: // Multiplication de deux matrices
                produit(A,B); 
  case 5: // Inversion d'une matrice
                inverse(A);
                break;   
   default : 
       printf("Le nombres introduit n'est pas sur le menu !");
       break ;
   } 
    break ;
    
    case 2 :
     // on affiche aussi un deuxieme menu   relatif a l'option 2 de menu principal fait avec un switch 
    
       printf(" Veuillez choisir une  operations:\n");
       printf("\n");
       printf("1. Transposee d’une matrice\n");
       printf("2. Tri d’une matrice\n");
       printf("3. Calcul du vecteur Maxligne\n");
       printf("4. Calcul du vecteur Maxcolonne\n");
       printf("5. Extraction de sous-matrices\n");
       printf( "introduisez le nombre choisit : \n ");
       scanf("%d", &choix3);
       
       switch (choix3)
       
       {   
         case 1: // Transposée d’une matrice
                Transposer(A);
                break;
         case 2: // Tri d’une matrice
                tri_matrice(A);
                break;
          case 3: // Calcul du vecteur Maxligne
                Maxligne(A);
                break;
           case 4: // Calcul du vecteur Maxcolonne
                Maxcolone(A);
                break;
          case 5: // Extraction de sous-matrices
                sous_mat(A);
                break;                       
          default: // Si le nombre est incorrect
                printf(" le nombre introduit n'est pas disponible dans le Menu !");
                break;
       }
    break;
        case 3 :
       // on affiche aussi un deuxieme menu relatif a l'option 3 de menu principal fait avec un switch
       while ( quitter == false)
       {
       printf("Veuillez choisir une option  :\n");
       printf("1. Saisie du texte\n");
       printf("2. Creation de la matrice de mots\n");
       printf("3. Affichage de la matrice\n");
       printf("4. Creation de la structure de listes\n");
       printf("5. Affichage de la structure\n");
       printf("6. Ajout d’un mot\n");
       printf("7. Suppression d’un mot\n");
       printf("8. Exit");
       printf("\n introduisez le nombre :\n ");
       scanf("%d", &choix4);
       printf("\n");
       switch (choix4)
        {case 1 :
         // demande le text a saisir
              fflush(stdin);
                printf("Saisiez  votre texte :\n");
                fgets(t,100,stdin);
                printf("\n");
                break;
    
        case 2 : 
         // creation la matrice de mots grace a la fonction creer_mat
             creer_mat (t,C);
         break;
         
        case 3 :// afficher la matrice de mots 
          AfficherMot(C,i);
         break ;
         case 4 : // creation de la structure 
          j=CreeListe (t,M);
          break ;
        case 5: // Affichage de la structure
                 afficherStr(M,j);
          break ;
        case 6: // Ajouter un mot
          Ajoutermot(M);
              break;
        case 7 : // supprimer un mot 
          Supprimer(M);
          break ; 
        case 8 : 
         quitter = true ; 
         break ; 
         default : 
          printf("le nombre choisit n'est pas sur le menu! \n ");
           break ; 
        }
        
       }break ; 
       case 4 : 
          printf("\n");
       printf(" ==========Revenez prochainement pour realiser vos operation============\n ");
          printf("\n");
          printf("\n");
          
            printf("******************************* MERCI  *******************************\n");
             quit = true ;
       break;
 }}
}} 

