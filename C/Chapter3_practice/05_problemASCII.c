#include<stdio.h>

int main()
{
    char c;
    printf("Enter single character: ");
    scanf("%c",&c);
    // int a=(int)c;// Unnecesarry step //this changes th char c to correesponding ascii value
    if (c>=97 && c<=122) printf("Lower Case");
    else printf("Not Lower Case\n");
    // if (c=='a' || c=='b' || c=='c' || c=='d'||c=='e'){printf("Lower case.");}//Brute force
    // ASCII Value //www.cs.cmu.edu/~pattis/15-1XX/handouts/ascii.html
    // printf("The value of c is %d",c); //This is not a mistake instead it returns the corresponding ascii value of the single character.
    return 0;
}