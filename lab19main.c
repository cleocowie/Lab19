/** lab19functs.c
* ===========================================================
* Name: Cleo Cowie, 28SEPT2020
* Section: T1/2
* Project: LAB19
* Purpose: 
* ===========================================================
*/

#include <stdio.h>
#include "lab19functs.h"
#include <stdlib.h>
#include <ctype.h>
#include <math.h>
#include <string.h>

int main(void) {
char str[MAX_STR_LEN];
/*char aChar;
char bChar;
char searchChars[MAX_STR_LEN];
char rChar;*/
char searchChar;
int locations[MAX_STR_LEN];

/*printf("Function - 1\n");
    printf("Enter a string (<= 80 chars):\n");

    fgets(str,81,stdin);

    printf("Enter a search character followed by replace character:\n");

    scanf(" %c",&aChar);

    scanf(" %c",&bChar);

    replStr(str,aChar,bChar);*/

/*printf("Function - 2\n");
    printf("Enter a string (<= 80 chars):\n");

    fgets(str,81,stdin);

    printf("Enter a search string (<= 80 chars):\n");

    fgets(searchChars,81,stdin);

    printf("Enter a replace character:\n");

    scanf(" %c",&rChar);

    replMultiChar(str,searchChars,rChar);*/

printf("Function - 3\n");
printf("Enter a string (<= 80 chars) :\n");
fgets(str,81,stdin);
printf("Enter a character whose locations you wish to find:\n");
scanf(" %c",&searchChar);
findLocations(str,locations,searchChar);



system("pause");
return 0;
}