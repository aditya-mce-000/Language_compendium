#include <stdio.h>
#include <string.h>

int main(void)
{
    // char *str1 = "Hello";

    char str1[12] = "Hello";
    printf("The str %s is %d.\n", str1, strlen(str1));//This function is used to count the number of characters in the string excluding the null (‘\0’) characters.

    char str2[12];
    strcpy(str2, str1); // strcpy (target,source); 
    printf("%s\n", str2);// This function is used to copy the content of second string into first string passed to it. 

    char str3[13] = "Harry";
    strcat(str3, str2); // str3 now contains HarryHello
    printf("%s\n", str3);// This function is used to concatenate two strings.
    
    int negative = strcmp("far", "joke");
    int positive = strcmp("joke", "far"); // Uses ASCII values

    // This function is used to compare two strings. It returns 0 if the strings are equal, a 
    // negative value if the first string's mismatching character's ASCII value is less than the 
    // second string's corresponding mismatching character, and a positive value otherwise. 

    if (negative < 0)
    {
        printf("1st is first in dictionary, %d\n", negative);
    }

    if (positive > 0)
    {
        printf("2nd is first in dictionary, %d\n", positive);
    }
    return 0;
}