/******************
Name:yaniv landow
ID:21309035
Assignment:mesima 2
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
    ///////What Bit
    printf("What Bit\n");
    int num,pos,x = 0 ;
    printf("plesae enter number:\n");
    scanf("%d",&num);
    printf("plesae enter position:\n");
    scanf("%d",&pos);
    x=(num>>pos)&1;
    printf("the bit in the position %d of number %d is :%d\n",pos,num,x);
    //////Set Bit
    printf("Set bit\n");
    int num2,pos2,y1,y2= 0;
    printf("plesae enter number:\n");
    scanf("%d",&num2);
    printf("plesae enter position:\n");
    scanf("%d",&pos2);
    y1=num2|(1<<pos2);
    y2=num2&(~(1<<pos2));
    printf("number with bit %d set to 1: %d\n",pos2,y1);
    printf("number with bit %d set to 0: %d\n",pos2,y2);
    ///////////Toggle Bit
    printf("Toggle bit\n");
    int num3,pos3,toggle;
    printf("plesae enter number:\n");
    scanf("%d",&num3);
    printf("plesae enter position:\n");
    scanf("%d",&pos3);
    toggle=num3^(1<<pos3);
    printf("number with bit %d toggle: %d\n",pos3,toggle);
    //////even-odd
    printf("even-odd\n");;
    int num4,check;
    printf("\nplesae enter number:\n");
    scanf("%d",&num4);
    check=(num4&1)^1;
    printf("%d",check);

    // 3, 5, 7, 11
    printf("\n3,5,7,11\n");
    int octal1,octal2,sum;
    printf("plesae enter the first number (octal):\n");
    scanf("%o",&octal1);
    printf("plesae enter the second number (octal):\n");
    scanf("%o",&octal2);
    sum=octal1+octal2;
    printf("the sum in hexadecimal: %X\n",sum);
    int shift3= sum;
    int shift5= sum;
    int shift7= sum;
    int shift11= sum;

    shift3=(sum>>3)&1;
    shift5=(sum>>5)&1;
    shift7=(sum>>7)&1;
    shift11=(sum>>11)&1;
    ;
    printf("the 3,5,7,11 bits are:%d%d%d%d\n",shift3,shift5,shift7,shift11);
    printf("Bye!\n");

    return 0;
}
