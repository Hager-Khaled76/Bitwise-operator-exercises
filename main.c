#include <stdio.h>
#include <stdlib.h>

int main()
{
    /****************Bitwise operator exercises**********************************/

    /*************1.Write a C program check whether the Least Significant Bit (LSB) of the given number is set (1) or not (0).********************/
    /*
    int num;
    printf("Input number:");
    scanf("%d",&num); //3 =>0000 0011
    if(num&1)       //0000 0011 & 0000 0001 =>0000 0001==1
        printf("Least Significant Bit of %d is set (1).",num);
    else
        printf("Least Significant Bit of %d is set (0).",num);
        */

    /*************2.Write a C program check whether Most Significant Bit (MSB) of given number is set (1) or not (0).*********************/
   /*
    int num , res;
    printf("Input number:");
            //Total bits required =8 bits
    scanf("%d",&num);
    res = (1<<7); // 1000 0000
    if(num&res)
        printf("Least Significant Bit of %d is set (1).",num);
    else
        printf("Least Significant Bit of %d is set (0).",num);
    */

    /****************3.C program to get nth bit of a number*****************/
   /*
    int num , nth , get_num;
    printf("Input number:");
    scanf("%d",&num);
    printf("Input nth bit number:");
    scanf("%d",&nth);
    get_num = ((num>>nth)&1);
    printf("%d bit of %d is set (%d)",nth,num,get_num);
    */

    /*****************4.C program to set nth bit of a number*******************/
   /*
    int num , nth , set_num;
    printf("Input number:");
    scanf("%d",&num);
    printf("Input nth bit number:");
    scanf("%d",&nth);
    set_num = num|(1<<nth);
    printf("Number after setting nth bit: %d in decimal",set_num);
    */

    /**************5.C program to clear nth bit of a number******************/
    /*
    int num , nth , clear_num;
    printf("Input number:");
    scanf("%d",&num);
    printf("Input nth bit number:");
    scanf("%d",&nth);
    clear_num = num&~(1<<nth);
    printf("Number after clearing nth bit: %d in decimal",clear_num);
    */

    /**************6.C program to toggle or invert nth bit of a number***********/
    /*
    int num , nth , toggle_num;
    printf("Input number:");
    scanf("%d",&num);
    printf("Input nth bit number:");
    scanf("%d",&nth);
    toggle_num = num^(1<<nth);
    printf("Number after toggling nth bit: %d in decimal",toggle_num);
    */

    /*************7.C program to get highest order set bit of a number*************/

    /*
    int num,numC, pos = -1, bitPos = 0;

    printf("Input any number: ");
    scanf("%d", &num);
    numC=num;

    while (numC != 0)
        {
        if (numC & 1)
            pos = bitPos;

        bitPos++;
        numC >>= 1; // ÊÍÑíß ÇáÑÞã ááíãíä
    }

    if (pos != -1) {
        printf("Highest order set bit in %d is  %d\n",num, pos);
    } else {
        printf("no set bit\n");
    }
    */

    /************8.C program to get lowest order or first set bit of a number**********/
    /*
    int num, position = 0;
    printf("Input any number:: ");
    scanf("%d", &num);

    while ((num & 1) == 0) {
        num = num >> 1;       // shift right
        position++;           // increase position
    }

    printf("First set bit: %d\n", position);

    */

    /*****************9.C program to count trailing zeros in a binary number****************/
    /*
    int num , count =0;
    printf("Input any number: ");
    scanf("%d", &num);
    for(int i=0;i<32;i++)
    {
        if((num>>i)&1)
            break;

        count++;
    }
    printf("Trailing zeros: %d",count);
     */
    /*****************10.C program to count leading zeros in a binary number**************/
    /*
    int num , count =0;
    printf("Input any number: ");
    scanf("%d", &num);
     // Assuming 32-bit integers
    for(int i=0;i<32;i++)
    {
        if((num<<i)&(1<<(32-1)))  // (num<<i) &((10000000 00000000 00000000 00000000))
            break;

        count++;
    }
    printf("Trailing zeros: %d",count);

     */
    /*********************11.C program to flip all bits of a binary number********************/
    /*
     int num ,numF;
     printf("input any number ");
     scanf("%d",&num);
     numF =~num;
     printf("Number after bits are flipped: %d (in decimal)",numF);

     */

     /**********************12. C program to count zeros and ones in a binary number******************/
     /*
     int num ,count_one=0,count_zero=0;
     printf("input any number ");
     scanf("%d",&num);
      // Assuming 32-bit integers
     for (int i=0;i<32;i++)
     {
         if(((num>>i)&1)==0)
            count_zero++;
         else
            count_one++;
     }
     printf("Output number of ones:%d\n",count_one);
     printf("Output number of zeros:%d",count_zero);

    */
    /***********************13.C program to rotate bits of a number**************************/

    unsigned int num;
    unsigned int  left_rotated, right_rotated;
    unsigned int bits;

    printf("Enter a number: ");
    scanf("%u", &num);

    printf("Enter number of bits to rotate: ");
    scanf("%d", &bits);

    // Assuming 32-bit integers
    // Left rotate
    left_rotated = (num << bits) | (num >> (32 - bits));

    // Right rotate
    right_rotated = (num >> bits) | (num << (32 - bits));

    printf("Left Rotated number: %u\n", left_rotated);
    printf("Right Rotated number: %u\n", right_rotated);

   // printf("Left Rotated %d: %d\n", rotateLeft(num,bits));
    // printf("Right Rotated %d: %d\n", rotateRight(num,bits));


    /*******************14.C program to convert decimal to binary number system using bitwise operator******************/
   /*
    int num , bits;
    printf("Input any number: ");
    scanf("%d",&num);
    printf("Binary number:");
    for(int i=31;i>=0;i--)
    {
        bits = ((num>>i)&1);
        printf("%d",bits);
    }
     */
    /*************15.C program to swap two numbers using bitwise operator*************/
   /*
    int num1,num2;
    printf("Input first number: ");
    scanf("%d",&num1);
    printf("Input secound number: ");
    scanf("%d",&num2);
    num1 = num1^num2;
    num2 = num2^num1;
    num1=num1^num2;
    printf("First number after swapping:%d\n",num1);
    printf("Second number after swapping:%d",num2);
    */

    /**********16.C program to check even or odd using bitwise operator***************/
   /*
    int num;
    printf("input number:");
    scanf("%d",&num);
    if(((num>>1)&1)==0)
        printf("%d is even",num);
    else
        printf("%d is odd",num);
    */

    return 0;
}
