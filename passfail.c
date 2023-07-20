#include<stdio.h>

int main(){

                                         

int sum,h,e,m,s,c,av;
printf("enter your mark");
scanf("%d %d %d %d %d",&h,&e,&m,&s,&c);
sum=h+e+m+s+c;


if(h>=40 && e>=40 && m>=40 && s>=40 && c>=40){

sum=h+e+m+s+c;
av=(sum/5);

     printf(" pass");
     
}

else{
	  printf("fail");
	  
}
}
