//input : 10
#include<stdio.h>
#include<stdlib.h>

int Summation(int ino)
{
    int icnt = 0;
    int isum = 0;

    isum = 1;

    for(icnt = 1;icnt <= ino; icnt++)
    {
       isum = isum * icnt;
    }
    return isum;
}   

int main()
{
    int ivalue = 0;
    int iret = 0;
    
    printf("enter the frequecy:\n");
    scanf("%d",&ivalue);

    iret = Summation(ivalue);
    printf("summation is:",iret);

    return EXIT_SUCCESS;
}
