#include<stdio.h>
#include<stdlib.h>

void Maximum(int ino1, int ino2)
{
    if(ino1 > ino2)
    {
        printf("maximum is : %d\n",ino1);
    }
    else
    {
        printf("maximum is : %d\n",ino2);
    }

}
int main()
{
    int ivalue1 = 0,ivalue2 = 0,iresult = 0;

    printf("enter first number : \n");
    scanf("%d",&ivalue1);

    printf("enter second number : \n");
    scanf("%d",&ivalue2);
  
    Maximum(ivalue1,ivalue2);
    
    return EXIT_SUCCESS;
}