#include<stdio.h>
int main(){
	int a,b,c,d,e,f,g,h,i,j;
	printf("enter ten number");
	scanf("%d %d %d %d %d %d %d %d %d %d ",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	if(a>b&& a>c && a>d && a>e && a>f && a>g && a>h && a>i && a>j){
		printf("1st num is max");
	}
	else if(b>a&& b>c && b>d && b>e && b>f && b>g && b>h && b>i && b>j){
		printf("2nd num is max");
	}
	
		else if(c>a &&c>b&& c>d && c>e && c>f && c>g && c>h && c>i && c>j){
		printf("3rd num is max");
	}



		else if(d>a && d>b&& d>c && d>e && d>f && d>g && d>h && d>i && d>j){
		printf("4rt num is max");
	}

		else if(e>a && e>b && e>c &&e>d && e>f && e>g && e>h && e>i && e>j){
		printf("5th num is max");
	}

		else if(f>a && f>b && f>d && f>e && f>c && f>g && f>h && f>i && f>j){
		printf("6th num is max");
	}

		else if(g>a && g>b && g>d && g>e && g>f && g>c && g>h && g>i && g>j){
		printf("7th num is max");
	}
		else if(h>a && h>b && h>d && h>e && h>f && h>c && h>g && h>i && h>j){
		printf("8th num is max");
	}
	else if(i>a && i>b && i>d && i>e && i>f && i>c && i>g && i>h && i>j){
		printf("9th num is max");
	}

else{
	printf("10th num is max");
}








	
}
