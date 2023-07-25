#include <stdio.h>
int main() 
{
    int i,j,k;
    for(i=1; i<=3; i++) 
	{
        for (j=1; j<=4-i; j++) 
		{
            printf(" ");
        }
        for (k=1; k<=i; k++) 
     	{
            printf("* ");
        }

        printf("\n");
    }   for(i=1; i<4; i++) 
	{
        for (j=0; j<i; j++) 
		{
            printf(" ");
        }
        for (k=i;k<4; k++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
