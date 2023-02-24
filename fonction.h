//dans ce fichier j`jai creer les fonction deLA PARTIE 1 demander  pour  programme principal 
#include <math.h>
/**************************PARTIE 1 *********************************/
// Fonction affiche pour afficher la matrice 
void  afficherMat (int **p,int n,int m)
{
int i,j;

 for (i = 0; i < n; i++)
       {
		 for ( j = 0; j < m; j++)
        {
           printf(" %d",p[i][j]);
   
        }
        printf("\n");}
        }
//fonction pour l'allocation et remplissage de  matrice 
int ** init_matrice(int n,int m)
{
int i,j,val; int **A;
    A=(int**)malloc(n*sizeof(int*));
    

    if (A == NULL)
    {
        printf(" la matrice n'est pas encore creer\n");
    }

    for ( i = 0; i < n; ++i)
    {
         A[i]=(int*)malloc(m*sizeof(int));

        if (A[i] == NULL)
        {
            printf("Echec de l'allocation\n");
        }
    }
    
    // remplir la matrice 
        for (i = 0; i < n; ++i)
        for ( j = 0; j < m; ++j)
        {
        	
        	printf("donnez la valuer [%d,%d] :",i,j);
            scanf("%d",&val);
            
            A[i][j] = val;
    
        }
        
return A;

}
// la fonction qui calcul la somme de deux matrice

