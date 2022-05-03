#include<stdio.h>

int main()

{

    char ch='a';

    int i;

    printf("\n value of ch is %c",ch);

    printf("\n The ASCII value of a is %d",ch);

    ch=ch-32;//putting ASCII value of A

    printf("\n Now the value of ch is %c ",ch);

    printf("\n ASCII value of A is %d",ch);

    ch='0';

   // printf("\n ASCII value of 0 is %d",ch);

   printf("\n\nASCII values of Numbers from : 0:10");



    for(i=0;i<=9;i++)

    {

        printf("\n ASCII value of %c = %d",ch,ch);

    ch++;

    }




}//end of main




