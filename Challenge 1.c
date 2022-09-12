#include <stdio.h>
#include <stdlib.h>

int main()
{
   int age ;
   char nom[20],sexe[20],prenom[20];
   unsigned int  num;
   


   //  int
   
   printf ("entre age \n");
   scanf ("%d",&age);
   
   
   printf("entre le nom \n");
   scanf("%S",&nom);
   
   
   printf("entre le sexe \n");
   scanf("%s",&sexe);
   
   printf("entre le prenom \n");
   scanf("%s",&prenom);
   
   printf("entre le num \n");
   scanf("%u",&num);
   
    printf(" votre age  : %d \n entre num est :%u \n entre sexe est : %s \n  entre prenom est :%s\n  entre nom est:%s \n ",age,num,sexe,prenom,nom);
}
   
   
   
   
   

