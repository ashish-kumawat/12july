#include <stdio.h>

int main()
 {
    int i, j,no;
    printf("enter the number");
    scanf("%d",&no);

    for (i=1;i<=no; i++) {

        for (j=1; j<=no; j++) {
            printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
    
}
