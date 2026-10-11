#include<stdio.h>
#include<stdlib.h>

int Maximum(int ino1, int ino2,int ino3)
{
  if((ino1>ino2) || (ino1>ino3))
  {
      return ino1;
  }
  else if((ino2>ino1) || (ino2>ino3))
  {
       return ino2;
  }
  else
  {
    return ino3;
  }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0,ivalue3 = 0;
    int iresult = 0;

    printf("enter first number : \n");
    scanf("%d",&ivalue1);

    printf("enter second number : \n");
    scanf("%d",&ivalue2);
  
    
    printf("enter third number : \n");
    scanf("%d",&ivalue3);
  
    iresult = Maximum(ivalue1,ivalue2,ivalue3);

    printf("Maximum is :%d\n",iresult);
    
    return EXIT_SUCCESS;
}