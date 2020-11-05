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

void replStr(char str[], char aChar, char bChar) {
    int i;
    int length;
    length=strlen(str);

    for ( i = 0; i < length ; i++)
    {
        if (str[i]==aChar) {
            str[i]=bChar;
        }
    }
    printf("New string (between arrows): -->%s<--\n",str);

    return ;
}

void replMultiChar(char str[],char searchChars[],char rChar ) {
     int i;
     int j;
     int length;
     length=strlen(str);

     for ( i = 0; i < length; i++)
     {
        for ( j = 0; searchChars[j] != '\0' ; j++)
        {
            
            if (str[i]==searchChars[j]) {
                str[i]=rChar;
            }
        }
        
     }
          
     
     printf("New string (between arrows): -->%s<--\n",str);

    return;
}


int findLocations(char str[], int locations[],char searchChar) {
    int i;
    int length;
    length=strlen(str);
    int count=0;
    int num;
    int j=0;
    
    for ( i = 0; i<length ; i++)
    {

        if (str[i]==searchChar) {
                count++;
                locations[j]=i;
                j++;
            }
            
        }
       
    printf("There are %d occurrences of %c.\n",count,searchChar);
    
    for ( i = 0; i < count ; i++)
    {
        num=locations[i];
        printf("%c found at location %d.\n",searchChar,num);
    }
    

return count;

}