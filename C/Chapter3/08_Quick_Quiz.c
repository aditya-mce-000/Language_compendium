/*
Quick Quiz: Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50  S=> F
*/

#include<stdio.h>

int main(){
    int a;
    printf("Enter your marks out of 100 to view your grade: ");
    scanf("%d",&a);
    if (90<a<100){printf("Grade A !!!");}
    else if(80<a<90){printf("Grade B !!");}
    else if(70<a<80){printf("Grade C !");}
    else if(60<a<70){printf("Grade D");}
    else if(50<a<60){printf("Grade E");}
    else if(0<a<50){printf("Grade F. Please Improve!!");}
    else{printf("Enter Valid Marks.");}
    // switch(a){
    //     case 90<a<100:
    //     printf("Grade A");
    //     break;
    //     case 80<a<90:
    //     printf("Grade B");
    //     break;
    //     case 70<a<80:
    //     printf("Grade C");
    //     break;
    //     case 60<a<70:
    //     printf("Grade D");
    //     break;
    //     case 50<a<60:
    //     printf("Grade E");
    //     break;
    //     case 0<a<50:
    //     printf("Grade F");
    //     break;
    //     default:
    //     printf("Enter Vaid marks.");
    // }
    return 0;
}