void somme_matrice(int **A ,int **B )
{
    
int s=0;
int i,j; int **P; int n,m; 
// remplire la matrice A et B
 printf ("Donnez le nombres de lignes de la  matrice n:"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de la matrice m :");scanf("%d",&m);
printf("Remplissage de la premiere matrice \n");
A= (int**) init_matrice (n,m);
printf("Remplissage de la deuxieme matrice ");
B=(int**) init_matrice (n,m);
// declaration de la matrice qui reçoit la somme des deux autres 
  
    P=(int**)malloc(n*sizeof(int*));

    if (P == NULL)
    {
        printf(" la matrice n'est pas encore creer\n");
    }

    for ( i = 0; i < n; ++i)
    {
         P[i]=(int*)malloc(m*sizeof(int));

        if (P[i] == NULL)
        {
            printf("Echec de l'allocation\n");
        }
    }

// afficher la 1ere matrice
 printf("matrice A est :\n");
 afficherMat(A,n,m); 
  printf("matrice B est:\n");

// afficher la 2eme  matrice
 afficherMat(B,n,m); 
  printf("matrice A+B\n");

 for (i = 0; i < n; i++)
       {
		 for ( j = 0; j < m; j++)
        {
          P[i][j]=A[i][j]+B[i][j] ;
         // 
// afficher la  resultat
           printf(" %d",P[i][j]);
   
        }
        printf("\n");}


	
}
        
//soustraction entre deux matrice 
void difference(int **A,int **B)
{int i; int j;
int **P; int n,m;
// remplire la matrice A et B
 printf ("Donnez le nombres de lignes de la  matrice n: "); 
  scanf("%d",&n);
  printf("\n");
 printf ("Donnez le nombres de colonnes de la matrice m :");scanf("%d",&m);
printf("Remplissage de la premiere matrice \n");
A= (int**) init_matrice (n,m);

printf("Remplissage de la deuxieme matrice ");
B=(int**) init_matrice (n,m);
//-declaration de matrice qui reçoit la resultat 
   P=(int**)malloc(n*sizeof(int*));

    if (P == NULL)
    {
        printf(" la matrice n'est pas encore creer\n");
    }

    for ( i = 0; i < n; ++i)
    {
         P[i]=(int*)malloc(m*sizeof(int));

        if (P[i] == NULL)
        {
            printf("Echec de l'allocation\n");
        }
    }

// -afficher la 1ere matrice
 printf("matrice A est :\n");
 afficherMat(A,n,m);
 printf("\n");
  printf("matrice B est :\n");
  // -afficher la 2eme matrice
 afficherMat(B,n,m);
 
  printf("matrice A-B est :\n");

 for (i = 0; i < n; i++)
       {
		 for ( j = 0; j < m; j++)
        {// la soustraction se fait directement entre les contenus de matrices 
          P[i][j]=A[i][j]-B[i][j] ;
           printf(" %d",P[i][j]);
   
        }
        printf("\n");}


	
}
// Fonction multiplication d'une matrice par un nombre 
void multiplicationnbr(int **A)
{
int i; 
 int j; int **P; int n,m,nbr ;
  printf ("Donnez le nombres de lignes de la matrice n"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de la matrice m :");
  scanf("%d",&m);
   printf("\n");
printf ("Donnez le nombre dont on multipie la matrice nbr  :");   scanf("%d",&nbr);
 printf (" remplire la matrice \n ");
A= (int**) init_matrice (n,m);
//-declaration de matrice qui reçoit le resultat apres la multiplication 
   P=(int**)malloc(n*sizeof(int*));

    if (P == NULL)
    {
        printf(" la matrice n'est pas encore creer\n");
    }

    for ( i = 0; i < n; ++i)
    {
         P[i]=(int*)malloc(m*sizeof(int));

        if (P[i] == NULL)
        {
            printf("Echec de l'allocation\n");
        }
    }

// afficher la  matrice avant multiplication
 printf("matrice A avant multiplication par le nombre est :\n");
 afficherMat(A,n,m);
  printf("la matrice A apres multiplication par le nombre %d est :\n",nbr);
 for (i = 0; i < n; i++)
       {
		 for ( j = 0; j < m; j++)
        {
          P[i][j]=A[i][j]*nbr;
         //  -afficher la resultat
           printf(" %d",P[i][j]);
   
        }
        printf("\n");}


	
}

// fonction multplication entre deux matrices 
void produit(int **A,int **B)
{
int i,j;
int k;
int **P;
 int n3 ;int n;int m;  
  printf ("Donnez le nombres de lignes de la 1ere matrice n:"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de la 1ere  matrice m :");scanf("%d",&m);
 printf("\n");
  printf("*******notation: le nombres de colonnes de la matrice 1 est egale au nombres de lignes  de matrice 2 ******* ");
printf("\n");
printf ("Donnez le nombres de lignes de la 2eme matrice B  :\n");   scanf("%d",&n3);
printf("remplissage de la premiere matrice \n");
A= (int**) init_matrice (n,m);
printf("remplissage de la deuxieme matrice ");
B=(int**) init_matrice (m,n3);
//-declaration de matrice qui reçoit la resultat 
   P=(int**)malloc(n*sizeof(int*));

    if (P == NULL)
    {
        printf(" la matrice n'est pas encore creer\n");
    }

    for ( i = 0; i < n; ++i)
    {
         P[i]=(int*)malloc(m*sizeof(int));

        if (P[i] == NULL)
        {
            printf("Echec de l'allocation\n");
        }
    }
  printf(" la matrice A est :\n");
  afficherMat(A,n,m); 
printf("matrice B\n");
 afficherMat(B,m,n3); 
  printf("La matrice A*B\n");
     for (i = 0; i < n; i++)// pour parcourir dans  les lignes de la 1 ere matrice   
       {
		 for ( j = 0; j < n3; j++)//pour parcoure dans  les colonnes  de 2eme matrice
        {
            P[i][j]=0;
                        for(k=0;k<m;k++){// pour parcoure dans  les case  de la ligne i de 1ere matrie et de colonne j de la 2eme matrice 
						  
                            P[i][j]+=A[i][k]*B[k][j];// calculer la some des produit 
                        }}}
                            
           for(i = 0; i < n; i++)
  {
    for(j = 0; j < m; j++) 
    {
      printf("%d\t",P[i][j]);
    }
    printf("\n");
   
        }

}

//******** l'inverse d'une matrice : linerse se calcule ainsi A= (1\det) * transposer(com(A))// 
// linconveniant de cette methode cest que la matrice doit etre carré  
    // dabord je calcul le determinant  

float determinantt(float **a,float k)//cet fonction utilisée pour la fonction invers
{
  float s=1,det=0;
  int i,j,m,n,c;
  m=(int)k;
  n=(int)k;
  
  


  float **b = malloc(sizeof(float*[m]));

    if (b == NULL)
    {
        printf("echec de l'allocation\n");
    }

    for ( i = 0; i < m; ++i)
    {
        b[i] = malloc(sizeof(float*[n]));
        if (b[i] == NULL)
        {
            printf("echec de l'allocation\n");
        }
    }

  if (k==1)
    {
     return (a[0][0]);
    }
  else
    {
     det=0;
     for (c=0;c<k;c++)
       {
        m=0;
        n=0;
        for (i=0;i<k;i++)
          {
            for (j=0;j<k;j++)
              {
                b[i][j]=0;
                if (i != 0 && j != c)
                 {
                   b[m][n]=a[i][j];
                   if (n<(k-2))
                    n++;
                   else
                    {
                     n=0;
                     m++;
                     }
                   }
               }
             }
          det=det + s * (a[0][c] * determinantt(b,k-1));
          s=-1 * s;
          }
    }

    return det;
}

//********************************************************************* transpose
void  transpose(float **num,float **fac,float r){// cet fonction utilisée pour la fonction invers
    int k=(int)r;
      int i,j;
       float d;
       
       
       
  float **b = malloc(sizeof(float*[k]));

    if (b == NULL)
    {
        printf("echec de l'allocation\n");
    }

    for ( i = 0; i < k; ++i)
    {
        b[i] = malloc(sizeof(float*[k]));
        if (b[i] == NULL)
        {
            printf("Ã‰chec de l'allocation\n");
        }
    }
    
     
  float **inverse = malloc(sizeof(float*[k]));

    if (b == NULL)
    {
        printf("Ã‰chec de l'allocation\n");
    }

    for ( i = 0; i < k; ++i)
    {
        inverse[i] = malloc(sizeof(float*[k]));
        if (inverse[i] == NULL)
        {
            printf("Ã‰chec de l'allocation\n");
        }
    }
    
    
     for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
         b[i][j]=fac[j][i];
        }
    }



  d=determinantt(num,r);
  for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
        inverse[i][j]=b[i][j] / d;
        }
    }

   printf("\n\n\nThe inverse of matrix is : \n");

   for (i=0;i<r;i++)
    {
     for (j=0;j<r;j++)
       {
         printf("\t%f",inverse[i][j]);
        }
    printf("\n");
     }
    
    
    
}
//****************************************   cofactor

