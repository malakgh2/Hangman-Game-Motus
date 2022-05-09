#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include<time.h>
#include <windows.h>
int main ()

{    int t1[10],tab_pseudo[6],tab_score[6];
    int nb_tentatives=6,nbr_erreures=0,x,help=1,m,i,n,score,pseudo,langueur,e,decision,p=0,v=0,indice=1,w,g,trouve,j,t;
    char k,dictionnaire[10][6]={"trois","bonde","bombe","cadre","carne","autre","baril","afros","chuts","check"},mot_donne[6]={"*****"},c,mot_cache[6],choix,mot[6],er[10]={"---------"},test[6]={"lllll"};
    char mdp[6][6];
    char dictionnaire1[10][15]={"PROGRAMME","MARRON","ROUGE","ASD","SLAO","TUNIS","ETOILE","LAPIN","FROGGIE","AMOUR"};
   char nom[6][10];
   int i1,nb,l,k1,cpt,pr,m1,pos,nbr,score1=0,faute=0,help1=1,indice1,ret,ren,choix1,test1=1,s=60,sec=60,inis=0,ini=0,clea,h=0;
   signed char aux[10];
   signed char anc_lettre[20]="",mot_cache1[20]="",mot1[20]="",etoile[2]="",ch[2]="",pseudo1[10];
    char quit,lettre=' ';

do
{
printf("  | -----------------------------------------------------------------------------------------------------------------------------------|\n");
printf("  |                                  BIENVENU AU JEU                                                                                   |\n");
printf("  |                                                                                                                                    |\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");
printf("\n");
printf("\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");
printf("  |                                   VEUILLEZ CHOISIR UN JEU                                                                          |\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");
printf("  |                                   1-LE PENDU                                                                                       |\n");
printf("  |                                   2-LE MOTUS                                                                                       |\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");
printf("  |                                   3-QUITTER                                                                                        |\n");
printf("  |------------------------------------------------------------------------------------------------------------------------------------|\n");

    printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");
   printf("\n");



    printf("if you want to clear your screen click 1 ");
   scanf("%i",&clea);
  if(clea==1)
  {
    system("cls");
  }

do
{
   printf("precisez votre choix svp \n");
   scanf("%d",&choix1);

}while((choix1<=0) || (choix1>3) );



if(choix1==1)
 {
printf("********PENDU******** \n \n \n");
printf("loading ||||||||||||||||||||||||||||||" );
printf("|||||||||||||||||||||||||||||||||||||||||||100% \n  ");

do
{
printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>entrer le nombre de joueur<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< \n ");
scanf("\n %i",&nb);
}while(nb<=0 || nb>=6);
cpt=0;
i1=0;
if(nb<=1)
{
printf("entrer votre pseudo n %d ",i1+1);
fflush(stdin);
fgets(nom[i1],10,stdin);
}
else
{
printf("entrer votre pseudo n %d ",i1+1);
fflush(stdin);
fgets(nom[i1],10,stdin);
i1=i1+1;
do
{
printf("entrer votre pseudo n %d ",i1+1);
fflush(stdin);
fgets(nom[i1],10,stdin);
if(strcmp(nom[i1],nom[i1-1])==0)
   {    do
        {
        printf(" pseudo existant donner votre pseudo une autre fois ");
        fflush(stdin);
        fgets(nom[i1],10,stdin);
        }while((strcmp(nom[i1],nom[i1-1])== 0));
      i1++;
   }
else
{   i1++;
}

}while((i1<nb));
}
 printf("clear screen \n ");
 scanf("%d",&clea);
 if(clea==1)
  {
    system("cls");
  }
do
{
s=60;
fflush(stdin);
 printf(" \n c'est le tour de %s \n " ,nom[pr]);

srand(time(NULL));
k1=rand()%9;

strcpy(mot1,dictionnaire1[k1]);
*etoile='*';
do
{        fflush(stdin);
        strcat(mot_cache1,etoile);

}while(strlen(mot_cache1) < ((strlen(mot1))));

nbr=strlen(mot1);



do
{
      printf("il vous reste %d coups a jouer  ",nbr);

       srand(time(0));
        ini=clock();
         printf(" et %i seconde  \n ",s);

      printf("quel est le mot secret ? %s ",mot_cache1);
      printf("\n");
      printf("taper '?' pour help \n");
      printf("\n");

        do
        {

                printf("proposer une lettre : ");
                fflush(stdin);
                scanf("%c",&lettre);

        }while (((lettre<'a') || (lettre>'z')) && (lettre !='?'));

        if(lettre=='?')
        {
            help1=0;
        }
        else
        {
            lettre=toupper(lettre);

        }

         *ch=lettre ;
         ret = strchr(anc_lettre,lettre);
        strcat(anc_lettre,ch);
        indice1 = strchr(mot1,lettre);

        if(ret!=0)
         {

          do
        {
                            do
                            {
                                printf("lettre deja trouver ressayez ");
                                fflush(stdin);
                                scanf("%c",&lettre);
                            }while (((lettre<'a') || (lettre>'z')) && (lettre !='?'));

                     if(lettre=='?')
                    {
                        help1=0;
                    }
                    else
                    {
                     lettre=toupper(lettre);
                    }
                     *ch=lettre ;
                    ren = strchr(anc_lettre,lettre);
                    strcat(anc_lettre,ch);
                    indice1 = strchr(mot1,lettre);

        }while(ren!=0);

        }


        i1=0;

        if(help1==0)
             {

                while((help1==0) && (i1<strlen(mot1)))
                 {
                     if(mot_cache1[i1]== mot1[i1])
                            { i1++; }
                    else
                        {
                            mot_cache1[i1] = mot1[i1];
                            *ch=mot1[i1] ;
                            strcat(anc_lettre,ch);
                            pos=i1;
                            help1=-1;
                            score1=-1;
                            for(m1=i1 ; m1<strlen(mot1) ; m1++)
                            {   if(mot1[pos] == mot1[m1])
                                {
                                mot_cache1[m1] = mot1[pos];
                                }
                            }
                        }
                 }

             }
            else
            {
                if(indice1 == 0)
                {
                    nbr -- ;
                    faute=faute+1;
                }
                else
                {
                    {for(i1=0 ; i1<strlen(mot1) ; i1++)
                        { if(lettre == mot1[i1])
                            {
                                mot_cache1[i1] = lettre;
                                *ch=mot1[i1] ;
                                strcat(anc_lettre,ch);

                            }
                        }

                    }
                }
            }

    s=s-((clock()-ini)/1000);

}while((nbr>0)&& (strcmp(mot1,mot_cache1)!=0) && (s>=0));

printf("\n");
if((faute==0) && (s==0))
{
    score1=0;
}
else
{
    if((faute<=1) && (faute>=0))
        {   score1=4+score1;}
    else
     { if((faute<=3) && (faute>=2))
      {score1=3+score1;
      }
     else
        if((faute<=5) && (faute>=4))
      {score1=2+score1;
      }
      else
        if((faute==6))
      {score1=1+score1;
      }
      else
        {printf("mot non trouve ");
        score1=0; }
}
}
t1[pr]=score1;

pr++;

if(strcmp(mot_cache1,mot1)==0)

{   printf("\n");
    printf("************************** FELICITATIONS !!!!!***************************\n");
    printf(" vous avez gagne \n ");
    printf(" le mot secret etait bien: %s \n ",mot_cache1);
    printf("votre score est %d \n ",score1);
     if(score1==4)
     {
         printf("-----------|\n");
         printf("            |\n");
         printf("            |\n");
         printf("            |\n");
         printf("            |\n");
         printf("            0 ouf sauve !!!! \n");
         printf("           /|> \n");
         printf("           / > ");
     }
     else
     {
         if(score1==3)
         {
         printf("-----------|\n");
         printf("            |\n");
         printf("            |\n");
         printf("            |\n");
         printf("            0 ouf sauve !!!\n");
         printf("           /|> \n");
         printf("           / > ");
         }
         else
          {if (score1==2)
            {
            printf("-----------|\n");
            printf("            |\n");
            printf("            |\n");
            printf("            0 faite attention  !!!\n");
            printf("           /|> \n");
            printf("           / > ");
            }
           else
           {
         printf("-----------|\n");
         printf("            |\n");
         printf("            0 oh mon dieu !!!\n");
         printf("           /|> \n");
         printf("           / > ");

           }

          }
     }
}
else
{
    printf(" Le succes n'est pas final, l'echec n'est pas fatal c'est le courage de continuer qui compte \n ");
    printf("\n");
    printf("votre score est %d \n ",score1);
     printf("\n");

         printf("-----------|\n");
         printf("            X oh non , tu m'a tue!!!\n");
         printf("           /|> \n");
         printf("           / > ");
        printf("\n");
        printf("\n");
i1=0;
}
    mot1[0]='\0';
    mot_cache1[0] = '\0';
    score1=0;
    anc_lettre[0] = '\0';
    cpt=cpt+1;
}while(cpt<nb);

printf("do you want to clear ur screen ?  \n ");
 scanf("%d",&clea);
 if(clea==1)
  {
    system("cls");
  }
do
{
         printf("\n");
                printf("\n");

 printf("         {------------------------------------------------------------------------------------------------------} \n");
    printf("\n");
      printf("\n");
    printf("         <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    1-rejour                    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n ");
    printf("        <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    2-verifier votre score      >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    printf("        <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    3-classement                >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n ");
    printf("       <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    4-retour au menu princaple  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> \n");
    printf("       <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<    5-quitter l'application     >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n \n ");
    printf("     {-----------------------------------------------------------------------------------------------------------} \n");
    printf("      {-----------------------------------------------------------------------------------------------------------} \n");




    do
    {
            printf("precisez votre choix svp \n");
            scanf("%d",&choix1);

    }while((choix1<=0) || (choix1>5) );

faute=0;
i1=0;
pr=0;

printf("if  you want to clear your screen press 1  \n ");
 scanf("%d",&clea);
 if(clea==1)
  {
    system("cls");
  }

if(choix1==1)
{
 do
 {
 printf("bienvenue une autre fois au pendu ");
 printf("loading ||||||||||||||||||||||||||||||60% ");
 printf("|||||||||||||||||||||||||||||||||||||||||||100%");
 cpt=0;


 do
{
 fflush(stdin);
 printf(" \n c'est le tour de %s \n " ,nom[pr]);
s=60;
srand(time(NULL));
k1=rand()%9;

strcpy(mot1,dictionnaire1[k1]);
*etoile='*';
do
{        fflush(stdin);
        strcat(mot_cache1,etoile);

}while(strlen(mot_cache1) < ((strlen(mot1))));

nbr=strlen(mot1);



do
{     printf("il vous reste %d coups a jouer \n",nbr);
        srand(time(0));
        ini=clock();
        printf(" et %i seconde  \n ",s);
      printf("quel est le mot secret ? %s : ",mot_cache1);
      printf("\n");
      printf("taper '?' pour help \n");
      printf("\n");

        do
        {

                printf("proposer une lettre : ");
                fflush(stdin);
                scanf("%c",&lettre);

        }while (((lettre<'a') || (lettre>'z')) && (lettre !='?'));

        if(lettre=='?')
        {
            help1=0;
        }
        else
        {
            lettre=toupper(lettre);

        }

         *ch=lettre ;
          ret = strchr(anc_lettre,lettre);
        strcat(anc_lettre,ch);
        indice1 = strchr(mot1,lettre);


        if(ret!=0)
         {

          do
        {
                            do
                            {
                                printf("svp entrer une lettre que vous n'avez pas utiliser ");
                                fflush(stdin);
                                scanf("%c",&lettre);
                            }while (((lettre<'a') || (lettre>'z')) && (lettre !='?'));

                     if(lettre=='?')
                    {
                        help1=0;
                    }
                    else
                    {
                     lettre=toupper(lettre);
                    }
                     *ch=lettre ;
                    ren = strchr(anc_lettre,lettre);
                    strcat(anc_lettre,ch);
                    indice1 = strchr(mot1,lettre);

        }while(ren!=0);

        }
        i1=0;

        if(help1==0)
             {

                while((help1==0) && (i1<strlen(mot1)))
                 {
                     if(mot_cache1[i1]== mot1[i1])
                            { i1++; }
                    else
                        {
                            mot_cache1[i1] = mot1[i1];
                             *ch=mot1[i1] ;
                            strcat(anc_lettre,ch);
                            pos=i1;
                            help1=-1;
                            score1=-1;
                            score1=-1;

                             for(m1=i1 ; m1<strlen(mot1) ; m1++)
                            {   if(mot1[pos] == mot1[m1])
                                {
                                mot_cache1[m1] = mot1[pos];
                                }
                            }
                        }
                 }

             }
            else
            {
                if(indice1 == 0)
                {
                    nbr -- ;
                    faute=faute+1;
                }
                else
                {
                    {for(i1=0 ; i1<strlen(mot1) ; i1++)
                        { if(lettre == mot1[i1])
                            {
                                mot_cache1[i1] = lettre;
                                  *ch=mot1[i1] ;
                                strcat(anc_lettre,ch);

                            }
                        }

                    }
                }
            }

   s=s-((clock()-ini)/1000);
}while((nbr>0)&& (strcmp(mot1,mot_cache1)!=0)&& (s>=0));

printf("\n");

if((faute==0) && (s==0))
{
    score1=0;
}
else
{
    if((faute<=1) && (faute>=0))
        {   score1=4+score1;}
    else
     { if((faute<=3) && (faute>=2))
      {score1=3+score1;
      }
     else
        if((faute<=5) && (faute>=4))
      {score1=2+score1;
      }
      else
        if((faute==6))
      {score1=1+score1;
      }
      else
        {printf("mot non trouve ");
        score1=0; }
}
}
t1[pr]=score1+t1[pr];
printf("votre nouvelle score est |%d|",t1[pr]);
pr++;

if(strcmp(mot_cache1,mot1)==0)

{
    printf("\n");
    printf("************************** FELICITATIONS !!!!!***************************\n");
    printf(" vous avez gagne \n ");
    printf(" le mot secret etait bien: %s \n ",mot_cache1);
    printf("votre score est %d \n ",score1);
     if(score1==4)
     {
         printf("-----------|\n");
         printf("            |\n");
         printf("            |\n");
         printf("            |\n");
         printf("            |\n");
         printf("            0 ouf sauve !!!! \n");
         printf("           /|> \n");
         printf("           / > ");
     }
     else
     {
         if(score1==3)
         {
         printf("-----------|\n");
         printf("            |\n");
         printf("            |\n");
         printf("            |\n");
         printf("            0 ouf sauve !!!\n");
         printf("           /|> \n");
         printf("           / > ");
         }
         else
          {if (score1==2)
            {
            printf("-----------|\n");
            printf("            |\n");
            printf("            |\n");
            printf("            0 faite attention  !!!\n");
            printf("           /|> \n");
            printf("           / > ");
            }
           else
           {
         printf("-----------|\n");
         printf("            |\n");
         printf("            0 oh mon dieu !!!\n");
         printf("           /|> \n");
         printf("           / > ");






           }

          }

     }

}
else
{
    printf(" Le succes n'est pas final, l'echec n'est pas fatal c'est le courage de continuer qui compte \n ");
    printf("\n");
    printf("votre score est %d \n ",score1);
         printf("-----------|\n");
         printf("            X oh non , tu m'a tue!!!\n");
         printf("           /|> \n");
         printf("           / > ");
         printf("\n");
         printf("\n");
        printf("\n");
        printf("\n");
i1=0;
}
    mot1[0]='\0';
    mot_cache1[0] = '\0';
    score1=0;
    anc_lettre[0] = '\0';
    score1=0;

    cpt++;

}while(cpt<nb);

printf("voulez-vous quitter ? ");
printf("-o pour quitter  \n ");
printf("-n pour rejouer \n ");
scanf("%s",&quit);
faute=0;
i1=0;
pr=0;
}while(quit!='O');
}
else
{
    if(choix1==2)
    {
        for(i1=0;i1<nb;i1++)
        {
                printf("\n \t\t|%s| votre score est \n k|%i|",nom[i1],t1[i1]);
        }

    }
    else
    {
        if(choix1==3)
          {
          for (i1=0;i1<nb-1;i1++)
          {
               if(t1[i1+1]>t1[i1])
               {
                   h=t1[i1];
                   t1[i1]=t1[i1+1];
                   t1[i1+1]=h;
                   strcpy(pseudo1,nom[i1]);
                   strcpy(nom[i1],nom[i1+1]);
                   strcpy(nom[i1+1],pseudo1);

               }
          }
          printf("pseudo \n");
          printf("\t\t\t\t\t\t\t\t\t\t\t\t score ");
          for(i1=0;i1<nb;i1++)
        {
                printf(" \t \t \t %s ",nom[i1]);
                printf("\t\t\t\t\t\t\t\t\t\t\t\t |%i|",t1[i1]);
        }

          }
          else
          {
              if(choix1==4)
          {
              test1=0;
          }
          else
          {
            printf("au revoir ");
          }
          }



    }
}
if(choix1!=5)
 {
     printf("\n si vous voulez quitter et revenir au deuxieme menu  alors  \n");
     printf("entrer o \n ");
     printf(" si non entre n \n ");
     fflush(stdin);
     scanf("%c",&quit);
 }
}while(quit!='o' && choix1!=5);
}
else
 {

test1=1;
     if(choix1==2)
    {

       printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
printf("x                     . .   . .   .....     ......   .    .        .....                              x\n");
printf("x                     .   .   .   .   .        .     .    .        .                                  x\n");
printf("x                     .       .   .   .        .     .    .        .....                              x\n");
printf("x                     .       .   .   .        .     .    .            .                              x\n");
printf("x                     .       .   .....        .     ......        .....                              x\n");
printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
printf("\t\t\t\t#bienvenu au jeu motus#\n");
score=0;
srand( time( NULL ) );
  n = rand() % 10 ;
 for (i=0;i<6;i++)
 {
      mot_cache[i]=dictionnaire[n][i];
 }
 mot_donne[0]=mot_cache[0] ;
sec=60;
 do{
     printf("\t\t* donner un pseudo numerique a 2 nombres : ");
     scanf("%i",&pseudo);
 }while(pseudo<10 || pseudo>99);
tab_pseudo[indice]= pseudo;
 do {

printf("il vous reste %i tentatives ",nb_tentatives);
srand(time(0));
        inis=clock();
        printf(" et %i seconde  \n ",sec);
printf("MOT CACHE :%s         %s  ",mot_donne,er);
printf("tapez '?' pour help ou 'j'pour jouer:");
fflush(stdin);
scanf("%c",&choix);


if(choix=='?' && help>0){
        do{
  printf("choisir le numero de la case que vous souhaitez divulgue  :");
scanf("%i",&m);}
while((m<1|| m>4)&& (mot_cache[m]==mot_donne[m]));
mot_donne[m]=mot_cache[m];
help--;
nbr_erreures++;}


    else if(choix=='j')
{
   do{
    printf("donner un mot: ");
    scanf("%s",mot);
     langueur=strlen(mot);
    }
    while(langueur!=6 && mot[0]!=mot_cache[0]);
   i=1;
j=1;
t=1;
e=8;
while(i<=4){
    if(mot[i]==mot_cache[i]){
        test[i]='#';
        mot_donne[i]=mot[i];}
        i++;
    }
    while(j<=4)
    {
        if(test[j]=='l'){
                while(t<=4)
                {
                    if(mot[j]==mot_cache[t])
                    {
                        er[e]=mot_cache[t];
                        e=e-3;
                    }t++;
                }t=1;
    }
    j++;
   }
    i=1;trouve=0;
    while(i<5 &&trouve==0){
        if(mot_cache[i]!=mot_donne[i])
        trouve=0;
        i++; }
    if(trouve==0){
        nbr_erreures++;
            nb_tentatives--;}}


    else
        printf("choix errone\n ");

   sec=sec-((clock()- inis)/1000);
 }while(nb_tentatives>=0 && (strcmp(mot_donne,mot_cache)!=0) && (sec>=0));

 if(strcmp(mot_donne,mot_cache)==0)
    {
        if(nbr_erreures>=0 && nbr_erreures<=1)
        {
            score=4;

     printf("\t\t*****BRAVO! VOTRE SCORE EST %i *****\n",score);
        }
     else
        if(nbr_erreures>=2 &&nbr_erreures<=3 )
        {
            score=3;
            printf("\t\t****BRAVO! VOTRE SCORE EST %i *****\n",score);
        }
        else

            if(nbr_erreures>=4 &&nbr_erreures<=5 )
            {
            score=2;
            printf("\t\t*****BRAVO! VOTRE SCORE EST %i *****\n",score);
            }
            else
                if (nbr_erreures==6)
            {
                score=1;
                printf("\t\t*****BRAVO! VOTRE SCORE EST %i *****\n",score);}
            else{
            score=0;
                printf("\t\t*****MALHEURESEMENT TU AS ECHOUE *****\n");}
    }

tab_pseudo[indice]= pseudo;
tab_score[indice]= score;

indice++;

do
{
printf("  | ------------------------------------------------------------------------------------------------|\n");
printf("  |                                  1-REJOUER                                                      |\n");
printf("  |                                  2-VERIFIER LE SCORE                                            |\n");
printf("  |                                  3-CLASSEMENT                                                   |\n");
printf("  |                                  4-RETOUR AU MENU PRINCIPAL                                     |\n");
printf("  |                                  5-QUITTER                                                      |\n");
printf("  |                                                                                                 |\n");
printf("  |-------------------------------------------------------------------------------------------------|\n");
score=0;
help=1;

do {
    printf("VOTRE DECISION :");
    scanf("%i",&decision);
}while(decision<1 || decision>5);
switch(decision){
case 1 :
    nbr_erreures=0;
    nb_tentatives=6;
printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
printf("x                     . .   . .   .....     ......   .    .        .....                              x\n");
printf("x                     .   .   .   .   .        .     .    .        .                                  x\n");
printf("x                     .       .   .   .        .     .    .        .....                              x\n");
printf("x                     .       .   .   .        .     .    .            .                              x\n");
printf("x                     .       .   .....        .     ......        .....                              x\n");
printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
printf("\t\t\t\t#bienvenu au jeu motus#\n");
strcpy(mot_cache," ");
strcpy(mot_donne,"*****");
strcpy(er,"----------");
sec=60;
srand( time( NULL ) );
  n = rand() % 10 ;
 for (i=0;i<6;i++)
 {
      mot_cache[i]=dictionnaire[n][i];
 }
 mot_donne[0]=mot_cache[0] ;

 do{
     printf("\t\t* donner un pseudo numerique a 2 nombres : ");
     scanf("%i",&pseudo);
 }while(pseudo<10 || pseudo>99);

 do {

printf("il vous reste %i tentatives\n",nb_tentatives);
        srand(time(0));
        inis=clock();
        printf(" et %i seconde  \n ",sec);

printf("MOT CACHE :%s         %s  ",mot_donne,er);
printf("tapez '?' pour help ou 'j'pour jouer:");
fflush(stdin);
scanf("%c",&choix);


if(choix=='?' && help>0){
        do{
  printf("choisir le numero de la case que vous souhaitez divulgue  :");
scanf("%i",&m);}
while((m<1|| m>4)&& (mot_cache[m]==mot_donne[m]));
mot_donne[m]=mot_cache[m];
help--;
score=-1;
}


    else if(choix=='j')
{
   do{
    printf("donner un mot: ");
    scanf("%s",mot);
     langueur=strlen(mot);
    }
    while(langueur!=6 && mot[0]!=mot_cache[0]);
   i=1;
j=1;
t=1;
e=8;
while(i<=4){
    if(mot[i]==mot_cache[i]){
        test[i]='#';
        mot_donne[i]=mot[i];}
        i++;
    }
    while(j<=4)
    {
        if(test[j]=='l'){
                while(t<=4)
                {
                    if(mot[j]==mot_cache[t])
                    {
                        er[e]=mot_cache[t];
                        e=e-3;
                    }t++;
                }t=1;
    }
    j++;
   }
    i=1;trouve=0;
    while(i<5 &&trouve==0){
        if(mot_cache[i]!=mot_donne[i])
        trouve=0;
        i++; }
    if(trouve==0){
        nbr_erreures++;
            nb_tentatives--;}}


    else
        printf("choix errone\n ");
           sec=sec-((clock()- inis)/1000);
 }while(nb_tentatives>=0 && (strcmp(mot_donne,mot_cache)!=0)&& (sec>=0));

 if(strcmp(mot_donne,mot_cache)==0)
    {
        if(nbr_erreures>=0 && nbr_erreures<=1)
        {
            score=4;

     printf("BRAVO! VOTRE SCORE EST %i",score);
        }
     else
        if(nbr_erreures>=2 &&nbr_erreures<=3 )
        {
            score=3;
            printf("BRAVO! VOTRE SCORE EST %i",score);
        }
        else

            if(nbr_erreures>=4 &&nbr_erreures<=5 )
            {
            score=2;
            printf("BRAVO! VOTRE SCORE EST %i",score);
            }
            else
                if (nbr_erreures==6)
            {
                score=1;
                printf("BRAVO! VOTRE SCORE EST %i",score);}
            else{
            score=0;
                printf("MALHEURESEMENT TU AS ECHOUE");}
    }

tab_pseudo[indice]=pseudo;
tab_score[indice]=score;
indice++ ;

    break;
case 2:printf("\t\t*** VOTRE SCORE EST %i ***",score);
    break;
case 3:


for (i = 0 ; i<indice; i++)
{
if (tab_score[i] < tab_score[i+1])
{
p = tab_score [i];
l=tab_pseudo[i];
tab_score[i] = tab_score[i+1];
tab_pseudo[i]=tab_pseudo[i+1];
tab_score[i+1] = p;
tab_pseudo[i+1]=l;
}
}

printf("------------------------CLASSEMENT----------------------------\n");
printf("*********PSEUDO          SCORE       ************************\n");
printf("**********worst                                               \n");

for(i=1;i<indice;i++){
printf("*********%i               %i         ************************\n",tab_pseudo[i],tab_score[i]);}

printf("**********best                                                \n");

    break;
case 4: test1=0;
    break;
case 5:
    printf("  | ------------------------------------------------------------------------------------------------|\n");
    printf("  | ------------------------------------------------------------------------------------------------|\n");
    printf("  |                                                                                                 |\n");
    printf("  |                                      AU REVOIR                                                  |\n");
    printf("  | ------------------------------------------------------------------------------------------------|\n");
    printf("  | ------------------------------------------------------------------------------------------------|\n");


 default :0;}
 if(decision!=5)
 {
printf("voulez vous quitter et revenir au deuxieme menu alors ? \n");
printf("o si quitter \n" );
printf("n si quitter \n" );
fflush(stdin);
scanf("%c",&quit);
 }
}while(quit!='o' && decision!=5 );

}
else
   {

    printf("  | ------------------------------------------------------------------------------------------------|\n");
    printf("  | ------------------------------------------------------------------------------------------------|\n");
    printf("  |                                                                                                 |\n");
    printf("  |                                      AU REVOIR                                                  |\n");
    printf("  | ------------------------------------------------------------------------------------------------|\n");
    printf("  | ------------------------------------------------------------------------------------------------|\n");
   }
 }
}while(test1!=1);

return 0;
}
