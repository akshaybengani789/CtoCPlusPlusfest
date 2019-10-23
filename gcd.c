#include <stdio.h>

int main(){
    // GCD Highest common divisor in two numbers
    int num1,num2,gcd,i=2;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    
    while(i<num1 && i<num2)
    {
        if(num1%i==0 && num2%i==0)
        {
            gcd = i;
        }
        i++;
    }
    printf("Highest Common Divisor is %d",gcd);

    printf("\n");
    return 0 ;
}
