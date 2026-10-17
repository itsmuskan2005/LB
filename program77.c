//input : 10
#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;
    for(icnt = 1;icnt <= ino;icnt = icnt+2)
    {
       printf("%d\t ",icnt );
    }
    printf("\n");
}   

int main()
{
    int ivalue = 0;
    
    printf("enter the frequecy:\n");
    scanf("%d",&ivalue);

    Display(ivalue+1);

    return EXIT_SUCCESS;
}
