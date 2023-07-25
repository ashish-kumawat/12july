#include <stdio.h>
int main() 
{ 
	int number = 100; 
 
    while( number >=1) 
    { 
        if( number % 2 == 0 ) 
        { 
            printf("%d ", number); 
        } 
		number--; 
    } 
 
    return 0;
}
