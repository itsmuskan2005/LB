#include "Header.h"

int main()
{
    int ivalue1 = 0, ivalue2 = 0 , iresult = 0;

    printf("enter first number :\n");
    if(scanf("%d",&ivalue1)!=1)
    {
        fprintf(stderr,"unble to proceed as input is invalide\n");

        return EXIT_FAILURE;

    }

    printf("enter second number :\n");
    if(scanf("%d",&ivalue2)!=1)
    {
        fprintf(stderr,"unble to proceed as input is invalide\n");

        return EXIT_SUCCESS;

    }
    
    iresult = Addition(ivalue1 , ivalue2);      

    printf("Addition is : %d\n",iresult);
    return EXIT_SUCCESS;
}

