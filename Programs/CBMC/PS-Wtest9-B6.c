//This program in Problem1-RERS2012.c
#include <assert.h>
#include <math.h>
#include<stdio.h>
#ifdef LLBMC
#include <llbmc.h>
#else
//removed
#endif

#define BOUND 6



// inputs
int a= 1;
int d= 4;
int e= 5;
int f= 6;
int c= 3;
int b= 2;

// outputs
int u = 21;
int v = 22;
int w = 23;
int x = 24;
int y = 25;
int z = 26;

int a17 = 1;
int a7 = 0;
int a20 = 1;
int a8 = 15;
int a12 = 8;
int a16 = 5;
int a21 = 1;
int kappa;
int calculate_output(int input) {
printf("POINT: 1\n");

if((((a8==15)&&(((((a21==1)&&(((a16==5)||(a16==6))&&(input==1)))&&(a20==1))&&(a17==1))&&!(a7==1)))&&(a12==8))){
printf("POINT: 2\n");
a16 = 5;
a20 = 0;
printf("%d",24);//return 24;
} else{
printf("POINT: 3\n");

 if((((((((input==5)&&((((a16==6)&&(a17==1))||(!(a17==1)&&(a16==4)))||(!(a17==1)&&(a16==5))))&&(a20==1))&&(a12==8))&&(a7==1))&&!(a21==1))&&(a8==13))){
printf("POINT: 4\n");
a20 = 0;
a16 = 6;
a17 = 0;
a8 = 15;
a7 = 0;
a21 = 1;
printf("%d",26);//return 26;
} else{
printf("POINT: 5\n");

 if(((!(a7==1)&&((((a16==6)&&((a21==1)&&((a17==1)&&(input==3))))&&!(a20==1))&&(a8==15)))&&(a12==8))){
printf("POINT: 6\n");
a20 = 1;
a16 = 4;
a7 = 1;
a8 = 13;
printf("%d",-1);//return -1;
} else{
printf("POINT: 7\n");

 if(((a17==1)&&((!(a7==1)&&(((a21==1)&&((((a16==5)||(a16==6))&&(input==6))&&(a20==1)))&&(a8==15)))&&(a12==8)))){
printf("POINT: 8\n");
a8 = 13;
a7 = 1;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 9\n");

 if((((input==3)&&((((a16==6)&&((!(a20==1)&&(!(a7==1)&&!(a17==1)))&&(a8==15)))&&(a21==1))||((((a8==13)&&((a20==1)&&((a17==1)&&(a7==1))))&&(a16==4))&&!(a21==1))))&&(a12==8))){
printf("POINT: 10\n");
a7 = 0;
a20 = 1;
a21 = 1;
a16 = 4;
a17 = 1;
a8 = 13;
printf("%d",-1);//return -1;
} else{
printf("POINT: 11\n");

 if((((a17==1)&&(((a21==1)&&((!(a7==1)&&((input==4)&&(a8==15)))&&!(a20==1)))&&(a12==8)))&&(a16==6))){
printf("POINT: 12\n");
a17 = 0;
printf("%d",26);//return 26;
} else{
printf("POINT: 13\n");

 if((((a12==8)&&(((a21==1)&&((((input==5)&&!(a7==1))&&(a8==15))&&(a16==5)))&&!(a20==1)))&&!(a17==1))){
printf("POINT: 14\n");
a7 = 1;
a16 = 4;
a8 = 13;
a20 = 1;
a17 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 15\n");

 if(((a12==8)&&((input==1)&&(((a21==1)&&(((a8==15)&&((!(a17==1)&&!(a7==1))&&!(a20==1)))&&(a16==6)))||(!(a21==1)&&((a16==4)&&((a8==13)&&(((a17==1)&&(a7==1))&&(a20==1))))))))){
printf("POINT: 16\n");
a7 = 1;
a17 = 1;
a21 = 0;
a20 = 1;
a8 = 13;
a16 = 5;
printf("%d",26);//return 26;
} else{
printf("POINT: 17\n");

 if(((((!(a17==1)&&(!(a7==1)&&((a21==1)&&((a8==15)&&(input==4)))))&&!(a20==1))&&(a12==8))&&(a16==4))){
printf("POINT: 18\n");
a17 = 1;
a16 = 5;
printf("%d",21);//return 21;
} else{
printf("POINT: 19\n");

 if(((((((a16==6)&&((!(a20==1)&&(!(a17==1)&&!(a7==1)))&&(a8==15)))&&(a21==1))||(((a16==4)&&(((a20==1)&&((a17==1)&&(a7==1)))&&(a8==13)))&&!(a21==1)))&&(input==2))&&(a12==8))){
printf("POINT: 20\n");
a7 = 0;
a20 = 1;
a8 = 14;
a16 = 4;
a21 = 1;
a17 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 21\n");

 if(((a8==13)&&(!(a21==1)&&((((input==3)&&((((a20==1)&&!(a17==1))&&(a16==6))||((!(a20==1)&&(a17==1))&&(a16==4))))&&(a12==8))&&(a7==1))))){
printf("POINT: 22\n");
a16 = 4;
a17 = 1;
a20 = 1;
printf("%d",26);//return 26;
} else{
printf("POINT: 23\n");

 if(((((a21==1)&&((a12==8)&&((input==1)&&(((!(a20==1)&&(a17==1))&&(a16==4))||(((a16==5)&&(!(a17==1)&&(a20==1)))||((a16==6)&&(!(a17==1)&&(a20==1))))))))&&!(a7==1))&&(a8==15))){
printf("POINT: 24\n");
a16 = 6;
a20 = 1;
a17 = 0;
printf("%d",24);//return 24;
} else{
printf("POINT: 25\n");

 if((((a16==5)&&(((a7==1)&&((!(a21==1)&&((a12==8)&&(input==3)))&&(a8==13)))&&(a17==1)))&&(a20==1))){
printf("POINT: 26\n");
a20 = 0;
a8 = 15;
a17 = 0;
a21 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 27\n");

 if(((a17==1)&&(((a8==15)&&(((a12==8)&&((!(a7==1)&&(input==5))&&(a21==1)))&&!(a20==1)))&&(a16==5)))){
printf("POINT: 28\n");
a20 = 1;
a8 = 13;
a7 = 1;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 29\n");

 if((!(a7==1)&&(((((a21==1)&&(((a8==15)&&(input==5))&&!(a17==1)))&&(a12==8))&&(a20==1))&&(a16==4)))){
printf("POINT: 30\n");
a8 = 13;
a17 = 1;
a7 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 31\n");

 if(((!(a21==1)&&(((a12==8)&&((((a16==6)&&((a20==1)&&!(a17==1)))||((!(a20==1)&&(a17==1))&&(a16==4)))&&(input==1)))&&(a8==13)))&&(a7==1))){
printf("POINT: 32\n");
a16 = 6;
a20 = 1;
a17 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 33\n");

 if(((a17==1)&&(!(a7==1)&&(((a21==1)&&(((a12==8)&&((input==5)&&((a16==5)||(a16==6))))&&(a20==1)))&&(a8==15))))){
printf("POINT: 34\n");
a7 = 1;
a16 = 4;
a8 = 13;
printf("%d",-1);//return -1;
} else{
printf("POINT: 35\n");

 if((((a12==8)&&(!(a21==1)&&((a7==1)&&((a8==13)&&((input==6)&&((((a16==6)&&(a17==1))||((a16==4)&&!(a17==1)))||((a16==5)&&!(a17==1))))))))&&(a20==1))){
printf("POINT: 36\n");
a8 = 15;
a17 = 0;
a21 = 1;
a20 = 0;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 37\n");

 if((((a16==5)&&((((a8==15)&&((!(a7==1)&&(input==2))&&(a21==1)))&&(a12==8))&&!(a20==1)))&&!(a17==1))){
printf("POINT: 38\n");
a16 = 4;
a17 = 1;
printf("%d",24);//return 24;
} else{
printf("POINT: 39\n");

 if((!(a20==1)&&((a21==1)&&((a16==4)&&((a8==15)&&(((a12==8)&&((input==2)&&!(a7==1)))&&!(a17==1))))))){
printf("POINT: 40\n");
a17 = 1;
a16 = 5;
printf("%d",21);//return 21;
} else{
printf("POINT: 41\n");

 if((((a21==1)&&(!(a7==1)&&((!(a20==1)&&(!(a17==1)&&((a12==8)&&(input==6))))&&(a16==4))))&&(a8==15))){
printf("POINT: 42\n");
a20 = 1;
a16 = 6;
printf("%d",22);//return 22;
} else{
printf("POINT: 43\n");

 if(((a17==1)&&((((((a12==8)&&((input==4)&&(a8==13)))&&(a20==1))&&!(a21==1))&&(a16==5))&&(a7==1)))){
printf("POINT: 44\n");
a16 = 4;
a17 = 0;
printf("%d",25);//return 25;
} else{
printf("POINT: 45\n");

 if(((((a8==13)&&((a12==8)&&((((((a16==6)&&(a17==1))||(!(a17==1)&&(a16==4)))||(!(a17==1)&&(a16==5)))&&(input==1))&&!(a21==1))))&&(a20==1))&&(a7==1))){
printf("POINT: 46\n");
a8 = 15;
a16 = 6;
a21 = 1;
a20 = 0;
a7 = 0;
a17 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 47\n");

 if(((a8==13)&&(!(a21==1)&&((((((!(a17==1)&&(a20==1))&&(a16==6))||((a16==4)&&((a17==1)&&!(a20==1))))&&(input==5))&&(a7==1))&&(a12==8))))){
printf("POINT: 48\n");
a17 = 1;
a20 = 0;
a16 = 4;
printf("%d",25);//return 25;
} else{
printf("POINT: 49\n");

 if(((!(a21==1)&&((((((a16==6)&&((a20==1)&&!(a17==1)))||(((a17==1)&&!(a20==1))&&(a16==4)))&&(input==4))&&(a7==1))&&(a12==8)))&&(a8==13))){
printf("POINT: 50\n");
a8 = 15;
a21 = 1;
a20 = 0;
a7 = 0;
a16 = 6;
a17 = 0;
printf("%d",26);//return 26;
} else{
printf("POINT: 51\n");

 if((((a21==1)&&(!(a7==1)&&((((((a16==5)&&((a20==1)&&!(a17==1)))||((!(a17==1)&&(a20==1))&&(a16==6)))||((a16==4)&&((a17==1)&&!(a20==1))))&&(input==4))&&(a12==8))))&&(a8==15))){
printf("POINT: 52\n");
a16 = 4;
a20 = 0;
a17 = 0;
printf("%d",24);//return 24;
} else{
printf("POINT: 53\n");

 if(((((((a16==6)&&((!(a20==1)&&(!(a17==1)&&!(a7==1)))&&(a8==15)))&&(a21==1))||(((a16==4)&&((((a7==1)&&(a17==1))&&(a20==1))&&(a8==13)))&&!(a21==1)))&&(input==4))&&(a12==8))){
printf("POINT: 54\n");
a17 = 0;
a16 = 5;
a21 = 1;
a8 = 14;
a7 = 1;
a20 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 55\n");

 if((!(a17==1)&&(((a12==8)&&(!(a20==1)&&(((a8==15)&&((a21==1)&&(input==4)))&&!(a7==1))))&&(a16==5)))){
printf("POINT: 56\n");
a17 = 1;
printf("%d",24);//return 24;
} else{
printf("POINT: 57\n");

 if((((!(a7==1)&&(((input==2)&&((((a16==5)&&((a20==1)&&!(a17==1)))||((a16==6)&&((a20==1)&&!(a17==1))))||((a16==4)&&(!(a20==1)&&(a17==1)))))&&(a8==15)))&&(a12==8))&&(a21==1))){
printf("POINT: 58\n");
a17 = 0;
a16 = 5;
a20 = 1;
printf("%d",25);//return 25;
} else{
printf("POINT: 59\n");

 if((!(a20==1)&&(((((((input==6)&&(a16==5))&&(a21==1))&&!(a17==1))&&(a12==8))&&!(a7==1))&&(a8==15)))){
printf("POINT: 60\n");
a17 = 1;
printf("%d",24);//return 24;
} else{
printf("POINT: 61\n");

 if(((a12==8)&&(((((((a21==1)&&(input==5))&&(a8==15))&&(a17==1))&&!(a7==1))&&!(a20==1))&&(a16==6)))){
printf("POINT: 62\n");
a20 = 1;
a16 = 4;
a7 = 1;
a8 = 13;
printf("%d",-1);//return -1;
} else{
printf("POINT: 63\n");

 if(((((a8==15)&&(!(a7==1)&&((((!(a20==1)&&(a17==1))&&(a16==4))||(((!(a17==1)&&(a20==1))&&(a16==5))||((a16==6)&&((a20==1)&&!(a17==1)))))&&(input==6))))&&(a12==8))&&(a21==1))){
printf("POINT: 64\n");
a20 = 0;
a17 = 1;
a16 = 4;
printf("%d",22);//return 22;
} else{
printf("POINT: 65\n");

 if(((a8==15)&&((a16==4)&&(!(a20==1)&&((((a21==1)&&(!(a17==1)&&(input==5)))&&!(a7==1))&&(a12==8)))))){
printf("POINT: 66\n");
a7 = 1;
a8 = 13;
a17 = 1;
a20 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 67\n");

 if(((a17==1)&&((a12==8)&&((a8==15)&&(((!(a7==1)&&(((a16==5)||(a16==6))&&(input==2)))&&(a21==1))&&(a20==1)))))){
printf("POINT: 68\n");
a17 = 0;
a16 = 6;
printf("%d",22);//return 22;
} else{
printf("POINT: 69\n");

 if((!(a7==1)&&(((a8==15)&&((!(a17==1)&&((a12==8)&&((input==3)&&(a21==1))))&&(a16==4)))&&(a20==1)))){
printf("POINT: 70\n");
a17 = 1;
a7 = 1;
a8 = 13;
printf("%d",-1);//return -1;
} else{
printf("POINT: 71\n");

 if(((a16==5)&&((!(a21==1)&&(((a8==13)&&(((input==2)&&(a20==1))&&(a12==8)))&&(a7==1)))&&(a17==1)))){
printf("POINT: 72\n");
a21 = 1;
a8 = 14;
a16 = 4;
a20 = 0;
a7 = 0;
a17 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 73\n");

 if(((a20==1)&&(((a12==8)&&((a7==1)&&((a8==13)&&(((!(a17==1)&&(a16==5))||(((a17==1)&&(a16==6))||(!(a17==1)&&(a16==4))))&&(input==3)))))&&!(a21==1)))){
printf("POINT: 74\n");
a8 = 14;
a7 = 0;
a17 = 1;
a21 = 1;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 75\n");

 if(((a12==8)&&((a7==1)&&(!(a21==1)&&((a8==13)&&((input==6)&&(((a16==6)&&((a20==1)&&!(a17==1)))||((a16==4)&&((a17==1)&&!(a20==1)))))))))){
printf("POINT: 76\n");
a20 = 0;
a21 = 1;
a17 = 0;
a8 = 14;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 77\n");

 if(((!(a7==1)&&(!(a17==1)&&((((a16==4)&&((a8==15)&&(input==1)))&&(a12==8))&&(a21==1))))&&(a20==1))){
printf("POINT: 78\n");
a7 = 1;
a8 = 13;
a17 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 79\n");

 if(((a17==1)&&(((a21==1)&&(!(a20==1)&&((a12==8)&&((a8==15)&&(!(a7==1)&&(input==1))))))&&(a16==6)))){
printf("POINT: 80\n");
a20 = 1;
a8 = 13;
a7 = 1;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 81\n");

 if(((a20==1)&&((a12==8)&&((((a17==1)&&((((a16==5)||(a16==6))&&(input==4))&&(a8==15)))&&(a21==1))&&!(a7==1))))){
printf("POINT: 82\n");
a16 = 4;
a7 = 1;
a8 = 13;
printf("%d",-1);//return -1;
} else{
printf("POINT: 83\n");

 if(((((a8==13)&&((((!(a21==1)&&(input==6))&&(a20==1))&&(a12==8))&&(a17==1)))&&(a7==1))&&(a16==5))){
printf("POINT: 84\n");
a16 = 4;
a20 = 0;
printf("%d",25);//return 25;
} else{
printf("POINT: 85\n");

 if(((a16==5)&&(((((a12==8)&&(!(a7==1)&&((input==2)&&!(a20==1))))&&(a21==1))&&(a17==1))&&(a8==15)))){
printf("POINT: 86\n");
a17 = 0;
printf("%d",24);//return 24;
} else{
printf("POINT: 87\n");

 if((((a12==8)&&(((!(a17==1)&&((a21==1)&&((input==4)&&!(a7==1))))&&(a8==15))&&(a20==1)))&&(a16==4))){
printf("POINT: 88\n");
a20 = 0;
a17 = 1;
a16 = 6;
printf("%d",21);//return 21;
} else{
printf("POINT: 89\n");

 if(((a7==1)&&((a8==13)&&((a12==8)&&(!(a21==1)&&((input==2)&&((((a20==1)&&!(a17==1))&&(a16==6))||(((a17==1)&&!(a20==1))&&(a16==4))))))))){
printf("POINT: 90\n");
a16 = 4;
a20 = 0;
a17 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 91\n");

 if((((((((!(a20==1)&&(!(a17==1)&&!(a7==1)))&&(a8==15))&&(a16==6))&&(a21==1))||((((a8==13)&&(((a17==1)&&(a7==1))&&(a20==1)))&&(a16==4))&&!(a21==1)))&&(input==6))&&(a12==8))){
printf("POINT: 92\n");
a20 = 1;
a8 = 13;
a16 = 4;
a7 = 0;
a21 = 1;
a17 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 93\n");

 if(((!(a7==1)&&(!(a17==1)&&(((((input==3)&&(a21==1))&&(a16==4))&&(a8==15))&&(a12==8))))&&!(a20==1))){
printf("POINT: 94\n");
a17 = 1;
a7 = 1;
a8 = 13;
a20 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 95\n");

 if((((((a12==8)&&(((((a17==1)&&!(a20==1))&&(a16==4))||((((a20==1)&&!(a17==1))&&(a16==5))||((!(a17==1)&&(a20==1))&&(a16==6))))&&(input==3)))&&(a8==15))&&(a21==1))&&!(a7==1))){
printf("POINT: 96\n");
a16 = 4;
a17 = 1;
a8 = 13;
a20 = 1;
a7 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 97\n");

 if((((!(a7==1)&&(((input==5)&&((((a16==5)&&(!(a17==1)&&(a20==1)))||((a16==6)&&((a20==1)&&!(a17==1))))||((a16==4)&&(!(a20==1)&&(a17==1)))))&&(a12==8)))&&(a21==1))&&(a8==15))){
printf("POINT: 98\n");
a16 = 4;
a17 = 1;
a7 = 1;
a20 = 1;
a8 = 13;
printf("%d",-1);//return -1;
} else{
printf("POINT: 99\n");

 if(((!(a7==1)&&(((a21==1)&&(((a17==1)&&((a12==8)&&(input==2)))&&!(a20==1)))&&(a16==6)))&&(a8==15))){
printf("POINT: 100\n");
a8 = 13;
a20 = 1;
a16 = 4;
a7 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 101\n");

 if(((!(a17==1)&&((a21==1)&&((!(a20==1)&&((a12==8)&&((input==3)&&!(a7==1))))&&(a8==15))))&&(a16==5))){
printf("POINT: 102\n");
a8 = 13;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 103\n");

 if((((a16==5)&&(!(a20==1)&&(((((input==6)&&(a21==1))&&(a17==1))&&!(a7==1))&&(a12==8))))&&(a8==15))){
printf("POINT: 104\n");
printf("%d",24);//return 24;
} else{
printf("POINT: 105\n");

 if((!(a7==1)&&((a17==1)&&(((a16==6)&&(!(a20==1)&&(((input==6)&&(a12==8))&&(a21==1))))&&(a8==15))))){
printf("POINT: 106\n");
a7 = 1;
a8 = 13;
a20 = 1;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 107\n");

 if(((((a21==1)&&((a8==15)&&((a12==8)&&(!(a7==1)&&(!(a17==1)&&(input==2))))))&&(a16==4))&&(a20==1))){
printf("POINT: 108\n");
a17 = 1;
a8 = 13;
a7 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 109\n");

 if(((a8==15)&&(((a16==4)&&((a12==8)&&((!(a20==1)&&(!(a7==1)&&(input==1)))&&!(a17==1))))&&(a21==1)))){
printf("POINT: 110\n");
a16 = 6;
a20 = 1;
printf("%d",22);//return 22;
} else{
printf("POINT: 111\n");

 if(((a21==1)&&(((a12==8)&&((((a17==1)&&((input==3)&&((a16==5)||(a16==6))))&&!(a7==1))&&(a20==1)))&&(a8==15)))){
printf("POINT: 112\n");
a17 = 0;
a16 = 4;
printf("%d",21);//return 21;
} else{
printf("POINT: 113\n");

 if((!(a21==1)&&((a20==1)&&(((a12==8)&&((a8==13)&&((((a16==5)&&!(a17==1))||(((a17==1)&&(a16==6))||(!(a17==1)&&(a16==4))))&&(input==2))))&&(a7==1))))){
printf("POINT: 114\n");
a21 = 1;
a8 = 15;
a17 = 1;
a7 = 0;
a16 = 6;
a20 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 115\n");

 if(((a7==1)&&((a12==8)&&((((a20==1)&&(((!(a17==1)&&(a16==5))||(((a17==1)&&(a16==6))||((a16==4)&&!(a17==1))))&&(input==4)))&&(a8==13))&&!(a21==1))))){
printf("POINT: 116\n");
a8 = 15;
a16 = 6;
a21 = 1;
a7 = 0;
a20 = 0;
a17 = 0;
printf("%d",26);//return 26;
} else{
printf("POINT: 117\n");

 if(((a21==1)&&((((!(a7==1)&&((a8==15)&&(!(a20==1)&&(input==4))))&&(a17==1))&&(a16==5))&&(a12==8)))){
printf("POINT: 118\n");
printf("%d",24);//return 24;
} else{
printf("POINT: 119\n");

 if((((!(a7==1)&&((!(a20==1)&&((a21==1)&&((input==3)&&(a17==1))))&&(a8==15)))&&(a12==8))&&(a16==5))){
printf("POINT: 120\n");
a20 = 1;
a8 = 13;
a7 = 1;
a16 = 4;
printf("%d",-1);//return -1;
} else{
printf("POINT: 121\n");

 if(((((!(a17==1)&&(!(a20==1)&&((a8==15)&&((input==1)&&(a16==5)))))&&(a12==8))&&(a21==1))&&!(a7==1))){
printf("POINT: 122\n");
printf("%d",-1);//return -1;
} else{
printf("POINT: 123\n");

 if(((((a21==1)&&((a8==15)&&(((a16==5)&&((a12==8)&&(input==1)))&&(a17==1))))&&!(a7==1))&&!(a20==1))){
printf("POINT: 124\n");
printf("%d",21);//return 21;
} else{
printf("POINT: 125\n");

 if(((!(a21==1)&&((a20==1)&&((((a8==13)&&((a7==1)&&(input==5)))&&(a17==1))&&(a12==8))))&&(a16==5))){
printf("POINT: 126\n");
a21 = 1;
a7 = 0;
a17 = 0;
a8 = 14;
a20 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 127\n");

 if((((!(a7==1)&&((a21==1)&&((((input==6)&&(a20==1))&&(a8==15))&&!(a17==1))))&&(a12==8))&&(a16==4))){
printf("POINT: 128\n");
a7 = 1;
a8 = 13;
a17 = 1;
printf("%d",-1);//return -1;
} else{
printf("POINT: 129\n");

 if(((((a20==1)&&(((!(a21==1)&&((a7==1)&&(input==1)))&&(a8==13))&&(a17==1)))&&(a12==8))&&(a16==5))){
printf("POINT: 130\n");
a21 = 1;
a16 = 6;
a7 = 0;
printf("%d",-1);//return -1;
} else{
printf("POINT: 131\n");

 if(((a12==8)&&((input==5)&&((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==15))&&(a16==6))&&(a21==1))||(!(a21==1)&&((a16==4)&&(((a20==1)&&((a7==1)&&(a17==1)))&&(a8==13)))))))){
printf("POINT: 132\n");
a20 = 0;
a21 = 1;
a8 = 14;
a17 = 0;
a16 = 5;
a7 = 1;
printf("%d",-1);//return -1;
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
}
printf("POINT: 133\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 134\n");
printf("%d",-1);//return -1;
}
printf("POINT: 135\n");

if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 136\n");
printf("%d",-1);//return -1;
}
printf("POINT: 137\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 138\n");
printf("%d",-1);//return -1;
}
printf("POINT: 139\n");

if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 140\n");
printf("%d",-1);//return -1;
}
printf("POINT: 141\n");

if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 142\n");
printf("%d",-1);//return -1;
}
printf("POINT: 143\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 144\n");
printf("%d",-1);//return -1;
}
printf("POINT: 145\n");

if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 146\n");
printf("%d",-1);//return -1;
}
printf("POINT: 147\n");

if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 148\n");
printf("%d",-1);//return -1;
}
printf("POINT: 149\n");

if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 150\n");
printf("%d",-1);//return -1;
}
printf("POINT: 151\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 152\n");
printf("%d",-1);//return -1;
}
printf("POINT: 153\n");

if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 154\n");
printf("%d",-1);//return -1;
}
printf("POINT: 155\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 156\n");
printf("%d",-1);//return -1;
}
printf("POINT: 157\n");

if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 158\n");
printf("%d",-1);//return -1;
}
printf("POINT: 159\n");

if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 160\n");
printf("%d",-1);//return -1;
}
printf("POINT: 161\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 162\n");
printf("%d",-1);//return -1;
}
printf("POINT: 163\n");

if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 164\n");
printf("%d",-1);//return -1;
}
printf("POINT: 165\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 166\n");
printf("%d",-1);//return -1;
}
printf("POINT: 167\n");

if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 168\n");
printf("%d",-1);//return -1;
}
printf("POINT: 169\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 170\n");
printf("%d",-1);//return -1;
}
printf("POINT: 171\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 172\n");
printf("%d",-1);//return -1;
}
printf("POINT: 173\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 174\n");
printf("%d",-1);//return -1;
}
printf("POINT: 175\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 176\n");
printf("%d",-1);//return -1;
}
printf("POINT: 177\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 178\n");
printf("%d",-1);//return -1;
}
printf("POINT: 179\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 180\n");
printf("%d",-1);//return -1;
}
printf("POINT: 181\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 182\n");
printf("%d",-1);//return -1;
}
printf("POINT: 183\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 184\n");
printf("%d",-1);//return -1;
}
printf("POINT: 185\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 186\n");
printf("%d",-1);//return -1;
}
printf("POINT: 187\n");

if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 188\n");
printf("%d",-1);//return -1;
}
printf("POINT: 189\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 190\n");
printf("%d",-1);//return -1;
}
printf("POINT: 191\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 192\n");
printf("%d",-1);//return -1;
}
printf("POINT: 193\n");

if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 194\n");
printf("%d",-1);//return -1;
}
printf("POINT: 195\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 196\n");
printf("%d",-1);//return -1;
}
printf("POINT: 197\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 198\n");
printf("%d",-1);//return -1;//special
}
printf("POINT: 199\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 200\n");
printf("%d",-1);//return -1;
}
printf("POINT: 201\n");

if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 202\n");
printf("%d",-1);//return -1;
}
printf("POINT: 203\n");

if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 204\n");
printf("%d",-1);//return -1;
}
printf("POINT: 205\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 206\n");
printf("%d",-1);//return -1;
}
printf("POINT: 207\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 208\n");
printf("%d",-1);//return -1;
}
printf("POINT: 209\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 210\n");
printf("%d",-1);//return -1;
}
printf("POINT: 211\n");

if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 212\n");
printf("%d",-1);//return -1;
}
printf("POINT: 213\n");

if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 214\n");
printf("%d",-1);//return -1;
}
printf("POINT: 215\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 216\n");
printf("%d",-1);//return -1;
}
printf("POINT: 217\n");

if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 218\n");
printf("%d",-1);//return -1;
}
printf("POINT: 219\n");

if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 220\n");
printf("%d",-1);//return -1;
}
printf("POINT: 221\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 222\n");
printf("%d",-1);//return -1;
}
printf("POINT: 223\n");

if(((((((!(a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 224\n");
printf("%d",-1);//return -1;
}
printf("POINT: 225\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 226\n");
printf("%d",-1);//return -1;
}
printf("POINT: 227\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==15))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 228\n");
printf("%d",-1);//return -1;
}
printf("POINT: 229\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 230\n");
printf("%d",-1);//return -1;
}
printf("POINT: 231\n");

if((((((((a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 232\n");
printf("%d",-1);//return -1;
}
printf("POINT: 233\n");

if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 234\n");
printf("%d",-1);//return -1;
}
printf("POINT: 235\n");

if((((((((a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 236\n");
printf("%d",-1);//return -1;
}
printf("POINT: 237\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 238\n");
printf("%d",-1);//return -1;
}
printf("POINT: 239\n");

if((((((((a17==1)&&(a7==1))&&!(a20==1))&&(a8==15))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 240\n");
printf("%d",-1);//return -1;
}
printf("POINT: 241\n");

if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 242\n");
printf("%d",-1);//return -1;
}
printf("POINT: 243\n");

if(((((((!(a17==1)&&(a7==1))&&!(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 244\n");
printf("%d",-1);//return -1;
}
printf("POINT: 245\n");

if((((((((a17==1)&&!(a7==1))&&!(a20==1))&&(a8==13))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 246\n");
printf("%d",-1);//return -1;
}
printf("POINT: 247\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 248\n");
printf("%d",-1);//return -1;
}
printf("POINT: 249\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==6))&&(a21==1))){
printf("POINT: 250\n");
printf("%d",-1);//return -1;
}
printf("POINT: 251\n");

if(((((((!(a17==1)&&(a7==1))&&(a20==1))&&(a8==14))&&(a12==8))&&(a16==4))&&(a21==1))){
printf("POINT: 252\n");
printf("%d",-1);//return -1;
}
printf("POINT: 253\n");

if(((((((!(a17==1)&&!(a7==1))&&(a20==1))&&(a8==13))&&(a12==8))&&(a16==5))&&(a21==1))){
printf("POINT: 254\n");
printf("%d",-1);//return -1;
}
printf("%d",-2);//return -2;
}



int main()
{
kappa = 0;
// default output
int output = -1;

// main i/o-loop

for (int FLAG=0;FLAG<BOUND;FLAG++) {
printf("POINT: 256\n");
int symb = nondet_int(); __CPROVER_input("symb",symb);

// operate eca engine
output = calculate_output(symb);
        printf("%d",symb);

}
return 0;
}
