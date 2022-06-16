#include<stdio.h>
#include<stdlib.h>
int main()
{FILE *p;
p=fopen("Srm.dat","r");
int sno,m1,m2,m3,m4,m5,tot;
float avg;
char name[100];
while(feof(p)==0)
{ int t;
fscanf(p,"%20s%5d%5d%5d%5d%5d%5d",name,&sno,&m1,&m2,&m3,&m4,&m5);
tot=m1+m2+m3+m4+m5;
avg=tot/5;
printf(" \n");
printf("                         ############################################################ \n");
printf("                         # ##*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*# # \n");
printf("                         # #                                                      # # \n");
printf("                         # #                 STUDENT MARKS MEMO                   # # \n");
printf("                         # #                                                      # # \n");
printf("                         # ##*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*#*# # \n");
printf("                         ############################################################ \n");
printf("\n");
printf(" ------------------------------------------------------\n");
printf(" Student Name : %s\n " ,name);
printf(" Student Number : %d\n " ,sno );
printf(" Marks obtained in PPS : %d\n " ,m1 );
printf(" Marks obtained in Maths : %d\n " ,m2 );
printf(" Marks obtained in Chemistry : %d\n " ,m3 );
printf(" Marks obtained in Thrid-Language : %d\n " ,m4 );
printf(" Marks obtained in Civil & Mechanical : %d\n " ,m5 );
printf(" Total : %d\n " ,tot );
printf(" Average : %.2f\n" ,avg );
if(m1>=25&&m2>=25&&m3>=25&&m4>=25&&m5>=25)
{printf(" Status : PASS\n " );}
else
{printf(" Status : FAIL\n " );}
printf(" Failed in : ");
if(m1<25)
printf("PPS ");
if(m2<25)
printf("Maths ");
if(m3<25)
printf("Chemistry ");
if(m4<25)
printf("Third-Language ");
if(m5<25)
printf("Civil&Mech \n");
else
printf("None\n");
printf(" ------------------------------------------------------\n");
printf("\n");
}
fclose(p);
return 0;
}
