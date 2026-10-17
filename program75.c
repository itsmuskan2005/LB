#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;
    for(icnt = ino;icnt >= 1;icnt--)
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

    Display(ivalue);

    return EXIT_SUCCESS;
}
