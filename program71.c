#include<stdio.h>
#include<stdlib.h>

void Display(int ino)
{
    int icnt = 0;
    for(icnt = 1;icnt <= ino;icnt++)
    {
    printf("%d\n"+icnt );
    }
}   

int main()
{
    int ivalue = 0;
    
    printf("enter the frequecy:\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return EXIT_SUCCESS;
}
