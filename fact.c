#include<stdio.h>

void  facto (){

    int x,fact=1,n;

    printf("\nEnter a number to find factorial: ");

    scanf("%d",&n); 

    for(x=1;x<=n;x++)

        fact=fact*x; 

    printf("\nFactorial of %d is: %d",n,fact);

    //return 0;

}
