#include <stdio.h>
int main() {

    int n, rev = 0, remainder, a[100],sum=0;

    printf("Enter an integer: ");

    scanf("%d", &n);

      
        for (int i = 0; i = n; i++)
        {
            remainder = n % 10;

            //printf("Reversed number = %d\n", remainder);
            rev = rev * 10 + remainder;

            a[i]=remainder;

            //printf(" number = %d\n", a[i]);
            sum=sum+a[i];
        
            n /= 10;
        }
        
     
    printf("Sum of number = %d\n", sum);
    
    
   
    return 0;
}

