//dans ce fichier j`jai creer les fonction deLA PARTIE 2 demander  pour  programme principal 

/****************//**********PARTIE 2 *********************************/
//  cette precedure  pour calculer	la Transposer d'une matrice 


void Transposer(int **p)
{
int s=0;
int i,j;
int k;int **A; int n,m;

// remplire la matrice A et B
 printf ("Donnez le nombres de lignes de la matrice n:"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de matrice m :");scanf("%d",&m);
printf("Remplissage de la matrice \n");
A= (int**) init_matrice (n,m);

//-déclaration de matrice qui reçoit le résultat

  int **p3 = malloc(sizeof(int*[m]));

    if (p3 == NULL)
    {
        printf("echec de l'allocation\n");
    }

    for ( i = 0; i < m; ++i)
    {
        p3[i] = malloc(sizeof(int[n]));

        if (p3[i] == NULL)
        {
            printf("echec de l'allocation\n");
        }
    }
// afficher la matrice avnt de faire sa transposer
 printf("matrice A avant la transoper\n");
 afficherMat (A,n,m); 

  printf("Voila votre matrice transposer :\n");

 for (i = 0; i <m ; i++)
       {
		 for ( j = 0; j < n; j++)
        {
            p3[i][j]=A[j][i];// inversement de l'ordere de remplissage 
  
        }
        }
        // pour afficher la matrice transposer
          afficherMat(p3,m,n); 
	
	
}

// fonction tri dune matrice

void tri_matrice(int **p)
{ 
    int i1,j1;
    int min,imin,jmin;int s ;  int max,imax,jmax; 
	        
	          int i,j,k;
	          int jj,x;int n,m;
	  printf ("Donnez le nombres de lignes de la  matrice n:"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de la  matrice m :");scanf("%d",&m);
 printf("\n");
  printf("remplissage de la matrice \n");
p= (int**) init_matrice (n,m);
printf("\n");
    printf(" choisir le type tri : \n");
    printf("cliquer 1 pour tri croissant\n");
   printf("cliquer 2 pour tri decroissant\n");
    scanf ("%d",&s);
    switch ( s )
    { case 1 : 
    
     printf("Matrice avant le tri croissant\n");
     afficherMat(p,n,m); 

    

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            
			
			  min=p[i][j];
			  imin=i;
			  jmin=j;
            for(k=i;k<n;k++)
            {
            	        for(jj=0;jj<m;jj++){
            	        	if (k ==i)
	            	        	if (jj>j)
								
								{
									if (min>p[k][jj] ) 
									{
										min=p[k][jj] ;
										imin=k;
				 						jmin=jj;
									}
								}
            	        	if (k >i){
            	        		if (min>p[k][jj] ) 
            	        		{
            	        			min=p[k][jj] ;
										imin=k;
				 						jmin=jj;	}	}}		
            }
            x=p[i][j];
            p[i][j]=min;
            p[imin][jmin]=x;
          //  printf("%4d",min);
        }
     //   printf("\n");
    }
     printf(" Matrice apres le tri croissant\n");
     afficherMat(p,n,m); 
     break ;
     case 2 :
     printf("Matrice avant le tri decroissant\n");
     afficherMat(p,n,m); 
      
    

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            
			
			  max=p[i][j];
			  imax=i;
			  jmax=j;
            for(k=i;k<n;k++)
            {
            	        for(jj=0;jj<m;jj++){
            	        	if (k ==i)
	            	        	if (jj>j)
								
								{
							if (max<p[k][jj] ) 
									{
										max=p[k][jj] ;
										imax=k;
				 						jmax=jj;
									}
								}
            	        	if (k >i){
            	        		if (max<p[k][jj] ) 
            	        		{
            	        			max=p[k][jj] ;
										imax=k;
				 						jmax=jj;	}	}}		
            }
            x=p[i][j];
            p[i][j]=max;
            p[imax][jmax]=x;
        }
    }
     printf(" Matrice apres le tri decroissant\n");
     afficherMat(p,n,m); 
     break;
     default :
      printf ("erreur"); }}

// Calcul du vecteur max ligne 
int maximum(int *t,int n)
{
    int max,i;
    max=t[0];

    for(i=1;i<n;i++)
        if(max<t[i])
          max=t[i];


    return max;
}
void Maxligne(int **p)
{
int i,j; int m,n;
int max;int *tMax;
 printf ("Donnez le nombres de lignes de la matrice n\n"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de la matrice m :\n");
  scanf("%d",&m);
printf("remplissage de la premiere matrice \n");
p= (int**) init_matrice (n,m);
tMax= (int*)malloc(n*(sizeof(int)));
 printf("matrice A\n");
 afficherMat(p,n,m); 
  printf("vecteur Maxligne\n");
  for(i=0;i<n;i++)
        tMax[i]=maximum(p[i],m);

    puts("affichage du tableau tMax");

    for(i=0;i<n;i++)
        printf("%d\t",tMax[i]);

}
// calculer le vecteur maxcolonnes
void Maxcolone(int **p)
{
int i,j; int *vecteur ; int n,m;int valmax;

 printf ("Donnez le nombres de lignes de la matrice n\n"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de la matrice m :\n");
  scanf("%d",&m);
printf("remplissage de la matrice \n");
p= (int**) init_matrice (n,m);
 printf("matrice a\n");
 afficherMat(p,n,m); 
     vecteur = (int *)malloc(sizeof(int )*n);                      
   printf("\n");
   
   //traitement+affichage du resultat
        vecteur= (int *)malloc(sizeof(int)*n);                      
   printf("\n");
   
   //traitement+affichage du resultat
     printf("tableau des max :\n");                           
     for (i=0;i<m;i++)
     { 
       valmax=p[0][i];
       for(j=0 ; j<n ; j++)
       {
    	   if (valmax<p[j][i])
    	   { 
    	     valmax=p[j][i];
		     }
       }
	     vecteur[i]=valmax;
	     printf("%d\t",vecteur[i]);
     }
     printf("\n");
 }



// fonction sous matrice 

void sous_mat (int **p)
{ int n,m; int i,j;
    int l,k;
  printf ("Donnez le nombres de lignes de la matrice n\n"); 
  scanf("%d",&n);
 printf ("Donnez le nombres de colonnes de la matrice m :\n");
  scanf("%d",&m);
printf("remplissage de la matrice \n");
p= (int**) init_matrice (n,m);  

    printf("donner les dimensions de la sous-matrice à extraire:\n");
    scanf("%d%d",&k,&l);
 int **A;
     A = (int**) malloc(sizeof(int*) * k);
     for(i=0; i<k; i++)
     A[i] = (int*) malloc(sizeof(int) * l);
   printf( "la matrice est :\n");
    afficherMat(p,n,m);
    printf("Le sous-matrice A[%d][%d] est :\n",k,l);
    for(i = 0; i < k; i++)
    {
        for(j = 0; j < l; j++)
        {
            printf("%d\t", p[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}



 

    
    
