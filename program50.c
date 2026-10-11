#include<stdio.h>
#include<stdlib.h>

int Minimum(int ino1, int ino2,int ino3,int ino4)
{
  if((ino1<ino2) && (ino1<ino3) && (ino1<ino4))
  {
      return ino1;
  }
  else if((ino2<ino1) && (ino2<ino3) && (ino2<ino4))
  {
       return ino2;
  }
  else if((ino3<ino1) && (ino3<ino2) && (ino3<ino4))
  {
    return ino3;
  }
  else
  {
    return ino4;
  }
}
int main()
{
    int ivalue1 = 0,ivalue2 = 0,ivalue3 = 0,ivalue4 = 0;
    int iresult = 0;

    printf("enter first number : \n");
    scanf("%d",&ivalue1);

    printf("enter second number : \n");
    scanf("%d",&ivalue2);
  
    printf("enter third number : \n");
    scanf("%d",&ivalue3);

    printf("enter four number : \n");
    scanf("%d",&ivalue4);
  
    iresult = Minimum(ivalue1,ivalue2,ivalue3,ivalue4);

    printf("Minimum is :%d\n",iresult);
    
    return EXIT_SUCCESS;
}