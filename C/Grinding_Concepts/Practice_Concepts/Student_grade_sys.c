#include<stdio.h>

int main(){
    int marks;
    printf("Enter Your Marks: ");
    scanf("%d",&marks);
    if (marks>=91 && marks <=100){
        printf("Grade A");
    }
    else if (marks>=81 && marks <= 90){
        printf("Grade B");
    }
    else if (marks>=71 && marks<=80){
        printf("Grade C");
    }
    else{
        printf("Grades not alloted");
    }
    return 0;
}