void cofactor(float **num,float k1)//cette fonction utilisée pour la fonction invers
{

 int k=(int)k1;
  int p,q,m,n,i,j;
  float f= k1;
  

 
  float **b = malloc(sizeof(float*[k]));

    if (b == NULL)
    {
        printf("Ã‰chec de l'allocation\n");
    }

    for ( i = 0; i < k; ++i)
    {
        b[i] = malloc(sizeof(float*[k]));
        if (b[i] == NULL)
        {
            printf("Ã‰chec de l'allocation\n");
        }
    }
    
     
  float **fac = malloc(sizeof(float*[k]));

    if (b == NULL)
    {
        printf("Ã‰chec de l'allocation\n");
    }

    for ( i = 0; i < k; ++i)
    {
        fac[i] = malloc(sizeof(float*[k]));
        if (fac[i] == NULL)
        {
            printf("Ã‰chec de l'allocation\n");
        }
    }

 
 for (q=0;q<f;q++)
 {
   for (p=0;p<f;p++)
    {
     m=0;
     n=0;
     for (i=0;i<f;i++)
     {
       for (j=0;j<f;j++)
        {
          if (i != q && j != p)
          {
            b[m][n]=num[i][j];
            if (n<(f-2))
             n++;
            else
             {
               n=0;
               m++;
               }
            }
        }
      }
      fac[q][p]=pow(-1,q + p) * determinantt(b,f-1);
    }
  }
  transpose(num,fac,f);
  
  
}

//***************************************************************************** invers



void inverse(){
    
     float d;
  int k;
  int i,j;
  float val;
  
  


  printf("-------------------------------------------------------------\n");
  printf("-------------------------------------------------------------\n");
  printf("-------------------------------------------------------------\n");
  printf("\n    Programme pour trouver l'inverse de la matrice    \n\n");
  printf(" Entrez l'ordre de la matrice: ");
  scanf("%d",&k);
  printf("Entrez les éléments de   %.0dX%.0d la matrice : \n",k,k);
   float **p3 = malloc(sizeof(float*[k]));

    if (p3 == NULL)
    {
        printf("Ã‰chec de l'allocation\n");
    }

    for ( i = 0; i < k; ++i)
    {
        p3[i] = malloc(sizeof(float[k]));

        if (p3[i] == NULL)
        {
            printf("Ã‰chec de l'allocation\n");
        }
    }
    
    
        for (i = 0; i < k; ++i)
        for ( j = 0; j < k; ++j)
        {
        	
        	printf("donnez la valuer [%d,%d]\n",i,j);
            scanf("%f",&val);
            
            p3[i][j] = val;
      //  
	  
	//      printf("p[%d][%d] = %d\n", i, j, p[i][j]);
        }
	    	    	     	    	

 d=determinantt(p3,k);
 //d=0;



  printf("Déterminant de la matrice = %f",d);
  if (d==0)
   printf("\nL'inverse de la matrice saisie n'est pas possible\n");
  else
   //
   cofactor(p3,k);
    
}

