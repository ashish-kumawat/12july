// 1-100 odd number for loop
#include <stdio.h>
int main() 
{ 
	int num; 
 
    for( num=1;num <= 100;num++) 
    { 
        if( num % 2 !=0 ) 
        { 
            printf("%d ", num); 
        } 
	
    } 
 
    return 0;
}
