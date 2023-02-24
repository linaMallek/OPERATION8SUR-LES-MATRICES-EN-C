#include <math.h>
// dans ce fichier y auras les fpnctions de la partie 3 du projet 
  // fonction creation de la matrice de mots 
  
  int creer_mat(char *t,char **p)
{

    int i,j,c;
    p = (char**)malloc(sizeof(char*) * 500);
    for(i=0; i<500; i++)
    p[i] = (char*) malloc(sizeof(char) * 26);
    
    c=j=0;
    for(i=0;t[i];i++)
      {
        if(t[i]!=' '){
            p[j][c]=t[i];
            c++;
        }
        else{
            p[j][c]='\0';
            c=0; j++;
        }
      }
    for (i = 0; i < (j+1); i++)
    {
      puts(p[i]);
    }

    c=(j+1);
    return c; // m=creer_mat(&t,&mat);
    
} 
// procedure afficher la matrice de mots 
void AfficherMot(char** A, int c)
{
   int i;
   for (i = 0; i < c; i++)
    {
      puts(A[i]);
    }
}
// creation de la structure 
// declaration de la structure 
typedef struct Pliste Pliste ;
struct Pliste 
{
    char info;
    Pliste  *next;
};

typedef struct Liste Liste;
struct Liste
{
    Pliste *tete;
};

typedef struct Vecteur
{
  char car;
  Liste L;
}Vecteur;
// procedure qui intialise le vecteur 
void initmat (Vecteur T[26])
{
  int i;

 for (i = 0; i < 26; i++)
 {
   T[i].L.tete=NULL;
 }
 char c='a';
 for (i = 0; i < 26; i++)
 {
   T[i].car=c;
   c++;
 }
}
void creer_vec(char X[26], int n, Vecteur T[26])
{
 int i,j=0; Pliste *Q;// pour le parcour 
 
 while (T[j].car != X[0])
 {
   j++;
 }
 
 for (i = 0; i < n; i++)
 {
          Pliste  *p; Pliste  *Q;
          p=(Pliste*)malloc(sizeof(Pliste));
          Q =T[j].L.tete;
          p->info=X[i];
          p->next=NULL;
          if(T[j].L.tete==NULL)
          {
           T[j].L.tete=p;
          }
          else
          {
           while(Q->next!=NULL)
           {
             Q=Q->next;
           }
            Q->next=p;
         }
 }       
           Pliste *p;
          p=(Pliste*)malloc(sizeof(Pliste));
           Q =T[j].L.tete;
          p->info=' ';
          p->next=NULL;
          if(T[j].L.tete==NULL)
          {
           T[j].L.tete=p;
          }
          else
          {
           while(Q->next!=NULL)
           {
             Q=Q->next;
           }
            Q->next=p;
         } 

}
// fonction pour creer la structure 
int CreeListe(char* text,Vecteur T[26])
{
  char** A; int i,j,c,s;  char X[26];
   // je mets le text dans une matrice 
          creer_mat(text ,A );
      // jintialise le vecteur de mots 
          initmat(T);
    // je creer la structure
     for (i = 0; i < (j+1); i++)
     {
     strcpy(X,A[i]);
     s=strlen(X);
     creer_vec(X,s,T);

     }

    s=(j+1);


  return s;
}
// afficher la structure 
void afficherStr(Vecteur T[26], int S)
{
  int i;
   for (i = 0; i < 26; i++)
  {
    if ( T[i].L.tete!=NULL)
    {
     printf("la chaine de lettre %c est: \n",T[i].car);
     Pliste *parcour =T[i].L.tete;
     while(parcour!=NULL)
     {
       printf("%c",parcour->info);
       parcour=parcour->next;
     }
     printf("\n");
     printf("\n");
    }
  }
}
// procedure ajouter a la liste 
void Ajoutermot(Vecteur T[26])
{
  char mot[26];
  int s;
  printf("Entrez le mot: \n");
  //fflush(stdin);
  fgets (mot,100,stdin);
  s=strlen(mot);
  creer_vec(mot,s,T);
  
}
// procedure suuprimer 
void Supprimer(Vecteur T[26])
{
  char mot[26]; char tom[26];
  int s,j,i=0;Pliste *p ;
   Pliste *Q;
    Pliste *Z;
  printf("Entrez le mot a supprimer: \n");
  scanf("%s",&mot);
  s=strlen(mot);
// mot pas encore trouver 
  while ((T[i].car != mot[0]) && i<26)
  {
    i++;
  }
  // mot trouver on change les chainages 
   p =T[i].L.tete;
   Q=p;
    Z=p;

   for (j = 0; j < s; j++)
   {
     p=p->next;
   }
    
  while (p->next!=NULL )
  {

    for (j = 0; j < s; j++)
    {
      tom[j]=Q->info;
      Q=Q->next;
    }
    if (strcmp(mot,tom) == 0)
    {
      Z=p->next;
    } 
   else
   {
     for (j = 0; j < s ; j++)
   {
     p=p->next;
   }
   }
      
  }
}


















