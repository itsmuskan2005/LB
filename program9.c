
#include<stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////////////////////////////////
//
// functionname :  addition
//  input :  integer,integer    
//  output :    integer
//   description :  performs addition
//   date:  04/10/2026
//   author:    muskan iqbal shaikh
//
//////////////////////////////////////////////////////////////////////////////////////


int addition( 
               int ino1,       //first input
               int ino2        //second input
            )
{
    int ians = 0;
    ians = ino1 + ino2;        //business logic
    return ians;
}
//////////////////////////////////////////////////////////////////////////////////////
//
//  entry point of the application
//
//////////////////////////////////////////////////////////////////////////////////////
int main()
{
    int ivalue1 = 0, ivalue2 = 0 , iresult = 0;

    printf("enter first number :\n");
    scanf("%d",&ivalue1);

    printf("enter second number :\n");
    scanf("%d",&ivalue2);
    
    iresult = addition(ivalue1 , ivalue2);      

    printf("addition is : %d\n",iresult);
    return EXIT_SUCCESS;
}

//////////////////////////////////////////////////////////////////////////////////////
//  step5 : test the program
// 
//  tested  test case
//-----------------------------------------------------------------------
//    input1    input2  output
//----------------------------------------------------------------------
//      10          11      21
//      21          30      51
//      0           11      11
//------------------------------------------------------------------------
//////////////////////////////////////////////////////////////////////////////////////
