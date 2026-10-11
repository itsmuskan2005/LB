#include<stdio.h>
#include<stdlib.h>

float Average(int ino1, int ino2,int ino3)
{
   float fans = 0.0f;
     //typecasting
   fans = ((float)ino1+(float)ino2+(float)ino3)/3;

   return fans;
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0,ivalue3 = 0;
    float fresult = 0.0f;

    printf("enter first number : \n");
    scanf("%f",&ivalue1);

    printf("enter second number : \n");
    scanf("%f",&ivalue2);
  
    
    printf("enter third number : \n");
    scanf("%f",&ivalue3);
  
    fresult = Average(ivalue1,ivalue2,ivalue3);

    printf("Average is :%f\n",fresult);
    
    return EXIT_SUCCESS;
}