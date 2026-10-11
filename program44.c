#include<stdio.h>
#include<stdlib.h>

float Average(int ino1, int ino2)
{
   float fans = 0.0f;

   fans = (ino1+ino2)/2;

   return fans;
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0,
    fresult = 0.0f;

    printf("enter first number : \n");
    scanf("%f",&ivalue1);

    printf("enter second number : \n");
    scanf("%f",&ivalue2);
  
    fresult = Average(ivalue1,ivalue2);

    printf("Average is :%f\n",fresult);
    
    return EXIT_SUCCESS;
}