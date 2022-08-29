//Write a program to print the first N odd natural numbers in reverse order//
#include<stdio.h>
int main()
{
    int i;
    int k;
    printf("how many odd  natural number you want in reverse order  =");
    scanf(" %d",&k);
     for(i=k;i>0;i--)
    {

        printf("\n %d",2*i-1);



    }

    return 0;
}







