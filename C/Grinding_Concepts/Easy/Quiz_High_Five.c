#include<stdio.h>

int main(){
    int score = 0;
    int input;
    int num = 1;
    while (num<=5){
        if (num==1){
            printf("A cat has \n1) 2 legs\n2) 3legs \n3) 4 legs\n Your Answer: ");
            scanf("%d",&input);
            if(input==3){
                printf("Correct Answer.\n");
                num++;
                score += 4;
            }
            else{
                printf("Incorrect\n");
                num++;
            }
        }
        else if (num==2){
            printf("A ostrich has \n 1) 2 legs\n2) 3legs \n3) 4 legs\n Your Answer: ");
            scanf("%d",&input);
            if(input==1){
                printf("Correct Answer.\n");
                num++;
                score += 4;
            }
            else{
                printf("Incorrect\n");
                num++;
            }
        }
        else if (num==3){
            printf("A dog has \n 1) 2 legs\n2) 3legs \n3) 4 legs\n Your Answer: ");
            scanf("%d",&input);
            if(input==3){
                printf("Correct Answer.\n");
                num++;
                score += 4;
            }
            else{
                printf("Incorrect\n");
                num++;
            }
        }
        else if (num==4){
            printf("A parrot has \n 1) 2 legs\n2) 3legs \n3) 4 legs\n Your Answer: ");
            scanf("%d",&input);
            if(input==1){
                printf("Correct Answer.\n");
                num++;
                score += 4;
            }
            else{
                printf("Incorrect\n");
                num++;
            }
        }
        else{
            printf("A Man has \n 1) 2 legs\n2) 3legs \n3) 4 legs\n Your Answer: ");
            scanf("%d",&input);
            if(input==1){
                printf("Correct Answer.\n");
                num++;
                score += 4;
            }
            else{
                printf("Incorrect\n");
                num++;
            }
        }
    }
    printf("score=%d",score);
    return 0;
}