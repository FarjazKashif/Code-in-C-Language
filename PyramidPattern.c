#include<stdio.h>

int main() {
    int i, j, k, n=0, sum=0;
    printf("Enter number of Rows: ");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++) { // Rows
        // Columns
        for(j=1; j<= n-i; j++) {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++) {
                printf("*");
        }
        printf("\n");
    }
    
    for(i=n-1; i>=1; i--) { // Rows
        // Columns
        for(j=1; j<= n-i; j++) {
            printf(" ");
        }
        for(k=1; k<=2*i-1; k++) {
                printf("*");
        }
        printf("\n");
    }

    return 0;
}