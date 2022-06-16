#include<stdio.h>
#include<stdlib.h>
int main()
{FILE *fp;
fp=fopen("Srm.dat","a");
int sno,m1,m2,m3,m4,m5;
char name[100];
printf(" \n");
printf("                         ############################################################ \n");
printf("                         # ##*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*# # \n");
printf("                         # #                                                      # # \n");
printf("                         # #             STUDENT RECORD PROGRAMME                 # # \n");
printf("                         # #                                                      # # \n");
printf("                         # ##*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*# # \n");
printf("                         ############################################################ \n");
printf("\n");
printf(" #------------------------------------------------------------------------------------------------#\n");
printf(" | Note:-                                                                                         |\n");
printf(" | the maximum marks that can be achieved in each subject : 50M                                   |\n");
printf(" | minimum marks that should be achived in each subject : 25M                                     |\n");
printf(" | If the Candidate fails in Even a Single Subject His Final Result Will Be Given as 'FAIL'       |\n");
printf(" #------------------------------------------------------------------------------------------------#\n");
while(1){
int n;
printf("enter 1 to continue 0 to stop:");
scanf("%d",&n);
if(n==0)
{exit(0);
}
printf("----------------------------------------------------------------------\n");
printf(" Enter student Number : ");
scanf("%d",&sno);
printf(" Enter sudent name : ");
scanf("%s",name);
printf(" Enter marks in PPS : ");
scanf("%d",&m1);
printf(" Enter marks in Maths : ");
scanf("%d",&m2);
printf(" Enter marks in Chemistry : ");
scanf("%d",&m3);
printf(" Enter marks in Third-language : ");
scanf("%d",&m4);
printf(" Enter marks in Civil & Mechanical : ");
scanf("%d",&m5);
fprintf(fp,"%20s%5d%5d%5d%5d%5d%5d",name,sno,m1,m2,m3,m4,m5);
}
fclose(fp);
return 0;
}
