#include <stdio.h>
int primecheck(int);
int main()
{
   int num,i=2,arr[10],c=0,k=0,a,b,f;

   scanf("%d",&num);


    while(i<num/2)
    {
        if(num%i==0 && (i==1 || i==2 || i==3 || i==5 || i==7 || i==11 || i==13))
        {
                arr[c] = i;
                c++;
        }
        i++;
    }
    a=num/arr[0];
    b=num-a;
    c=b/arr[1];
        
        printf("%d",num-(a+c));




    return 0;
}
